class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<vector<int>>bs(nums.size()+1);
       unordered_map<int, int>m;
       vector<int>r;
       for(int i:nums)
       {
            m[i]++;
       }
       for(auto& i:m)
       {
            bs[i.second].push_back(i.first);
       }
       for(int i=bs.size()-1;i>=0;i--)
        {
            for(int l:bs[i])
            {
                if(r.size()>=k)
                {
                    return r;
                }
                else{
                    r.push_back(l);
                }

            }
            
        }       
        return r;
    }
};
