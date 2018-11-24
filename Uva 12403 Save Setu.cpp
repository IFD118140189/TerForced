#include <iostream>
using namespace std;
int main()
{
	int a,c,d=0; cin>>a;
	string b;
	if(a>=1 && a<=100){
		for(int i=1; i<=a; i++){
		cin>>b;
		if(b=="donate"){
			cin>>c;
			d+=c;
		} else if(b=="report"){
			cout<<d<<endl;
		}
	}
	}

}
