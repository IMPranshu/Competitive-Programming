#include<bits/stdc++.h>

using namespace std;


int main(){
	std::vector<int> v = {2,3,5,6,7};
	// std::vector<int> :: iterator it = v.begin();
	// for(it = v.begin();it!=v.end();++it)
	// cout<<*it<<endl;

	std::vector<pair<int,int> > v_p = {{1,2},{2,3},{3,4}};
	std::vector<pair<int,int> > ::iterator it;
	for(it = v_p.begin();it != v_p.end();++it)
		cout<<(it->first)<<" "<<(it->second)<<endl;
	for(int value : v)


	return 0;
} 