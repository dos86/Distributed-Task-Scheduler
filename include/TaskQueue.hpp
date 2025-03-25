#ifndef TASKQUEUE_HPP
#define TASKQUEUE_HPP

#include <queue>
#include <mutex>
#include <condition_variable>
#include "Task.hpp"

class TaskQueue {
private:
    std::queue<Task> tasks;
    std::mutex mutex;
    std::condition_variable cv;

public:
    // Add a task to the queue
    void enqueue(const Task& task);

    // Remove and return the next task from the queue
    Task dequeue();

    // Check if the queue is empty
    bool isEmpty();
};

#endif // TASKQUEUE_HPP
