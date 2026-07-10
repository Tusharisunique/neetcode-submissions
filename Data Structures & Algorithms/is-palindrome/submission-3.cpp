class Solution {
private:
    bool is_alphanumeric(char c){
        if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')) return true;
        return false;
    }
public:
    bool isPalindrome(string s) {
        int i = 0,j = s.length()-1;
        bool flag1,flag2;
        while(i<j){
            while((!( flag1 = is_alphanumeric(s[i])) || !(flag2 = is_alphanumeric(s[j]))) && i<j){
                if(!flag1) i++;
                if(!flag2) j--;
            }
            if(i<j){
            char c1 = tolower(s[i]), c2 = tolower(s[j]);
                if(c1!=c2) {return false;}
                i++;
                j--;
            }
        }
        return true;
    }
};
