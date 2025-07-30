//Problem Statement: Write a program for tracking daily temperatures of 3 cities for a week . The program calculates the average temperature for each day and for the week.
#include <iostream> 
using namespace std; 
int main() 
{ 
    float temp[3][7], total_temp[3], avg_temp[3]; 
   	for (int i=0; i < 3; i++) 
    { 
        cout<<"Enter following Temperature Data of City "<<i+1<<endl; 
        for (int j=0; j < 7; j++) 
        { 
            cout<<"Temperature in Celcius for Day "<<j+1<<": ";  
            cin>>temp[i][j]; 
       	} 
   	} 
    for (int i=0; i<3; i++) 
    { 
        total_temp[i] = temp[i][0] + temp[i][1] + temp[i][2] + temp[i][3] + temp[i][4] + temp[i][5] + temp[i][6] + temp[i][7]; 
        avg_temp[i] = total_temp[i]/7; 
    } 
    cout<<"\n\t\t\tTemperature Tracker"<<endl; 
    cout<<"City \tDay 1 \tDay 2 \tDay 3 \tDay 4 \tDay 5 \tDay 6 \tDay 7 \tAverage\n"; 
    cout<<"----------------------------------------------------------------------------------"<<endl; 
   	for (int i=0; i<3; i++) 
    {      
      cout<<"City"<<i+1<<"\t"<<temp[i][0]<<"\t"<<temp[i][1]<<"\t"<<temp[i][2]<<"\t"<<temp[i][3]<<"\t"<<temp[i][4]<<"\t"<<temp[i][5]<<"\t"<<temp[i][6]<<"\t"<<avg_temp[i]<<endl; 
    } 
    cout<<"----------------------------------------------------------------------------------"<<endl; 
    return 0; 
} 
