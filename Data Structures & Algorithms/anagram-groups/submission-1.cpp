class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> m;
        int n = strs.size();
        for(int i=0;i<n;i++){
            vector<int> freq(26,0);
            string str = strs[i];
            for(int j = 0;j<str.size();j++){
                freq[str[j] - 'a']++;
            }
            m[freq].push_back(strs[i]);
        }
        vector<vector<string>> vec;
        for(auto it : m){
            vec.push_back(it.second);
        }
        return vec;
    }
};
