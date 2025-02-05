class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
       if(s1==s2){
        return true;
       } 
       int cnt=0;
       vector<int>res;
       for(int i=0;i<s1.size(); i++){
            if(cnt>2)return false;
             if(s1[i]!=s2[i]){
                cnt++;
                res.push_back(i);
             }
       }
       if(cnt==2){
          int i=res[0];
          int j=res[1];
          swap(s1[i],s1[j]);
          return s1==s2;
       }
       else{
        return false;
       }
    }
};