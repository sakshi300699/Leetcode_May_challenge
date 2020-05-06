class Solution {
public:
    int firstUniqChar(string s) {
    for (int i = 0; i < s.length(); i++) { 
        int j; 
        for (j = 0; j < s.length(); j++) 
            if (i != j && s[i] == s[j]) 
                break; 
        if (j == s.length()) 
            return i; 
    } 
    return -1; 
    
    }
    
};
