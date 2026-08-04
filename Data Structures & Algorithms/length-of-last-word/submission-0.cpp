class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length()-1;
        while(s[i] ==' '){
            i--;
        }
        int ans =0;
        while(s[i] != ' ' && i>=0){
            ans++;
            i--;
        }
        return ans;
    }
};