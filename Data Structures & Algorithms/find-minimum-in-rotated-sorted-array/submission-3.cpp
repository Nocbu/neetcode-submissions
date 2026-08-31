class Solution {
public:
    int findMin(vector<int> &nums) {
        int left=0;
        int right=nums.size()-1;
        int m=INT_MAX;
        int mid=0;
        while(left<right)
        {
            mid=left+(right-left)/2;
            if(nums[mid]>nums[right])
            {
                left=mid+1;
            }
            else if(nums[mid]<=nums[right])
            {
                if(nums[right]<m)
                {
                    m=nums[mid];
                }
                right=mid;
            }
        }
        return nums[left];
    }
};
