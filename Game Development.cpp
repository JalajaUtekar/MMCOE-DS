//Problem Statement: Write a game development program that implements the Bubble Sort algorithm. The program will simulate a simple game where the player can input a set of numbers, and the numbers will be sorted using Bubble Sort to simulate a "level-up" scenario where the player's scores are sorted in ascending order.
#include <iostream>
using namespace std;
int main(){
	int r,i,j,t = 0, sum1 = 0, sum2 = 0;
	cout<<"Enter number of rounds: ";
	cin>>r;
	int player1[r], player2[r];
	cout<<"Enter Player 1's scores: "<<endl;
	for (i=0;i<r;i++) {
		cout<<"Round "<<i+1<<": ";
		cin>>player1[i];
	}
	cout<<"Enter Player 2's scores: "<<endl;
	for (i=0;i<r;i++) {
		cout<<"Round "<<i+1<<": ";
		cin>>player2[i];
	}
	for (i=0;i<r;i++) {
		for (j=0;j<r-i-1;j++) {
			if (player1[j] < player1[j+1]) {
				t = player1[j];
				player1[j] = player1[j+1];
				player1[j+1] = t;
			}
		}
	}
	for (i=0;i<r;i++) {
		for (j=0;j<r-i-1;j++) {
			if (player2[j] < player2[j+1]) {
				t = player2[j];
				player2[j] = player2[j+1];
				player2[j+1] = t;
			}
		}
	}
	for (i=0;i<r;i++) {
		sum1 += player1[i];
		sum2 += player2[i];
	}
	cout<<"-------------------------------------------------"<<endl;
	cout<<"Player 1's sorted scores"<<endl;
	for (i=0;i<r;i++) {
		cout<<player1[i]<<"\t";
	}
	cout<<"\n-------------------------------------------------"<<endl;
	cout<<"Player 2's sorted scores"<<endl;
	for (i=0;i<r;i++) {
		cout<<player2[i]<<"\t";
	}
	cout<<"\n-------------------------------------------------"<<endl;
	if (sum1 == sum2) {
		cout<<"\n\nTIE!";
	}
	else if (sum2>sum1) {
		cout<<"\n\nPLAYER 2 WINS!";
	}
	else {
		cout<<"\n\nPLAYER 1 WINS!";
	}
	return 0;
}
