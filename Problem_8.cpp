class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
      int c=0;
        if(coordinates.size()==2)
          return true;
      else{
    
           
          for(int i=2;i<coordinates.size();i++){
            if((coordinates[1][1]-coordinates[0][1])*(coordinates[i][0]-coordinates[0][0])==(coordinates[i][1]-coordinates[0][1])*(coordinates[1][0]-coordinates[0][0])){
                c++;
            }
          }
               
               if(c==coordinates.size()-2)
                return true;
               else
                return false;
          
      }
    }
};
