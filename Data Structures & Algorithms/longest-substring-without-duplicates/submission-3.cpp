class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int maxl = 0, length = 0;
        int left = 0;
        int n = s.length(),i=0;
        while(i<n){
            if(!m.contains(s[i]) || m[s[i]]<left) {
                m[s[i]] = i;
                length++;
                maxl = max(maxl,length);
                i++;
            }
            else{
                left = m[s[i]]+1;
                m[s[i]] = i;
                length = i - left + 1;
                i++;
            }
        }
        return maxl;
    }
};