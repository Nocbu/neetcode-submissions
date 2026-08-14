class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>>keys;
       for(int i=0;i<strs.size();i++)
       {
            string k=strs[i];
            sort(k.begin(), k.end());
            keys[k].push_back(strs[i]);
       }
       vector<vector<string>>fa;
       for(auto& i:keys)
       {
            fa.push_back(i.second);
       }
       return fa;
    } 

};

