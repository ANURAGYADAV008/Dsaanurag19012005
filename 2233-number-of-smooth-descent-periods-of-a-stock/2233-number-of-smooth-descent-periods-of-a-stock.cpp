class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long cnt =0;
        long long temp=0;
            
            for(int j = 1; j<prices.size(); j++){
                if(prices[j-1]-prices[j]==1){
                    temp++;
                    cnt+=temp;
                }
                else temp=0;

        }
        if(cnt==0)return prices.size();
        return cnt+prices.size();
    }
};