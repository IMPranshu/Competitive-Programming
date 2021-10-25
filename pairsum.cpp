#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,target,left,right,c=0;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    sort(arr,arr+n);
    left = 0;
    right = n-1;
    while(left<right){
      if(arr[left]+arr[right]>target){
        right--;
      }
      else if(arr[left]+arr[right]<target){
        left++;
      }
      else{
        c=1;
        break;
      }
    }

    if(c==1){
      cout<<"Yes"<<endl;
     // cout<<left<<" "<< right<<endl;

    }else{
      cout<<"No"<<endl;
    }

}