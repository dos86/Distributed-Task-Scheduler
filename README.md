# Distributed-Task-Scheduler

 #### Overview:
This project simulates a distributed task scheduler where tasks are dynamically assigned to worker threads over a network. It is designed to demonstrate real-world usage of C++ features such as STL containers, object-oriented design, multithreading, TCP/IP networking, and database interaction. The system allows users to submit tasks via a client application, which are then processed by worker threads on a server. The results are stored in a Microsoft SQL Server database for later retrieval.

---

### Key Features:
1. **Task Submission**:
   - Clients can submit tasks (e.g., mathematical computations or file processing) to the server via a TCP/IP connection.
   - Tasks are serialized and sent over the network.

2. **Task Processing**:
   - The server uses a thread pool to process tasks concurrently.
   - Each task is executed by a worker thread, and the result is stored in the database.

3. **Database Integration**:
   - Results of completed tasks are stored in a Microsoft SQL Server database.
   - Users can query the database to retrieve task results.

4. **Scalability**:
   - The server supports multiple clients submitting tasks simultaneously.
   - Thread-safe data structures ensure safe access to shared resources.

5. **Error Handling**:
   - Robust error handling for network communication, database operations, and threading.

---

### Folder Structure:
```
DistributedTaskScheduler/
├── include/
│   ├── Task.hpp          // Task class definition
│   ├── TaskQueue.hpp     // Thread-safe task queue using STL
│   ├── Server.hpp        // TCP server implementation
│   ├── Client.hpp        // TCP client implementation
│   ├── Database.hpp      // SQL Server database wrapper
│   └── ThreadPool.hpp    // Thread pool for concurrent task execution
├── src/
│   ├── Task.cpp
│   ├── TaskQueue.cpp
│   ├── Server.cpp
│   ├── Client.cpp
│   ├── Database.cpp
│   └── ThreadPool.cpp
├── main.cpp              // Main entry point for both client and server
├── CMakeLists.txt        // Build configuration
└── README.md             // Project documentation
```

---

### Technologies Used:
1. **STL**: `std::queue`, `std::thread`, `std::mutex`, `std::condition_variable`, `std::vector`.
2. **OOP**: Encapsulation, inheritance, and polymorphism used in designing the `Task` and `Database` classes.
3. **Multithreading/Concurrency**: Thread pool for concurrent task execution, thread-safe task queue using mutexes and condition variables.
4. **Networking**: TCP/IP sockets for client-server communication.
5. **SQL**: Interaction with Microsoft SQL Server using ODBC (Open Database Connectivity).

---

### Workflow:
1. **Client**:
   - Connects to the server via TCP/IP.
   - Submits tasks (e.g., "compute factorial of 10") to the server.
   - Optionally queries the database for task results.

2. **Server**:
   - Listens for incoming connections from clients.
   - Receives tasks and enqueues them into a thread-safe task queue.
   - Worker threads dequeue tasks, execute them, and store results in the database.

3. **Database**:
   - Stores task results in a table (`Tasks`) with columns: `TaskId`, `Description`, `Result`, `Status`.

---

### Example Use Case:
- A user submits a task to compute the factorial of 10 via the client application.
- The server processes the task using a worker thread and stores the result (`10! = 3628800`) in the database.
- The user queries the database to retrieve the result.        
     
