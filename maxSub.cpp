#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i =0;i<n;i++)
		cin>>a[i];
	int maxSub = a[0],curSum = 0;
	for(int i =0;i<n;i++){

		if (curSum <0){
			curSum = 0;
		}
		curSum+=a[i];
		maxSub = max(maxSub,curSum);
	}

	cout<<maxSub;


}
