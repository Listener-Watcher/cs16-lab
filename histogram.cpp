#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int score,number;
	//all of the grades
	vector<int> grade;
	//vector with no repeating
	vecotr<int> aagrade;
	//get input from the user
	cout<<"Enter number of grades:\n";
	cin>>number;
	cout << "Enter grades (each on a new line)"
		cin>>score;
	for(int i=0;i<number;i++)
	{
		cin>>score;
		grade.push_back(score);
		cout << endl;
		//if it is the first occurrence of this number, add to aagrade
		
	}


	// and use the for loop to count each grade's number
	
	int count=0;

	//is this order correct? should it loop through the larger vector first?
	//or, should grade and aagrade be switched in the for-loop declarations?
	for(int i=0; i< grade.size(); i++)
	{
		for(int j=0; j<aagrade.size(); j++)
		{
			if(aagrade[j]==grade[i]){
			count++;
			}
		}
	}

	char s= '*';
	cout.width(3);
	vector<char> star;

	return 0;
}
