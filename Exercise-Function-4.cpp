//finish up this program.thanks.
//the output will be something like a wave that is from this "+"
//complete and fix the program below.

#include <iostream>
#include <iomanip>

using namespace std;

void ombakOmbak(int repeat=3,int height=5,int up=2,int down=2)
{
	while(repeat >0)
	{
		for(/*i<=up*/)
		cout<<setw(height)<<right<<"+"<<endl;
		for(/*i<=down*/)
		cout<<"+"<<endl;
		repeat --;
	}
}



void OmbakKeluar()
{

	cout<<"\nwaveDemo\n";
	ombakOmbak();
}
