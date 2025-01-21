class Solution {
public:
    static bool mycomp(int a,int b){
        return abs(a)<abs(b);
    }
    bool canReorderDoubled(vector<int>& arr) {
       int n = arr.size();
       sort(arr.begin(),arr.end(), Solution::mycomp);
       unordered_map<int,int>freq;
       for(int num:arr){
           freq[num]++;
        } 
        for(int num :arr){
            if(freq[num]==0)continue;
            if(freq[num*2]==0){
                return false;
            }
            freq[num]--;
            freq[num*2]--;
        }
        return true;
        
    }
};