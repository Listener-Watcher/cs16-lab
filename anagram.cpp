//anagram.cpp
//tells if two words are anagrams
//

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

string purify(string str){
	string output="";
	for(int i=0; i<str.length(); i++){
		if (isalpha(str[i])){
			output+=tolower(str[i]);
		}
		}
	return output;
	}

int main(){
//get a character vector from the user
vector<char> v1;
cout << "Enter first string:" <<endl;
string s1;
bool judgea=true;
bool judgeb=true;
	getline(cin, s1);
	for(int i=0;i<s1.length();i++)
	{
		if(isalpha(s1[i]))
			judgea=false;
	}
	//clean string 1
	s1= purify(s1);
	
	for(int i=0; i<s1.size(); i++)
	{
		v1.push_back(s1[i]);
	}
	
	cout << "Enter second string:" << endl;
	string s2;
	getline(cin, s2);
	for(int i=0;i<s2.length();i++)
	{
		if(isalpha(s2[i]))
			judgeb=false;
	}
	//clean the string 2
	s2=purify(s2);
	bool judge=true;
	int j=0;

	//for every element in s2, search in v1 and if found delete it
	for(int i=0; i<s2.length(); i++)
	{
		while(judge)
		{
			if(s2[i]==v1[j])
			{
				v1.erase(v1.begin()+j);
				judge=false;
			}
			else if(j==v1.size())
			{
				judge=false;
			}
			j++;
		}
		j=0;
		judge=true;
	}

	if(judgea&&judgeb)
		cout<<"The strings are not anagrams." << endl;
	else if(s1.size() != s2.size())
		cout << "The strings are not anagrams." << endl;
	else if(v1.size()==0)
		cout << "The strings are anagrams." <<endl;
	else
		cout<<"The strings are not anagrams.\n";

	//at the end, check the length of v1 (if 1 then anagram)
	
//use a for loop to put each character in a string into the vector
return 0;
}


