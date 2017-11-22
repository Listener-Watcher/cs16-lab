#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	ofstream output;
	string name=" ";
	vector<string> names;
	cout<<"Enter names of files that need to be compiled(Enter over to finish):\n";
	while(true) 
	{
		cin>>name;
		if(name!="over")
			names.push_back(name);
		else
			break;
	}
	string route="";
	cout<<"Enter the route you want to put the makefile(route should be ./labname/makefile):\n";
	cin>>route;
	output.open(route);
	output<<"all: ";
	for(int i=0;i<names.size();i++)
	{
		output<<names[i]<<" ";
	}
	for(int i=0;i<names.size();i++)
	{
		output<<"\n\tg++ -std=c++11 -Wall "<<names[i]<<".cpp -o "<<names[i]<<endl;
	}
	output<<"\n\n";
	for(int i=0;i<names.size();i++)
	{
		output<<names[i]<<":\n\tg++ -std=c++11 -Wall "<<names[i]<<".cpp -o "<<names[i]<<endl;
	}
	for(int i=0;i<names.size();i++)
	{
		output<<"clean"<<names[i]<<":\n\trm "<<names[i]<<endl;
	}
	output<<"clean"<<":\n\trm ";
	for(int i=0;i<names.size();i++)
	{
		if(i!=names.size()-1)
			output<<names[i]<<" ";
		else
			output<<names[i]<<endl;
	}
	output.close();
	return 0;
}


