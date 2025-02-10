class Solution {
public:
    string clearDigits(string s) {
       string ans="";
       for(char ch:s){
        if(!isdigit(ch)){
            ans+=ch;
        }
        if(isdigit(ch)){
            ans.pop_back();
        }
       } 
       return ans;
    }
};