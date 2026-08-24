class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>>cars;
        for(int i=0;i<speed.size();i++)
        {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end(),[](auto& a,auto& b){
            return a.first>b.first;
        });
        int fleet=0;
        double prev=0;
        for(auto& i:cars)
        {
            int distance=target-i.first;
            double time=(double)distance/i.second;
            if(time>prev)
            {
                fleet++;
                prev=time;
            }
        }
        return fleet;
    }
};
