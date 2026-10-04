#include<iostream>
using namespace std; 
int main(){
	int m1=80, m2=70, m3=85;
	char g, g1,g2,g3;
	string status;
	float p=0.0;
	cout<<"Enter  obtained marks of three subjects ";
	cin>>m1>>m2>>m3;
	if(m1>70)
	g1='A';
	else if(m1<30)
	g1='F';
	else
	g1='B';
		if(m2>60)
	g2='A';
	else if(m2<20)
	g2='F';
	else
	g2='B';
		if(m3>75)
	g3='A';
	else if(m3<45)
	g3='F';
	else
	g3='B';
	int s=3;
	if(g1=='F')
	s=s-1;
		if(g2=='F')
	s=s-1;
		if(g3=='F')
	s=s-1;
	if(s==3)
	status="pass";
	else if(s==2)
	status="Probated";
	else
	status="Dropped";
	cout<<"1. "<<m1<<"  "<<g1<<endl;
	cout<<"2. "<<m2<<"  "<<g2<<endl;
	cout<<"3. "<<m3<<"  "<<g3<<endl;
	cout<<"Student status ="<<status<<endl;
	if(s==3){
			p=(m1+m2+m3)/3.0;
		if(p>75)
		g='A';
		else if(p>50)
		g='B';
		else
		g='F';
		cout<<"percentage marks"<<p<<endl;
		cout<<"over all grades"<<g;
	}
	return   0;


		
	
	
		
}
	
	
	


