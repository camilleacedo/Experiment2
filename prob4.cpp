#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	int count;
	for(count=1;count<=10;count++){		
		cout<<count <<",";		
	}
	if (count=10)
		{
			for(count=12;count<=30;count+=2){
			
			cout<<count;
			if (count<30){
				cout<<",";
			}
			
			}
		}
	getch();
	return 0;
}
