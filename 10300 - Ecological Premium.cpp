#include <iostream>
using namespace std;
int main(){
	int a,b,d; int m,n,o;
	cin>>a;
	for(int i=1; i<=a; i++){
		d=0;
		cin>>b;
			for(int x=1; x<=b; x++){
				cin>>m>>n>>o;
				d=(long long) d+m*o;
			}
		cout<<d<<endl;
	}
	
	return 0;
}
