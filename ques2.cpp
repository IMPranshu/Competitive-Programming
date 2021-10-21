#include <bits/stdc++.h>

using namespace std;

int main(){
	int a;
	cin>>a;
	while(a--){
		int i;
		cin>>i;
		long long int a[i],mul=1;
		for(int j=0;j<i;j++){
			cin>>a[j];
			mul*=a[j];
		}
		int dig = mul %10;
		if(dig ==2 || dig ==3 || dig == 5){
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
}