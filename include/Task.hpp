#ifndef TASK_HPP
#define TASK_HPP

#include <string>

struct Task {
    std::string taskId;
    std::string description;
    int result;

    // Default constructor
    Task() : taskId(""), description(""), result(0) {}

    // Parameterized constructor
    Task(const std::string& id, const std::string& desc)
        : taskId(id), description(desc), result(0) {}
};

#endif // TASK_HPP
