//Student name: Anis Syazwani binti Md. Aini
//Matrix id: A17DW0731
#include<iostream>
using namespace std;
void masuk_tak()
{
    char ans;
	cout<<endl<<"Dia shoot masuk tak? (answer y-yes atau n-tidak): "<<endl;
	ans=' ';
	while(ans!='y' && ans!='n')
	{
		cin>>ans;
		if(ans!='y' && ans!='n')
		cout<<endl<<"cakaplah bebetul, try again: "<<endl;
	}
	if(ans=='n')
	{
		cout<<endl<<"...?!";
		masuk_tak();
	}
	cout<<endl<<"cool!"<<endl;
}
int main()
{
    masuk_tak();
    getchar();
}
