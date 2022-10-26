class Solution {
public:
    int binarysearch(vector<int>& numbers, int ele, int s)
    {
        int e = numbers.size()-1;
        int req = -1;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(numbers[mid] == ele)
            {
                req = mid;
                break;
            }
            else if(numbers[mid] > ele)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return req;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        for(int i = 0; i < numbers.size(); i++)
        {
            int req = target - numbers[i];
            int index = binarysearch(numbers, req, i+1);
            if(index != -1)
            {
                ans.push_back(i+1);
                ans.push_back(index+1);
                return ans;
            }
            else
            {
                continue;
            }
        }
        return ans;
    }
};
