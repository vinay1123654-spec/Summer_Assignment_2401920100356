class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int right=n-1;
        int left=0;
        long long ans=INT_MIN;
        while(left<right){
            ans=max(ans,1LL*min(height[left],height[right])*(right-left));
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};
