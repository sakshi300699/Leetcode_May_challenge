class Solution {
public:
    bool check(int freq[], string s){
        int arr[26]={0};
        for(int i=0;i<s.length();i++)
            arr[s[i]-'a']++;
        for(int i=0;i<26;i++)   
            if(arr[i]!=freq[i]) return false;
        return true;
    }
    
    
    bool checkInclusion(string s1, string s2) {
         int freq[26]={0};  
        if(s1.length()>s2.length())
              return false;
         for(int i=0;i<s1.size();i++) freq[s1[i]-'a']++;
        for(int j=0;j<=s2.length()-s1.length();j++){
            string s = s2.substr(j,s1.length());
            
            if(check(freq,s))
                return true;
        }
        
        return false;
    }
};
