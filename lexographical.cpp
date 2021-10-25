#include<bits/stdc++.h>

using namespace std;



int main(){
	int n;
	cin>>n;
	map<string, int> m;
	while(n--){
		string s;
		cin>>s;
		m[s] = m[s] +1;
	}

	for(auto &it : m){
		cout<<it.first<<" "<<it.second<<endl;
	}



	return 0;
} 