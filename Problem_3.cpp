class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       int c=0;
        
        for(int i=0;i<ransomNote.length();i++){
            for(int j=0;j<magazine.length();j++){
                if(magazine[j]==ransomNote[i]){
                  c++;
                    magazine[j]=(magazine[j]-'a')+'A';
                    break;
                }
            }
        }
        
        if(c==ransomNote.length()){
            return true;
        }
        
        else{
            return false;
        }
    }
};
