//Problem Statement: Write a program to track rainfall data for 3 cities over 4 months. Using a 2D array, we can store the data, calculate the average rainfall for each city, and display the rainfall data in a tabular format.
#include<iostream>
using namespace std;
int main()
{
	float rnfl[3][4], total=0, avg=0;
	int i, j;
  for (i=0;i<3;i++)
  {
		cout<<"Enter Rainfall for City "<<i+1<<":\n";
		for (j=0;j<4;j++)
		{
			cout<<"Month "<<j+1<<": "; 
		  cin>>rnfl[i][j];
		}  
	}
	cout<<"\n\t\t\t\t\t\tRainfall Tracking\n";
	cout<<"S.No\t City Name\t Month 1\t Month 2\t Month 3\t Month 4\t Average Rainfall\n";
	cout<<"----------------------------------------------------------------------------------------------------------\n";
  for (i=0;i<3;i++)
  {
		cout<<i+1<<"    \t  "<<"City"<<i+1<<"\t\t";
		for (j=0;j<4;j++)
		{
			cout<<"  "<<rnfl[i][j]<<"ml\t\t";
			total += rnfl[i][j];
		}
		avg = total/4;
		cout<<"  "<<avg<<"ml\n";
		cout<<"----------------------------------------------------------------------------------------------------------\n";
		total = 0;
	}	 
	return 0;
}
