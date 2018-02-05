//Student name: Anis Syazwani binti Md. Aini
//Matrix id: A17DW0731
#include<iostream>
using namespace std;
int sum(int x, int y)
{
	int result;
	result=x+y;
	cout<<"result: "<<result;
}
int main()
{
	int x, y;
	
	cout<<"Enter first num: ";
	cin>>x;
	cout<<"Enter sec num: ";
	cin>>y;
	sum(x, y);
	
	return 0;
}
