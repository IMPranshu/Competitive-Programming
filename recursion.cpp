#include<bits/stdc++.h>

using namespace std;

const int N = 1000;
int a[N];

int digit_sum(int n){
	if(n==0) return 0;
	return digit_sum(n/10) + n%10;
}

int sum(int n){
	if(n==0) return a[0];
	return sum(n-1) + a[n];
}

int fact(int n){
	if(n==0) return 1;
	return fact(n-1) * n;
	}
int main(){
	int n;
	cin>>n;
	// for(int i = 0;i<n;i++)
	// 	cin>>a[i];

	cout<<digit_sum(n); 

	return 0;
}