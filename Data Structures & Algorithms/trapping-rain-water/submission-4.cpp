class Solution {
public:
    int trap(vector<int>& height) {
        int trap=0;
        int left=0;
        int right=height.size()-1;
        int leftM=-1;
        int rightM=-1;
        while(left<right)
        {
            if(height[left]<=height[right])
            {
                if(leftM<height[left])
                {
                    leftM=height[left];
                }
                trap+=leftM-height[left];
                left++;
            }
            else{
                if(rightM<height[right])
                {
                    rightM=height[right];
                }
                trap+=rightM-height[right];
                right--;
            }
        }
        return trap;
    }
};
