// Brute Force approach


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> a;
        for(int i = 0;i<arr.size();)
        {
            int count = 1;
            for(int j = i+1; j < arr.size(); j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            i = i + count;
            a.push_back(count);
        }
        sort(a.begin(),a.end());
        for(int i = 0; i < a.size() ; i++)
        {
            if(i+1<a.size() && a[i]==a[i+1])
            {
                return false;
            }
        }
        return true;
    }
};
