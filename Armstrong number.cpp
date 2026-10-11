#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,x1,x2,x3,x,y;
	cout<<"Enter a three digit number";
	cin>>n;
	y=n;
	x1=n/100;
	n=n%100;
	x2=n/10;
	n=n%10;
	x3=n%10;
	x=(int)pow(x1,3)+(int)pow(x2,3)+(int)pow(x3,3);
	if(x==y){
		cout<<"Yes its armstrong number\n";
	}
	else
	cout<<"No its not armstrong number";
	return 0;
}
