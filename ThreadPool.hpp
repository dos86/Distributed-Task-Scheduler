#ifndef THREADPOOL_HPP
#define THREADPOOL_HPP

#include <thread>
#include <vector>
#include <functional>
#include <queue>
#include <mutex>
#include <condition_variable>

class ThreadPool {
private:
    std::vector<std::thread> workers;
    std::queue<std::function<void()>> tasks;
    std::mutex mutex;
    std::condition_variable cv;
    bool stopFlag;

public:
    ThreadPool(size_t numThreads);
    ~ThreadPool();

    // Add a task to the thread pool
    void enqueue(std::function<void()> task);

    // Stop all threads
    void shutdown();
};

#endif // THREADPOOL_HPP
