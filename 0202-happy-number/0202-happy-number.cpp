class Solution {
public:
    bool isHappy(int n) {
        set<int>seen;
        
    while(n!=1){
        if(seen.find(n)!=seen.end()){
            return false;
        }
        seen.insert(n);
        int ans=0;
        while(n>0){
            int num=n%10;
            ans+= num*num;
            n=n/10;
        }
        n=ans;
    }
    return true;
    }
        
};