class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        int n = strs.size();
        for(int i=0;i<n;i++){
            vector<int> freq(26,0);
            string str = strs[i];
            string key = "";
            for(int j = 0;j<str.size();j++) {freq[str[j] - 'a']++;}
            for(int j = 0;j<26;j++){

                //frequency of the character in the string
                int f = freq[j];
                if(f){
                //Creation of the key for the string
                char k = 'a' + j;
                key+=k;
                key+=char(f);
                key+="#";
                }
            }
            m[key].push_back(strs[i]);
        }
        vector<vector<string>> vec;
        for(auto it : m){
            vec.push_back(it.second);
        }
        return vec;
    }
};
