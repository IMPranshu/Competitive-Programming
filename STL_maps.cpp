#include<bits/stdc++.h>

using namespace std;
void print(map<int,string> &m){
	cout<<"Size:"<<m.size()<<endl;
	for(auto &pr : m){
		cout<<(pr.first)<<" "<<(pr.second)<<endl;
	}

}


int main(){
	map<int, string> m;
	m[1] = "abc";
	m[5] = "cdc";
	m.insert({3,"fgf"});
	print(m);
	auto it = m.find(3);//find() reutrn an iterator
	if(it== m.end()){
		cout<<"No value";
	}else{
		cout<<"Found:"<<(it->first)<<" "<<(it->second)<<endl;
	}


	return 0;
} 