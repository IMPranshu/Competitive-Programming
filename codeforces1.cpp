#include<bits/stdc++.h>

using namespace std;



int main(){
	int n;
	cin>>n;
	unordered_map<string, int> m;
	while(n--){
		string s;
		cin>>s;
		if(m[s] ==0 ){
			m[s] = 1;
			cout<<"OK"<<endl;
		}
		else{
			cout<<s<<m[s]<<endl;
			m[s]++;
		}

	}
	return 0;
} 