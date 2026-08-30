class Solution {
public:
    int cal_hours(int mid, vector<int>& piles)
    {
        int h=0;
        for(int i:piles)
        {
            h+=((i+mid-1)/mid);
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        auto r=max_element(piles.begin(), piles.end());
        int right=*r;
        int mid=0;
        int min_ban=0;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            int hours=cal_hours(mid, piles);
            if(hours<=h)
            {
                min_ban=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
            
        }
        return left;
    }
};
