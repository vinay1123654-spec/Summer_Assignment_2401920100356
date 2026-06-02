class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxmsum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxmsum=max(maxmsum,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxmsum;
    }
};
