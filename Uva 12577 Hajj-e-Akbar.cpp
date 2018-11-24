#include<iostream>
using namespace std;
int main(){
	string a;
	int b=1;
	do{
		cin>>a;
		if(a=="Hajj"){
			cout<<"Case "<<b<<": Hajj-e-Akbar"<<endl;
		} else if(a=="Umrah"){
			cout<<"Case "<<b<<": Hajj-e-Asghar"<<endl;
		}
		b++;
	}
	while (a!="*");

}
