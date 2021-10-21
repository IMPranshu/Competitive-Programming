#include <iostream>
using namespace std;

const int M = 1e9+7;
const int N = 1e5+7;
long long int fact[N];
int main() {
	// int t;
	// cin>>t;
	// while(t--){
	// 	int n;
	// 	long long int fact = 1;
	// 	cin>>n;
	// 	for(int i = 2;i<=n;i++){
	// 		fact = (fact * i) % M;
	// 	}
	// 	cout<< fact<<endl;
	// }
	// Wrost solution
	
	//We will use pre computation
	fact[0]=fact[1]=1;
	for(int i = 2;i<N;i++){
		fact[i] = fact[i-1]*i;
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fact[n]<<endl;
	}
	return 0;
}