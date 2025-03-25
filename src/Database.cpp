#include "Database.hpp"
#include <iostream>

void Database::storeResult(const std::string& taskId, int result) {
    results[taskId] = result;
    std::cout << "Stored result for Task ID: " << taskId
              << ", Result: " << result << "\n";
}

int Database::getResult(const std::string& taskId) const {
    auto it = results.find(taskId);
    if (it != results.end()) {
        return it->second;
    }
    return -1; // Task not found
}
