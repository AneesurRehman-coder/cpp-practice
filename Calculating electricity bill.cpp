#include<iostream>
using namespace std; 
int main(){
	int units;
	double bill;
	cout<<"Enter the units used this month";
	cin>>units;
	if(units<=100){
		bill=units*10;
	}
	else if(units<=200){
	bill=(100*10)+((units-100)*15);
	}
	else {
		bill=(100*10)+(100*15)+((units-200)*20);
	}
	cout<<"Electricity bill is="<<bill;
	
	return 0;
	
	
}
	
