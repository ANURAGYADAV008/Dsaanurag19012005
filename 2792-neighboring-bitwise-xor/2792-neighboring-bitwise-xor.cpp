class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
      int sum= derived[0];
      for(int i=1;i< derived.size(); i++){
           sum = sum^derived[i];
      } 
      return sum==0; 
    }
};