#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> split(string target, string delimiter){
	//Pre- condition:a string named target and a string named delimiter
	//Post-condition:returns a vector of strings in target that are separated by the string delimiter
	
	
	//returnable vector
	vector<string> ret;
	//to break out of loops
	//index of vector
	//loop through input string
	target.insert(0, delimiter);
	target +=delimiter;
	for(int i=0; i<target.length(); i++)
	{
			
			//if the character in target is not the delimiter
			if (target[i]==delimiter[0])//i think this is wrong
			{
			//add to the vector
				string temp=target.substr(target.find(delimiter[0]),i);
				ret.push_back(temp);
		
			}
			//if the next character in the string is the delimiter
	}
	return ret;
}
int main(){
	//variables for the function
	string target;
	string delimiter;

	//string and delimiter from user
	cout << "Enter string to split:" << endl;
	getline(cin, target);
	cout << "Enter delimiter string:" << endl;
	cin >> delimiter;
	
	//is this correct?
	vector <string> spl = split(target, delimiter);
	
	//print
	cout<<"The substrings are: ";
	for(int i=0;i<spl.size();i++)
	{
		if(i!=spl.size()-1)
			cout << "\""<< spl[i] << "\"" << " , ";//
		else
			cout <<"\""<< spl[i]<< "\""<<endl;

	}
//	spl[spl.size()-1]=spl[spl.size()-1].erase(0,1);
//cout<<"\""<<spl[spl.size()-1]<<"\""<<endl;	
	return 0;
}

