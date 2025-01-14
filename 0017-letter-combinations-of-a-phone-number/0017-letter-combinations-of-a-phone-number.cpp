class Solution {
public:
   vector<string>ans;
   vector<string>keys={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   void solve(string &digit, string &temp,int ind){
    int n= digit.size();
    if(ind==n){
        ans.push_back(temp);
        return;
    }
    int curr = digit[ind]-'0';
    for(auto &key: keys[curr]){
        temp.push_back(key);
        solve(digit, temp,ind+1);
        temp.pop_back();
    }
   }
    vector<string> letterCombinations(string digit) {
    if(digit.size()==0){
        return ans;
    } 
    string temp;
    solve(digit,temp,0);
    return ans; 
    }
};