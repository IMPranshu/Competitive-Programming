#include<bits/stdc++.h>

using namespace std;

vector<int> nextGreaterElements(vector<int>& nums){
	stack<int> st;
	std::vector<int> nge(nums.size());
	int ct = 0,i;
	for(i=0;i<=nums.size();i++){
		if(i == nums.size() && ct == 0){
			i=0;
			ct++;
		}
		while(!st.empty() && nums[i] > nums[st.top()]){
			nge[st.top()] = nums[i];
			st.pop();
		}
		st.push(i);
	}

	while(!st.empty()){
		nge[st.top()] = -1;
		st.pop();
	}
	std::vector<int> ans(nge.size());
	for(int i =0;i<nge.size();i++){
		if(nge[i] == -1)
			ans[i] = -1;
		else 
			ans[i] = nums[nge[i]];
	}

	return ans;



}

int main(){
	int n;
	cin>>n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	std::vector<int> nge = nextGreaterElements(v);
	return 0;
}