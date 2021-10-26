#include<bits/stdc++.h>

using namespace std;



int main(){
	int n;
	cin>>n;
	char s[2*n-2];
	for(int i=0;i<2*n-2;i++)
		cin>>s[i];
	map<char, int> m;
	int ans=0;

	for(int i=0;i<2*n-2;i++){
		if(islower(s[i]))
			m[s[i]]++;

		else{
			s[i] = tolower(s[i]);

			if(m[s[i]] > 0){
				--m[s[i]];
			}
			else{
				ans++;
			}

		}
}
		cout<<ans;


	return 0;
} 