#include<bits/stdc++.h>

using namespace std;



int main(){
	int n;
	cin>>n;
	unordered_map<string, int> m;
	while(n--){
		string s;
		cin>>s;
		m[s]++;
	}
	int a;
	cin>>a;
	while(a--){
		string s;
		cin>>s;
		cout<<m[s]<<endl;
	}

	return 0;
} 