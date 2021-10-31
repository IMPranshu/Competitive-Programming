#include<bits/stdc++.h>

using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
	stack<int> st;
	std::vector<int> nge(nums2.size());
	for(int i=0;i<nums2.size();i++){
		while(!st.empty() && nums2[i]>nums2[st.top()]){
			nge[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		nge[st.top()]=-1;
		st.pop();
	}
	std::vector<int> ans(nums1.size());
	for(int i=0;i<nums1.size();i++){
		for(int j=0;j<nums2.size();j++){
			if(nums1[i] == nums2[j]){
				ans[i] = nge[j];
			}
		}
	}
	return ans;



}
int main(){
	int n,m;
	cin>>n>>m;
	std::vector<int> v1(n),v2(m);
	for(int i=0;i<n;i++)
		cin>>v1[i];
	for(int i=0;i<m;i++)
		cin>>v2[i];
	vector<int> nge = nextGreaterElement(v1,v2);

	for (int i = 0; i < n; ++i)
	{
		cout<<(nge[i] == -1 ? -1 : v2[nge[i]])<<" ";
	}


	
	return 0;
}