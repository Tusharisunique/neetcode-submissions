class Solution {
private:
    unordered_map<string,vector<string>> m;
public:

    string encode(vector<string>& strs) {
        string str;
        int n = strs.size();
        for(int i = 0;i<n;i++){
            str+=strs[i];
        }
        m[str] = strs;
        return str;
    }

    vector<string> decode(string s) {
        return m[s];
    }
};
