#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x,ctr,result=0;
	
	do{	
		cout<<"Enter a number: ";
		cin>>x;
			
		if(x<=0)
	    cout<<"Thank you!";
		else
		{
			for(ctr=1;ctr<=x;++ctr)
			{
				result+=ctr;	
			}
			cout<<"The sum of all whole numbers from 1 to "<<x<<" is "<<result<< endl;
			result=0;
		}
	}while(x!=0);
	getch();
	return 0;
}
