#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
	char package;
	int hours; 
	float price;

	cout<<"SUBSCRIPTION PACKAGES"<<endl;
	cout<<"Package A: For P995/mo 10 hrs of access are provided. Additional hrs are P20/hr."<<endl;
	cout<<"Package B: For P1495/mo 20 hrs of access are provided. Additional hrs are P10/hr."<<endl;
	cout<<"Package C: For P1995/mo of unlimited access is provided."<<endl;
	cout<<"What package?\n";
	cin>>package;
	cout<<"How many hours?\n";
	cin>>hours;
	switch(package){
		case 'A': {
		
			if (hours>=10){			
			price = 995+((hours-10)*20);
			cout<<price;			
			}
			else{		
			price = 995;
			cout<<price;
			}
			break;
		}
		case 'B': {
		
			if (hours>=20){			
			price = 1495+((hours-20)*10);
			cout<<price;			
			}
			else{			
			price = 1495;
			cout<<price;
			}
			break;
		}
		case 'C': {
			price = 1995;
			cout<<1995;	
			break;
		}
		case 'a': {
		
			if (hours>=10){			
			price = 995+((hours-10)*20);
			cout<<price;			
			}
			else{		
			price = 995;
			cout<<price;
			}
			break;
		}
		case 'b': {
		
		if (hours>=20){			
			price = 1495+((hours-20)*10);
			cout<<price;			
			}
			else{			
			price = 1495;
			cout<<price;
			}
			break;
		}
		case 'c': {
			price = 1995;
			cout<<1995;	
			break;
		}
		default:
			cout<<"No package was selected.";
	}	
	getch();
	return 0;
}
