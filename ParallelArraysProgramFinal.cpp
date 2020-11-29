/* parallelArraysProgram
Program for CSCI 112
Last edited by Pat Doyle 2/10/20 */

#include <iostream>
using namespace std;

int main(){
	
	string playerNameArray[5];
	int playerPointsArray [5];
	//creates 2 arrays: one for player names and another for the points they've scored
	int sum = 0;
	double averagePoints = 0;
	string leadingScorerName= "";
	int leadingScorerPoints = 0;
	//initializes variables  
	
	for(int i = 0; i < 5; i++){
		
		int playerCount = i + 1;
		
		cout<<"Enter the name of player "<< playerCount<< "\n";
		cin >> playerNameArray[i];
		
		cout<< "Enter the amount of points scored by "<< playerNameArray[i]<< "\n";
		cin >> playerPointsArray[i];
		//for loop asks the user for input and assigns input to parallel arrays
		
		sum += playerPointsArray[i];
		//adds each new value in the playerPointsArray to a total sum
		
		if(playerPointsArray[i] > leadingScorerPoints){
			leadingScorerPoints = playerPointsArray[i];
			leadingScorerName = playerNameArray[i];
		}
		/*if statement assigns the leading scorer to the i-th element of each
		 array whenever a new greatest value is inpuited */
	}
	
	
	
	averagePoints= sum/5;
	//initializes variable to find the average points scored per player
	
	cout << "Total Points Scored: "<< sum << "\n";
	cout << "Players Averaged "<< averagePoints << " points\n";
	cout << "The leading scorer was "<< leadingScorerName<<" ";
	cout<< "who scored "<< leadingScorerPoints << " points. ";
	//outputs information
	return 0;
	 
}
