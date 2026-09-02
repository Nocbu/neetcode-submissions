class TimeMap {
public:
    unordered_map<string,vector<pair<string, int>>>tm;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        tm[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        int mid=0;
        int left=0;
        int right=tm[key].size()-1;
        string last="";
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(tm[key][mid].second==timestamp)
            {
                return tm[key][mid].first;
            }
            else if(tm[key][mid].second<timestamp)
            {
                last=tm[key][mid].first;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return last;
    }
};
