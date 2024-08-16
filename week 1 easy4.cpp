#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[5],i,j,b=0,c;
	for(i=0;i<5;i++)
	{cin>>a[i];
	}
	cout<<"enter element to be counted";
	cin>>c;
	for(i=0;i<5;i++)
	{
		if(a[i]==c)
		{
		b++;
		}
	}

	cout<<"\n the element"<<c<<"occurs "<<b<<"times";
	getch();
	return 0;
}
