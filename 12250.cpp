#include <iostream>
using namespace std;
int main(){
	string s; int a=1;
	cin>>s;
	while(s!="#"){
		cout<<"Case "<<a<<": ";
		if(s=="HELLO"){
			cout<<"ENGLISH";
		} else if(s=="HOLA"){
			cout<<"SPANISH";
		} else if(s=="HALLO"){
			cout<<"GERMAN";
		} else if(s=="BONJOUR"){
			cout<<"FRENCH";
		} else if(s=="CIAO"){
			cout<<"ITALIAN";
		} else if(s=="ZDRAVSTVUJTE"){
			cout<<"RUSSIAN";
		} else{
			cout<<"UNKNOWN";
		}
		cout<<endl;
		a++;
		cin>>s;
	}
	return 0;
}
