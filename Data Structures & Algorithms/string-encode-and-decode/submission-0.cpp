class Solution {
public:

    string encode(vector<string>& strs) {
        string enc="";
        for(string i:strs)
        {
            enc+=to_string(i.size())+'#'+i;
        }
        return enc;
    }
    vector<string> decode(string s) {
        vector<string>dec;
        int digit=0;
        string num="";
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                num+=s[i];
            }
            if(s[i]=='#')
            {
                string k="";
                int j=i+1;
                digit=stoi(num)+j;
                while(j<digit)
                {
                    k+=s[j];
                    j++;
                }
                i=j-1;
                num="";
                dec.push_back(k);
            }
        }
        return dec;
    }
};
