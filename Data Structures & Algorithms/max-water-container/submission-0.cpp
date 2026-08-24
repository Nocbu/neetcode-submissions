class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start=0;
        int end=heights.size()-1;
        int m=0;
        while(start<end)
        {
            int mi=min(heights[start], heights[end]);
            int water=(end-start)*(mi);
            if(m<water)
            {
                m=water;
            }
            if(heights[start]<=heights[end])
            {
                start++;
            }
            else{
                end--;
            }

        }
        return m;
    }
};
