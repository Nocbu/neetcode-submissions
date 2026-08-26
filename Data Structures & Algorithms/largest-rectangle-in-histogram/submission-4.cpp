class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int>res;
        int maxr=0;
        for(int i=0;i<h.size();i++)
        {
            if(res.empty()||h[res.top()]<=h[i])
            {
                res.push(i);
            }
            else
            {
                while(!res.empty()&&h[res.top()]>h[i])
                {
                    int j=h[res.top()];
                    res.pop();
                    int h=(res.empty())?i*j:((i-res.top())-1)*j;
                    if(h>maxr)
                    {
                        maxr=h;
                    }
                }
                res.push(i);
            }
            
        }
        if(!res.empty())
        {
            int n=h.size();
            while(!res.empty())
                {
                    int j=h[res.top()];
                    res.pop();
                    int h=(res.empty())?n*j:((n-res.top())-1)*j;
                    if(h>maxr)
                    {
                        maxr=h;
                    }
                }
        }
        return maxr;
    }
};
