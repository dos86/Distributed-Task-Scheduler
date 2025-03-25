#ifndef SERVER_HPP
#define SERVER_HPP

#include <thread>
#include <vector>
#include "TaskQueue.hpp"
#include "ThreadPool.hpp"

class Server {
private:
    TaskQueue taskQueue;
    ThreadPool threadPool;

public:
    Server(size_t numThreads);

    // Start the server
    void start();

    // Stop the server
    void stop();

    // Handle incoming tasks
    void handleTask(const Task& task);
};

#endif // SERVER_HPP
