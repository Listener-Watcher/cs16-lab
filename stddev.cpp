#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

double stddev(ifstream& inputFile, string Name)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	double next, sum(0), average,dev(0);
	int count=0;
	while(inputFile>>next)
	{
		sum+=next;
		count++;
	}
	average=sum/count;
	inputFile.close();
	inputFile.open(Name);
	while(inputFile>>next)
	{
		dev+=pow((next-average),2)/(count-1);
	}
	dev=sqrt(dev);
	return dev;
}

int main()
{
	string name;
	cout<<"Enter filename:\n";
	cin>>name;
	ifstream input_file;
	input_file.open(name);
	if(input_file.fail())
	{
		cerr<<"Input file opening failed.\n";
		exit(1);
	}
	else
	{
		cout<<"The standard deviation is "<<stddev(input_file,name)<<endl;
	}
	input_file.close();
	return 0;
}









