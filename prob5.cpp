#include <iostream>
#include <conio.h>


using namespace std;
int main() {
	int i,count1=0,count2=1,count3=1;
	cout<<count1<<","<<count2<<",";	
	for(i=0;i<20;i++){
	count3 = count1+count2;
	count1 = count2;
	count2 = count3;
	cout<<count3;
	if(count3<10946)
	cout<<",";
	}
	getch();
	return 0;

}
