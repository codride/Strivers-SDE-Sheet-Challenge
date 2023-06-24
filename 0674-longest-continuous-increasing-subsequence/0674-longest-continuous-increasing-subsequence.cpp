class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int l=1;
        int ans=1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]>nums[i]){
                l++;
                ans=max(ans,l);
            }
            else{
                ans=max(ans,l);
                l=1;
            }
        }
        return ans;
        
    }
};