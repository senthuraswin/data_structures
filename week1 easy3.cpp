#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[5],i,j,b,c=0;
	for(i=0;i<5;i++)
	{cin>>a[i];
	}
	for(i=0;i<5;i++)
	{b=0;
		for(j=0;j<5;j++)
		{
			if(a[i]==a[j])
			{b++;
			}
		}
       if(b==1)
       {c++;
	   }
	}

	cout<<"\n number of unique elements:"<<c;
	getch();
	return 0;
}
