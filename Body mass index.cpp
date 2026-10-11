#include<iostream>
using namespace std; 
int main(){
	double height,weight,bmi;
	cout<<"Enter your height";
	cin>>height;
		cout<<"Enter your weight";
	cin>>weight;
	bmi=weight/(height*height);
	cout<<"Your body mass index ="<<bmi;
	if(bmi>=18.5&&bmi<=24.5){
		cout<<"your BMI is in normal range";
	}
	else{
		"BMI is outside the normal range";
	}
	return 0;
}
