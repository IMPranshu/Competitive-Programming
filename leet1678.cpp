class Solution {
public:
    string interpret(string command) {
        string res = "";
        for(int i =0;i<command.size();i++){
            if(command[i] == '('
            {
            	if(command[i+1] == ')')
            		res += "o";
            	else if (command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')')
            		res += "al";

            }
        cout<<res;
    }
};