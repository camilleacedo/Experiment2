#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	int gallons;
	float bill;
	float unpaid;	
	cout<<"How much gallons used?";
	cin>>gallons;
	cout<<"How much unpaid balance?";
	cin>>unpaid;
	if (unpaid > 0){
		bill = (gallons*1.10)+35+20;
		cout<<"P" <<bill;	
	}
	else
	{	
		bill = (gallons*1.10)+35;
		cout<<"P" <<bill;
	}
	getch();
	return 0;
}
