#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10],b[10],i,j,k=0;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<k;j++)
		{
			if(a[i]==b[j])
			{
				break;
			}
		}
		if(j==k)
		{b[k]=a[i];
		k++;
		}
	}
	cout<<"\n after removing duplicates:";
	for(i=0;i<k;i++)
	{cout<<b[i]<<" ";
	}
	getch();
	return 0;
}
