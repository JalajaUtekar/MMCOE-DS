//Problem Statement: Application: - When playing card games, players often use an approach similar to insertion sort to  organize their cards. They pick one card at a time and insert it into the correct position in their hand, maintaining a sorted sequence. Write a program that demonstrates how to organize (sort) cards in a hand using insertion sort.
#include <iostream> 
using namespace std;
int main() {
int n; 
    	cout << "Enter the number of cards you have: ";
    	cin >> n;
    	int cards[n];
    	cout << "Enter the cards you have in terms of their numeric value: " << endl; 
    	for (int i = 0; i < n; i++) { 
      	  	cout << "Card " << (i + 1) << ": ";
        	cin >> cards[i];
    	}
    	for (int i = 1; i < n; i++) { 
        	int key = cards[i];
        	int j = i - 1; 
        	while (j >= 0 && key < cards[j]) {
            		cards[j + 1] = cards[j]; 
            		j--;
        	}
        	cards[j + 1] = key;
        	cout << "\nHand after inserting card " << key << ": ";
        	for (int k = 0; k < n; k++) { 
            		cout << cards[k] << (k == n - 1 ? "" : ", ");
        	}
        	cout << endl;
  	    }
        cout << "\nFinal sorted hand: ";
    	for (int i = 0; i < n; i++) {
        	cout << cards[i] << (i == n - 1 ? "" : ", ");
    	}
    	cout << endl;
    	return 0; 
}
