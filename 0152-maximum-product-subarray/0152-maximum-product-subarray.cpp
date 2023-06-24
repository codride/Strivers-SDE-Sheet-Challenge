class Solution
{
    public:
        int maxProduct(vector<int> &nums)
        {
            int ans = INT_MIN;
            int n=nums.size();
            int productFromFront = 1;
            int productFromBack = 1;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                {
                    productFromFront = 1;
                }
                else
                {
                    productFromFront = productFromFront *nums[i];
                    ans = max(ans, productFromFront);
                }
                if (nums[n - i - 1] == 0)
                {
                    productFromBack = 1;
                }
                else
                {
                    productFromBack = productFromBack *nums[n - i - 1];
                    ans = max(ans, productFromBack);
                }
            }
            bool iszero=false;
            for (int i = 0; i < n; i++){
                if(nums[i]==0) iszero=true;
            }
            if(iszero)
            return max(0,ans);
            else
            return ans;
        }
};