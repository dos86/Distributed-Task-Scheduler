#include "Client.hpp"
#include <iostream>

void Client::submitTask(const std::string& serverAddress, const Task& task) {
    std::cout << "Submitting Task ID: " << task.taskId
              << " to server at " << serverAddress << "\n";
    // Simulate network communication
}

void Client::queryTaskResult(const std::string& taskId) {
    std::cout << "Querying result for Task ID: " << taskId << "\n";
    // Simulate database query
}
