class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<vector<int>>bs(pow(10, 4));
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
            if(r.size()>=k){return r;}
            if(!bs[i].empty())
            {
                if(bs[i].size()>1)
                {
                    for(int l=0;l<bs[i].size();l++)
                    {
                        if(r.size()<k)
                        {
                            r.push_back(bs[i][l]);
                        }
                        else{
                            return r;
                        }
                    }
                }
                else{
                    r.push_back(bs[i][0]);
                }
            }
        }       
        return r;
    }
};
