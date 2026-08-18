class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if(nums.empty())
        // {
        //     return 0;
        // }
        unordered_set<int> n;
        int m=0;
        for(int i:nums)
        {
            n.insert(i);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!n.count(nums[i]-1))
            {
                int num=nums[i];
                int len=1;
                while(n.count(num+1))
                {
                    num++;
                    len++;
                }
                if(m<len)
                {
                    m=len;
                }
            }
            
        }
        return m;
    }
};
