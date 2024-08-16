#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[5],i,j,b=0,c=0;
	for(i=0;i<5;i++)
	{cin>>a[i];
	}
	for(i=0;i<5;i++)
	{if(a[i]%2==0)
	{b++;}
	else
	{c++;}
	}	
	cout<<"even:"<<b<<endl<<"odd:"<<c;
	getch();
	return 0;
}
