//Problem Statement: Write a program that implements a simple task scheduler using a singly linked list. Each node in the linked list represents a task with its priority and execution time. 
//Tasks are scheduled based on their priority, with higher priority tasks being executed first.
#include <iostream> 
#include <string> 
using namespace std; 
// Node class 
class Node { 
public: 
   		string task_name; 
    		int priority; 
    		int exe_time; 
    		Node* next; 
   		Node(string tn, int p, int e) { 
        			task_name = tn; 
        			priority = p; 
        			exe_time = e; 
        			next = NULL; 
    		} 
};  
// TaskScheduler class implementing singly linked list 
class TaskScheduler { 
private: 
    		Node* head; 
public: 
    		TaskScheduler() { 
        			head = NULL; 
    		} 
   		 // Function to create and add tasks 
    		void create() { 
        			char ch; 
        			do { 
            				Node* newnode = getnode();   // create new node 
            				insert_node(newnode);        // insert it in correct place 
            				cout << "Do you want to add more tasks? (y/n): "; 
            				cin >> ch; 
        			} while (ch == 'y' || ch == 'Y'); 
    		} 
    		// Get details from user and create node 
    
Node* getnode() { 
        			string tn; 
        			int p, e; 
        			cout << "\nEnter task name: "; 
        			cin >> tn; 
        			cout << "Enter priority: "; 
        			cin >> p; 
        			cout << "Enter execution time: "; 
        			cin >> e; 
        			Node* newnode = new Node(tn, p, e); 
        			return newnode; 
   	 	} 
    		// Insert node in sorted order (based on priority) 
    		void insert_node(Node* newnode) { 
       		 	if (head == NULL || newnode->priority > head->priority) { 
            			        newnode->next = head; 
            			        head = newnode; 
        			} else { 
            			        Node* temp = head; 
            			        while (temp->next != NULL && temp->next->priority >= newnode->priority) 
			        {    	temp = temp->next; 
            			         } 
           			        newnode->next = temp->next; 
            			        temp->next = newnode; 
        			} 
    		} 
    		// Display all tasks 
    		void display() { 
        			cout << "\n";
        			if (head == NULL) { 
            				cout << "No tasks scheduled!\n"; 
            				return; 
        			} 
        			Node* temp = head; 
        			while (temp != NULL) { 
            				cout << "Task '" << temp->task_name << "' with priority '" << 
					temp->priority << "' is scheduled for execution"<<endl; 
            				temp = temp->next; 
        			} 
    		} 
    		// Execute (delete) tasks in order of priority 
    		void delete_node() { 
        			if (head == NULL) { 
            				cout << "No tasks to execute!\n"; 
           	 			return; 
        			} 
        			cout << "\nExecuting Tasks: \n"; 
        			while (head != NULL) { 
            				cout << "Executing '" << head->task_name  << "' (Time: " << 
					head->exe_time << "s)\n"; 
            				Node* temp = head; 
            				head = head->next; 
            				delete temp; 
        			} 
        			cout << "All tasks executed!\n"; 
    		} 
}; 
int main() { 
    	TaskScheduler scheduler; 
    	int choice; 
    	cout << "\n===== Simple Task Scheduler ====="; 
    	do { 
        		cout << "\n1. Add Tasks\n"; 
        		cout << "2. Display Tasks\n"; 
        		cout << "3. Execute All Tasks\n"; 
        		cout << "4. Exit\n"; 
        		cout << "Enter your choice: "; 
        		cin >> choice; 
        		switch (choice) { 
        		case 1: 
            			scheduler.create(); 
            			break; 
        		case 2: 
            			scheduler.display(); 
            			break; 
        		case 3: 
            			scheduler.delete_node(); 
            			break; 
        		case 4: 
           			cout << "Exiting!\n"; 
            			break; 
        		default: 
            			cout << "Invalid choice! Try again.\n"; 
        		} 
    	} while (choice != 4); 
    	return 0; 
}
