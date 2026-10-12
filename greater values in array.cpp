#include<iostream>
using namespace std;
int main(){
	int a[3],b[3],c;
	cout<<"Enter values of array a";
	cin>>a[0]>>a[1]>>a[2];
		cout<<"Enter values of array b";
	cin>>b[0]>>b[1]>>b[2];
	c=0;
	if(a[0]>b[0])
	c=c+1;
		if(a[1]>b[1])
	c=c+1;
		if(a[2]>b[2])
	c=c+1;
	cout<<"The number of values greater than b in a are= "<<c;
	return 0;
}
	


