//Student name: Anis Syazwani binti Md. Aini
//Matrix id: A17DW0731
#include<iostream>
using namespace std;

double avg(double m, double n);

int main()
{
	double m=0.0;
	double n=0.0;
	double avg;
	
	cout<<"Enter first num: "<<endl;
	cin>>m;
	cout<<"Enter sec num: "<<endl;
	cin>>n;
	cin.get();
	avg=(m+n)/2;
	cout<<"Average is: "<<avg<<endl;
	
	return 0;
}
