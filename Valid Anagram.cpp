class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int freq_s[26] = {0};
        int freq_t[26] = {0};

        for(char ch:s) freq_s[ch-'a']++;
        for(char ch:t) freq_t[ch-'a']++;

        for(int i=0; i<26; i++){
            if(freq_s[i] != freq_t[i]) 
            return false;
        }
        return true;
    }
};