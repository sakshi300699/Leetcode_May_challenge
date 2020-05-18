class Solution {
public:
    bool checkAnagram(int freq[],string s){
        int arr[26]={0};
        for(int i=0;i<s.length();i++)
            arr[s[i]-97]++;
        for(int i=0;i<26;i++)   
            if(arr[i]!=freq[i]) return false;
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
       
        
        int freq[26]={0};
        vector<int> v1;
         if(p.length()>s.length())   return v1;
        for(int i=0;i<p.size();i++) freq[p[i]-97]++;
        for(int i=0;i<s.size()-p.size()+1;i++){
            string s1=s.substr(i,p.size());
            //cout<<s1<<endl;
            // for(int j=i;j<i+p.size() && j<s.size();j++) s1+=  s[j];
            bool k= checkAnagram(freq,s1);
            if(k)   v1.push_back(i);
        }
        return v1;
        
    }
};
