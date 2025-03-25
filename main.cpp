#include <iostream>
#include "include/Server.hpp"
#include "include/Client.hpp"
#include "include/Database.hpp"

int main() {
    // Create a server with 4 worker threads
    Server server(4);
    server.start();

    // Create a client
    Client client;

    // Submit tasks
    Task task1("T1", "Compute Factorial");
    Task task2("T2", "Process File");
    client.submitTask("127.0.0.1", task1);
    client.submitTask("127.0.0.1", task2);

    // Handle tasks on the server
    server.handleTask(task1);
    server.handleTask(task2);

    // Query task results
    client.queryTaskResult("T1");
    client.queryTaskResult("T2");

    // Stop the server
    server.stop();

    return 0;
}
