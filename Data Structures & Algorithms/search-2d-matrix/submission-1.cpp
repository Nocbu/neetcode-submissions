class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int urow=0;
        int lrow=matrix.size()-1;
        int fcol=0;
        int lcol=matrix[0].size()-1;
        int mid=0;
        while(urow<=lrow)
        {
            mid=urow+(lrow-urow)/2;
            if(matrix[mid][fcol]>target)
            {
                lrow=mid-1;
            }
            else if(matrix[mid][lcol]>=target&&matrix[mid][fcol]<=target)
            {
                int amid=0;
                int left=fcol;
                int right=lcol;
                while(left<=right)
                {
                    amid=left+(right-left)/2;
                    if(matrix[mid][amid]<target)
                    {
                        left=amid+1;
                    }
                    else if(matrix[mid][amid]==target)
                    {
                        return true;
                    }
                    else{
                        right=amid-1;
                    }
                }
                return false;
            }
            else{
                urow=mid+1;
            }
        }
        return false;
    }
};
