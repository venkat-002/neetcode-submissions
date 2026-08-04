class Solution {
public:
    bool isSubsequence(string s, string t) {
        // im about to use two pointers 
        // we will iterate through the both strings untill we reach end of both strings 
        int i =0,j=0;
        while(i<s.length() && j<t.length()){
            if(s[i] == t[j]){i++;if(i == s.length()) break;}
            j++;
        }
        return i == s.length();
    }
};