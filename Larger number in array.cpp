#include<iostream>
using namespace std;
int main(){
	int a[3],m;
	cout<<"Enter the array";
	cin>>a[0]>>a[1]>>a[2];
	m=a[0];
	if(m<a[1])
	m=a[1];
	if(m<a[2])
	m=a[2];
	cout<<"The largest number in the array is"<<m;
	return 0;
}
