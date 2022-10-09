class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int mid = 0;
        for(int i = 0; i < nums.size() ;i++)
        {
            int target = -nums[i];
            int k = i+1;
            int j = nums.size() - 1;
            while(k<j)
            {
                if(nums[k] + nums[j] == target)
                {
                    int x = nums[k];
                    int y = nums[j];
                    result.push_back({nums[i],nums[k],nums[j]});
                    while(k < j && nums[k]==x)
                    {
                        k++;
                    }
                    while(k < j && nums[j]==y)
                    {
                        j--;
                    }                    
                }
                else if(k<j && nums[k] + nums[j] > target)
                {
                    j--;
                }
                else if(k<j && nums[k] + nums[j] < target)
                {
                    k++;
                }
            }
            while(i+1<nums.size() && nums[i] == nums[i+1])
            {
                i = i+1;
            }
        }
        return result;
    }
};
