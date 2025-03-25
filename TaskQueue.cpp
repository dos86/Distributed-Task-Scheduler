#include "TaskQueue.hpp"

void TaskQueue::enqueue(const Task& task) {
    std::lock_guard<std::mutex> lock(mutex);
    tasks.push(task);
    cv.notify_one();
}

Task TaskQueue::dequeue() {
    std::unique_lock<std::mutex> lock(mutex);
    cv.wait(lock, [this]() { return !tasks.empty(); });
    Task task = tasks.front();
    tasks.pop();
    return task;
}

bool TaskQueue::isEmpty() {
    std::lock_guard<std::mutex> lock(mutex);
    return tasks.empty();
}
