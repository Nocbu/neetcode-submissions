class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>>keys;
       for(string i:strs)
       {   
        vector<int>coun(26,0);
            for(char x:i)
            {
                coun[x-'a']++;
            }
            string key="";
            for(int k=0;k<26;k++)
            {
                key+=to_string(coun[k])+'#';
            }
            keys[key].push_back(i);
       }
       vector<vector<string>>fa;
       for(auto& i:keys)
       {
            fa.push_back(i.second);
       }
       return fa;
    } 

};

