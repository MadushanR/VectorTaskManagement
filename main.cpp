#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

/// Task structure
class Task {
private:
    std::string title;
    std::string description;
    int priority;
    std::string dueDate;
    std::string completed;

public:
    Task(std::string title, std::string description, int priority, std::string dueDate, std::string completed)
            : title(title), description(description), priority(priority), dueDate(dueDate), completed(completed) {}

    std::string gettitle()  {
        return title;
    }

    std::string getdescription()  {
        return description;
    }

    int getpriority()  {
        return priority;
    }

    std::string getduedate()  {
        return dueDate;
    }

    std::string getcompleted()  {
        return completed;
    }

    void settitle( std::string title) {
        this->title = title;
    }

    void setdescription( std::string description) {
        this->description = description;
    }

    void setpriority(int priority) {
        this->priority = priority;
    }

    void setdueDate( std::string dueDate) {
        this->dueDate = dueDate;
    }

    void setcompleted(std::string completed) {
        this->completed = completed;
    }
};

// Task Manager class
class TaskManager {
public:
    std::vector<Task> tasks;

    // Function to add a task
    void addTask() {
        std::string title, description, duedate;
        int priority;
        std::string completed = "false";

        std::cout << "Enter the title of the task: ";
        std::cin >> title;
        std::cout << "Enter the description of the task: ";
        std::cin >> description;
        std::cout << "Enter the priority of the task in numbers only: ";
        std::cin >> priority;
        std::cout << "Enter the due date of the task(dd/mm/yyyy): ";
        std::cin >> duedate;
        Task task(title, description, priority, duedate, completed);
        tasks.push_back(task);

    };

    // Function to read and display tasks
    void viewTasks() {
        for (auto it = tasks.begin() ; it != tasks.end(); ++it) {
            std::cout << std::endl
                      << "Title: " << it->gettitle() << " | Description: " << it->getdescription()
                      << " | Priority: " << it->getpriority() << " | Completed: " << it->getcompleted()
                      << " | Due Date: " << it->getduedate() << std::endl;
        }
    };

    // Function to update a task
    void updateTask() {
        viewTasks();
        std::string title;
        std::string completed = "false";

        std::cout << "Please enter the Task Title: ";
        std::cin >> title;
        bool found= false;
        for (auto it = tasks.begin() ; it != tasks.end(); ++it) {
            if (it->gettitle() == title) {
                std::cout << "Please enter completed(True/False): ";
                std::cin >> completed;
                it->setcompleted(completed);

                std::cout << "Title: " << it->gettitle() << " | Completed: " << it->getcompleted()
                          << " | Due date: " << it->getduedate() << std::endl;
                return;
            }
        }
        std :: cout << "Task not found! Please try again." << std :: endl;

    };

    // Function to delete a task
    void deleteTask() {
        viewTasks();
        std::string title;
        std::cout << "Enter Title" << std::endl;
        std::cin >> title;
        for (auto it = tasks.begin() ; it != tasks.end(); ++it){
            std::string t_title = it->gettitle();
            if (t_title == title){
                tasks.erase(it);
                std :: cout << "Task Deleted!" << std :: endl;
                return;
            }
        }
        std :: cout << "Task not found! Please try again." << std :: endl;
    }
};

int main() {

    int choice;
    TaskManager taskManager;
    while (true) {
    std::cout << "\nTask Manager Options:\n";
    std::cout << "1. Add Task\n";
    std::cout << "2. View Tasks\n";
    std::cout << "3. Update Task\n";
    std::cout << "4. Delete Task\n";
    std::cout << "5. Exit\n";

    std::cout << "Enter your choice: ";
    std::cin >> choice;

        switch (choice) {
            case 1: {
                taskManager.addTask();
                break;

                case 2:
                    taskManager.viewTasks();
                break;

                case 3:
                    taskManager.updateTask();
                break;

                case 4:
                    taskManager.deleteTask();
                break;

                case 5:
                    std::cout << "Exiting Task Manager. Goodbye!\n";
                return 0;

                default:
                    std::cout << "Invalid choice. Please try again.\n";
                break;
            }
        }

    }
    return 0;
}