#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>
#include "Task.hpp"

class Client {
public:
    // Submit a task to the server
    void submitTask(const std::string& serverAddress, const Task& task);

    // Query the database for task results
    void queryTaskResult(const std::string& taskId);
};

#endif // CLIENT_HPP
