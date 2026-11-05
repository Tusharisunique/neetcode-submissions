class Solution {
public:
    string minWindow(string s, string t) {
         if(t.length()>s.length()) return "";
        vector<int> m(256,0);
        for(auto c : t){
            m[c]++;
        }
        int l = 0,r = 0,n = s.length(),startci = -1, minl = INT_MAX;
        while(l<=r && r<n){
            m[s[r]]--;
            bool flag = true;
            for(auto it : m){
                if(it > 0) flag = false;  
            }
            if(flag){
                if(minl > r-l+1) {
                    startci = l;
                    minl = r-l+1;
                }
                m[s[l]]++;
                l++;
                m[s[r]]++;
            }
            else r++;
        }

        return (-1 == startci)? "":s.substr(startci,minl);

    }
};
