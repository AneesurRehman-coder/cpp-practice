#include<iostream>
using namespace std;
int main(){
	double price[3],discount[3],finalprice[3];
	cout<<"Enter price of three products";
	cin>>price[0]>>price[1]>>price[2];
	if(price[0]>=5000)
	discount[0]=price[0]*0.20;
	else if(price[0]>=2000);
	discount[0]=price[0]*0.10;
		if(price[1]>=5000)
	discount[1]=price[1]*0.20;
	else if(price[1]>=2000)
	discount[1]=price[1]*0.10;
		if(price[2]>=5000)
	discount[2]=price[2]*0.20;
	else if(price[2]>=2000)
	discount[2]=price[2]*0.10;
	finalprice[0]=price[0]-discount[0];
		finalprice[1]=price[1]-discount[1];
		finalprice[2]=price[2]-discount[2];
	cout<<"1st product final price ="<<finalprice[0]<<endl;
		cout<<"2nd product final price ="<<finalprice[1]<<endl;
		cout<<"3rd product final price ="<<finalprice[2]<<endl;
}
