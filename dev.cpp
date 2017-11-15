#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	double sum(0),average;
	int count(0);
	double result;
	double nums[7]={1.0,3.2,4.0,4.0,5.5,9.0,9.1};
	for(int temp:nums)
	{
		sum+=temp;
		count++;
	}
	average=sum/count;
	for(int temp:nums)
	{
		sum+=pow(temp-average,2);
	}
	result=sqrt(sum);
	cout<<"The standard deviation of this array is: "<<result<<endl;
	return 0;
}

		
