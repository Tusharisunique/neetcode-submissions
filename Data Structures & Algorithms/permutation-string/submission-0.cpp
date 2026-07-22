class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int l = s2.length();
        bool flag = true;
        vector<int> freq(26,0);
        for(auto c : s1){
            freq[c-'a']++;
        }
        int length = 0;
        int i = 0, j=0;
        while(i<=j && j<l){
            freq[s2[j]-'a']--;
            length++;
            if(length==n){
                for(auto num : freq){
                    if(num!=0){
                        flag = false;
                        break;
                    }
                }
                if(flag) return true;
                else{
                    flag = true;
                    freq[s2[i]-'a']++;
                    i++;
                    length--;
                }
            }
            j++;
        }
        return false;
    }
};
