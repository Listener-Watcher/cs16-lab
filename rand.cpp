#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a=-1,b=-1;
	int randomArray[10][5]={0};
	int index1(0);
	int index2(0);
	int number;
	bool judge=true;
	srand(time(0));
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			randomArray[i][j]=rand()%50;
			cout<<randomArray[i][j]<<endl;
		}
	}
	cout<<"Please enter a number between 0 and 49:\n";
	cin>>number;
	while(judge&&index1<10)
	{
		while(judge&&index2<5)
		{
			if(randomArray[index1][index2]==number)
			{
				a=index1;
				b=index2;
				judge=false;
			}
			else
			{
				index2++;
			}
		}
	index1++;
	}
	if(a==-1)
	cout<<"I did not find this number.\n";
	else
	cout<<"The row is "<<a<<" The column is "<<b<<endl;
return 0;
}		
		
