#include <iostream>
using namespace std;
int main(){
	string a; int b;
	string e="one";
	string f="two";
	string g="three";
	cin>>b;
	
	for(int i=1; i<=b; i++){
		int c=0;
		cin>>a;
		c=a.length();
		int d=0;
		for(int j=0; j<c; j++){
			if(i==1){
				if(a[0]==e[0]||a[1]==e[1]||a[2]==e[2]){
					d++;
				}
			} else if(i==2){
				if(a[0]==f[0]||a[1]==f[1]||a[2]==f[2])
				d++;	
			} else if(c>3){
				cout<<"3";
				break;
			}
		}
		if(d>1)
		cout<<i<<endl;
	}
}
