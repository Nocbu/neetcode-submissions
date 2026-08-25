class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>arrL(height.size(),0);
        vector<int>arrR(height.size(),0);
        int maxL=-1;
        int maxR=-1;
        int trap=0;
        for(int i=0;i<height.size();i++)
        {
            if(height[i]>maxL)
            {
                maxL=height[i];
            }
            arrL[i]=maxL;
        }  
        for(int i=height.size()-1;i>=0;i--)
        {
            if(height[i]>maxR)
            {
                maxR=height[i];
            }
            arrR[i]=maxR;
        }
        for(int i=0;i<height.size();i++)
        {
            trap+=max(0,min(arrL[i], arrR[i])-height[i]);
        }    
        return trap;
    }
};
