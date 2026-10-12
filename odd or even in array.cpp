#include<iostream>
using namespace std;
int main(){
	int a[3],n,m;
	cout<<"Enter the array numbers";
	cin>>a[0]>>a[1]>>a[2];
	m=0;
	if(a[0]%2==0)
	m=m+1;
		if(a[1]%2==0)
	m=m+1;
		if(a[2]%2==0)
	m=m+1;
	n=3-m;
	cout<<"the even number in the array =  "<<m<<endl;
		cout<<"the odd number in the array = "<<n<<endl;
	return 0;
}
	
	 
