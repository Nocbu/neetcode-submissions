class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mult=1;
        int countz=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {   
                countz++;
                continue;
            }
            mult*=nums[i];
        }
        if(countz>=2)
        {
            vector<int>r(nums.size(), 0);
            return r;
        }
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                res.push_back(mult);
            }
            else if(countz==1&&nums[i]!=0){
                res.push_back(0);
            }
            else{
                res.push_back(mult/nums[i]);
            }
        }
        return res;
    }
};
