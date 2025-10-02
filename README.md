# VectorTaskManagement

A simple **console-based Task Manager** built with C++ using `std::vector` for dynamic task storage.  
This project allows users to **add, view, update, and delete tasks** directly from the terminal.  

---

## ✨ Features

- ➕ **Add Task** – Create tasks with a title, description, priority, and due date.  
- 👀 **View Tasks** – Display all tasks with their details.  
- ✏️ **Update Task** – Mark tasks as completed.  
- ❌ **Delete Task** – Remove tasks from the list by title.  
- 📋 **In-memory Storage** – Uses `std::vector` for task management during runtime.  

---

## 🛠️ Tech Stack

- **Language:** C++  
- **IDE:** CLion (but works with any modern C++ compiler)  
- **Data Structures:** `std::vector`  

---

## 🚀 Getting Started

### 1. Clone the Repository
```bash
git clone https://github.com/your-username/VectorTaskManagement.git
cd VectorTaskManagement
```

### 2. Open in CLion
- Open CLion → **File > Open** → Select the project folder.  
- CLion will detect `CMakeLists.txt` (if added) or let you configure a simple build.  

### 3. Build & Run
- Click **Build Project** in CLion.  
- Run the program inside the IDE or from terminal:
```bash
./VectorTaskManagement
```

---

## 📖 Usage

When you run the program, you’ll see a menu like this:

```
Task Manager Options:
1. Add Task
2. View Tasks
3. Update Task
4. Delete Task
5. Exit
```

### Example workflow:
1. **Add a task** → Provide title, description, priority, and due date.  
2. **View all tasks** → Lists them with details.  
3. **Update task** → Mark a specific task as completed.  
4. **Delete task** → Remove a task by its title.  

---

## 🔮 Future Improvements

- 💾 **File Persistence** – Save/load tasks to a file (e.g., JSON, CSV, or text).  
- 🔍 **Search & Sort** – Find tasks by title or sort by priority/due date.  
- 📅 **Date Validation** – Ensure proper date formats for due dates.  
- 🖥️ **UI Enhancement** – Add a GUI or web-based frontend.  
- ✅ **Boolean Completion Status** – Use `bool` instead of string for completed flag.  
- 🔐 **User Profiles** – Multi-user support with authentication.  
This project currently has **no license**, meaning all rights are reserved.  
If you want to make it open-source, consider adding a license like **MIT** or **GPL**.  
