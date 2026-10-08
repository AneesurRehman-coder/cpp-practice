#include<iostream>
using namespace std;
int main(){
	double amount,discount,finalamount;
	int items;
	bool member;
	cout<<"Enter amount use to purchase";
	cin>>amount;
	cout<<"Enter number of items purchased";
	cin>>items;
	cout<<"Are you a member?";
	cin>>member;
	if(amount>=10000||(member&&items>=5)){
	
		discount=amount*0.15;
	
	}
	else{
		discount=amount*0.05;
	}
	finalamount=amount-discount;
	cout<<"Discount"<<discount;
	cout<<"\nFinal amount"<<finalamount;
	
}

