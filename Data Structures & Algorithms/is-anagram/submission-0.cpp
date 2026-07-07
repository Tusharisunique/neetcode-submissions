class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26,0);
        for(int i=0;s[i]!='\0';i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;t[i]!='\0';i++){
            freq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]) return false;
        }
        return true;
    }
};
