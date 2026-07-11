class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        vector<int> m(26,0);
        int l = 0,r = 0,length = 0,maxl = 0, maxf = 0;
        while(r<n){
            m[s[r]-'A']++;
            int length = r-l+1;
            maxf = max(maxf,m[s[r]-'A']);
            if(length - maxf <=k){
                maxl = max(maxl,length);
                r++;
            }
            else{
                m[s[l] - 'A']-=1;
                l++;
                m[s[r]-'A']-=1;
            }
        }
        return maxl;
    }
};
