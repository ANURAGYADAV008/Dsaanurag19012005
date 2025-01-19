class Solution {
public:
    int maxArea(vector<int>& height) {
      int n=height.size();
      int left =0;
      int m_area = INT_MIN;
      int right = n-1;
      while(left<right){
        int hcontainer = min(height[left],height[right]);
        int width = right-left;
        m_area = max(m_area, width*hcontainer);
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
      } 
      return m_area; 
    }
};