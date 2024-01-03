#include <iostream>
#include <vector>
using namespace std;

struct Task
{
    string task_discription;
    bool completed;
};

void TASKDISPLAY(const vector<Task> &tasks)
{
    cout << "To-Do List: \n";
    for (size_t i = 0; i < tasks.size(); i++)
    {
        cout << i + 1 << ". [" << (tasks[i].completed ? "X" : " ") << "]" << tasks[i].task_discription << endl;
    }
}

int main()
{
    vector<Task> tasks;
    int choice;

    cout << "To-Do List\n";

    while (1)
    {
        cout << "\n Options: \n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        if (choice == 1)
        {
            Task AddTask;
            cout << "Enter task task_discription: ";
            cin.ignore();
            getline(cin, AddTask.task_discription);
            AddTask.completed = false;
            tasks.push_back(AddTask);
            cout << "Task added!\n";
        }
        else if (choice == 2)
        {
            if (tasks.empty())
            {
                cout << "No tasks to display.\n";
            }
            else
            {
                TASKDISPLAY(tasks);
            }
        }
        else if (choice == 3)
        {
            int completed_task;
            cout << "Enter the index of the task to mark as completed: \n";
            cin >> completed_task;

            if (completed_task >= 1 && completed_task <= static_cast<int>(tasks.size()))
            {
                tasks[completed_task - 1].completed = true;
                cout << "Task marked as completed!\n";
            }
            else
            {
                cout << "Invalid task index.\n";
            }
        }
        else if (choice == 4)
        {
            int removed_task;
            cout << "Enter the index of the task to remove: \n";
            cin >> removed_task;

            if (removed_task >= 1 && removed_task <= static_cast<int>(tasks.size()))
            {
                tasks.erase(tasks.begin() + removed_task - 1); // Adjust index here
                cout << "Task removed!\n";
            }
            else
            {
                cout << "Invalid task index.\n";
            }
        }
        else if (choice == 5)
        {
            cout << "Exiting the program.\n";
            break;
        }
        else
        {
            cout << "Invalid choice. Please choose a valid option.\n";
        }
    }

    return 0;
}
