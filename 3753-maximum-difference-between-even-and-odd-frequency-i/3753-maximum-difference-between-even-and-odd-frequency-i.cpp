class Solution {
public:
    int maxDifference(string s) {
     unordered_map<char,int>mp;
     for(char ch:s){
        mp[ch]++;
     }
     int evenmax=INT_MAX;
     int oddmax=INT_MIN;
     vector<int>maxdiff;
     for(auto &p:mp){
        if(p.second%2==0){
            evenmax=min(p.second,evenmax);
        }
        if(p.second%2!=0){
            oddmax = max(p.second,oddmax);
        }
       

     } 
     
     return oddmax-evenmax;

    }
     
};