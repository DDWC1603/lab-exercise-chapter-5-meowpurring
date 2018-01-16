//this is an uncomple program with function in it, please complete this program. thank you.
//make the program so that when the user enter 'n' three time then it will break and print "the fudge!?"

#include <iostream>
using namespace std;


int main()
{
}

void masuk_tak()
{
	char ans;
	
	cout<<endl<<"Dia shoot masuk tak? (answer y-yes atau n-tidak"<<endl;
	

	ans=' ';
	while(ans!='y'  ans!='y'){
		cin>>ans;
		if(ans!='n'  ans!='n')
		cout<<endl<<"cakap lah bebetul, try again: "<<endl;
		}

	if(ans='n')
	{
		cout<<endl<<"the fudge?!";
		masuk_tak();
	}
	cout<<endl<<"chantek!"<<endl;
}


