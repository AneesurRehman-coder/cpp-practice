#include<iostream>
using namespace std;
int main(){
	double balance,withdrawl,rem;
	cout<<"Enter balance";
	cin>>balance;
	cout<<"Enter amount you want to withdraw";
	cin>>withdrawl;
	if(balance>0&&withdrawl>0){
		if(withdrawl<=balance){
			rem=balance-withdrawl;
			if(rem>=1000){
				cout<<"amount withdrawn successfully";
				cout<<"Remaining amount"<<rem;
			}
			else{
				cout<<"Withdrawl rejected";
				cout<<"you should have 1000 in account after withdrawl";
				
			}
		}
			else{
				cout<<"insufficient balance";
			}
			
			}
			else{
				"invalid input";
			}
			
		}
	

