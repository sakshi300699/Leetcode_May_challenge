class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int fre1[26]={0};
        int fre2[26]={0};
        for(auto x:magazine){
            fre2[x-'a']++;
        }
        for(auto x:ransomNote){
            if(fre2[x-'a']<=0)return false;
            else fre2[x-'a']--;
        }
        return true;
    }
};