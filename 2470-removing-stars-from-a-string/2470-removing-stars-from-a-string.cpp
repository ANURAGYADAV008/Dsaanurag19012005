class Solution {
public:
    string removeStars(string s) {
       stack<char>st;
       for(char ch:s){
         if(!st.empty() && ch=='*'){
            st.pop();
         }
         else{
            st.push(ch);
         }
       } 
       string ans="";
       while(!st.empty()){
        ans+= st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};