//Problem Statement: Write a program using a  stack  for push, pop, peek, and isEmpty operations. 
//Write isBalanced() Function that Iterates through the input expression, Pushes opening brackets onto the stack. 
//For closing brackets, it checks the top of the stack for a matching opening bracket. 
//Ensures that all opening brackets are matched by the end of the traversal. 
//Main Function: Accepts a string expression from the user. Uses isBalanced() to determine if the parentheses in the expression are balanced.
#include<iostream>
using namespace std;
class parenthesis {
	char arr[20];
	int top;
	public: 
		parenthesis() {top=-1;}
		void push(char a) {
			if (top < 19) {
				top++;
				arr[top] = a;
            }
            else {
				cout<<"Stack Overflow!";
			}
        }
		char pop() {
			if (isempty()) {
				cout<<"Stack Underflow!";
				return '\0';
			}
			char temp = arr[top];
			top--;
			return temp;
			
		}
		char peek() {
			if (isempty()) {
            return '\0';
			} else {
				return arr[top];
			}
		}
		bool isempty() {
			if (top == -1) {
				return 1;
			} else {
				return 0;
			}
		}
};
bool isbalanced(char *exp) {	
	parenthesis s;
	for (int i = 0; exp[i] != '\0'; i++) {
		if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(') {
		s.push(exp[i]);
		} else if (exp[i] == '}' || exp[i] == ']' || exp[i] == ')') {
			if (s.isempty()) {
				return false;
			}
			char x = s.peek();
			if ((exp[i] == '}' && x == '{') || 
				(exp[i] == ']' && x == '[') || 
				(exp[i] == ')' && x == '(')) {
				s.pop();
			} else {
				return false;
			}
		}
	}
	return s.isempty();
}
int main() {
	char exp[20];
	cout<<"Welcome to Parenthesis Checker!"<<endl;
	cout<<"Enter expression: ";
	cin>>exp;
	cout << "The expression " << exp << " is " << (isbalanced(exp) ? "a parenthesis." : "not a parenthesis.")<<endl;
	return 0;
}
