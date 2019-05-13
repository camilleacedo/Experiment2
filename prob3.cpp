#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>

using namespace std;
int main() {
	int x;
	float y,z = 2.5;
	float v;
	cout<<"Input x \n";
	cin>>x;
	cout<<"Input y \n";
	cin>>y;	
	switch(x){
		case 1:{
			if (y>1 && y<5){			
			v=x*y*z;
			cout<<setw(10)<<setprecision(4)<<v;
			}	
			else{			
			v=x+(y/z);
			cout<<setw(10)<<setprecision(4)<<v;
			}
			break;		
		}
		case 2:{
			if (y<=5){			
			v=abs((x-y)/z);
		cout<<setprecision(4)<<setw(10)<<v;			
			}
			else{			
			v= x-sqrt(y+z);
			cout<<setw(10)<<setprecision(4)<<v;
			}
			break;		
		}
		default:{
			v=x+y+z;
			cout<<setw(10)<<setprecision(4)<<v;
			break;
		}
	}
	getch();
	return 0;
}
