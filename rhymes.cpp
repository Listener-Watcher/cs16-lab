#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <array>
using namespace std;
string erase_non_alpha(string origin)
{
	string after="";
	for(int i=0;i<origin.length();i++)
	{
		if(isalpha(origin[i])!=0)
		{
			after+=origin[i];
		}
	}
	return after;
}

int main()
{
	string name;
	cout<<"Enter file name: ";
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
		string word;
		string sum_alpha="";
		string words="";
		int count(0),number(0);
		while(!input_file.eof())
		{
			getline(input_file,word);
			if(word[word.length()-1]==' ')
				word=word.erase(word.length()-1);
			word=word.erase(0,word.rfind(" ")+1);
			word=erase_non_alpha(word);
			words+=word;
			if(number%2==0)
				words+=",";
			else
				words+=".";
			int len=word.length();
			if(len>=2)
				sum_alpha=sum_alpha+word.substr(len-2);
			number++;
		}
		input_file.close();
		int num(0);
		for(int i=0;i<sum_alpha.length();i=i+2)
		{
			if(sum_alpha[i]==sum_alpha[i+2])
			{
				if(sum_alpha[i+1]==sum_alpha[i+3])
				{
					count++;
					if(num%2==0)
						cout<<words.substr(0,words.find(","))<<" and "<<words.substr(words.find(",")+1,words.find(".")-words.find(",")-1)<<endl;
					else
						cout<<words.substr(0,words.find("."))<<" and "<<words.substr(words.find(".")+1,words.find(",")-words.find(".")-1)<<endl;
				}
			}
			if(num%2==0)
				words.erase(0,words.find(",")+1);
			else
				words.erase(0,words.find(".")+1);
			num++;
		}
		if(count==0)
		{
			cout<<"No rhymes found.\n";
		}
		else if(count==1)
		{
			cout<<"There is 1 pair of rhyming words.\n";
		}
		else
		{
			cout<<"There are "<<count<<" pairs of rhyming words.\n";
		}
	}
	return 0;
}

