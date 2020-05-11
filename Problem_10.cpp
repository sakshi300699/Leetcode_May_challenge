class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int a[1000]={0}, b[1000]={0};
     for(int i=0;i<trust.size();i++){
         for(int j=1;j<=N;j++){
       if(trust[i][0]==j){
           a[j-1]++;
       }
         if(trust[i][1]==j){
             b[j-1]++;
         }    
         }
     }
        
        for(int i=0;i<N;i++){
      if(a[i]==0 && b[i]==N-1)
          return i+1;
        }
        
     return -1;
    }
};
