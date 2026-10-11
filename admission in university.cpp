#include<iostream>
using namespace std;
int main(){
	float marks,testscore;
	int income;
	cout<<"enter marks in fsc";
	cin>>marks;
	cout<<"Enter score in admission test";
	cin>>testscore;
	cout<<"Enter income of your family in year";
	cin>>income;
	if(marks>50&&testscore>50){
		if(marks>=80&&testscore>=80){
			if(income>=100000){
				cout<<"He has also qualified for scholorship";
			}
			else{
				cout<<"he is not qualified for scholorship due to family income";
		}
	}
			else{
				cout<<"He can get admission";
			}
		}
		else{
			cout<<"student is not eligible for admission";
		}
	}
	
	

