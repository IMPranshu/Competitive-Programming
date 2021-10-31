#include<bits/stdc++.h>

using namespace std;

unordered_map<char, int> check = {{'(',-1},{'[',-2},{'{',-3},{')',1},{']',2},{'}',3}};
string isBalanced(string s) {
    stack<char> symbols;
    for(char bracket:s){
        if(check[bracket] < 0){
            symbols.push(bracket);
        }
        else{
            if(symbols.empty()) return "NO";
            char curr_top = symbols.top();
        symbols.pop();
        if(check[curr_top] + check[bracket] != 0) return "NO";
    }
        }
        

    if(!symbols.empty())
        return "NO";
    return "YES";
}


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
    
    

}