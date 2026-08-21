class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& te) {
        stack<int>t;
        vector<int>res(te.size(),0);
        for(int i=0;i<te.size();i++)
        {
            if(!t.empty())
            {
                while(!t.empty()&&te[i]>te[t.top()])
                {
                    res[t.top()]=i-t.top();
                    t.pop();
                }
                t.push(i);
            }
            else{
                t.push(i);
            }   
        }
        return res;

    }
};
