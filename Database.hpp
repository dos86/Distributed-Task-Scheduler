#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <string>
#include <map>
#include "Task.hpp"

class Database {
private:
    std::map<std::string, int> results; // taskId -> result

public:
    // Store the result of a task
    void storeResult(const std::string& taskId, int result);

    // Retrieve the result of a task
    int getResult(const std::string& taskId) const;
};

#endif // DATABASE_HPP
