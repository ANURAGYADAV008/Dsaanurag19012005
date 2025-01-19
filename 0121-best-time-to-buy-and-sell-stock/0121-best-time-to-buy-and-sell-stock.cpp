class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        // int max =0;
        // for(int i=0; i<size; i++){
        //     for(int j=i+1;j<size;j++){
        //         if(prices[j]-prices[i]>max){
        //             max = (prices[j]-prices[i]);
        //         }
        //     }
        // }
        int minsofar=prices[0];
        int maxprofit=0;
        for(int i=0; i<size; i++){
            if(prices[i]<minsofar){
                minsofar = prices[i];
            }
            //minsofar = min(minsofar,prices[i]);
            int profit = prices[i]-minsofar;
            maxprofit = max(maxprofit,profit);
        }
        return maxprofit;
    }
};