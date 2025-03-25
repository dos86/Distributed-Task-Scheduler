#include "Server.hpp"
#include <iostream>

Server::Server(size_t numThreads) : threadPool(numThreads) {}

void Server::start() {
    std::cout << "Server started.\n";
}

void Server::stop() {
    threadPool.shutdown();
    std::cout << "Server stopped.\n";
}

void Server::handleTask(const Task& task) {
    taskQueue.enqueue(task);
    threadPool.enqueue([this, task]() {
        // Simulate task processing
        Task processedTask = taskQueue.dequeue();
        processedTask.result = processedTask.description.size(); // Example computation
        std::cout << "Processed Task ID: " << processedTask.taskId
                  << ", Result: " << processedTask.result << "\n";
    });
}
