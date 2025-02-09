class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        int x=5;
        while(x<=n){
            count+=n/x;
            x=x*5;
           
        }
        return count;
    }
};