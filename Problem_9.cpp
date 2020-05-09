class Solution {
public:
    bool isPerfectSquare(int num) {
  long long int s=0, i;
        for (i = 1 ; s < num; i=i+2) { 
        s = s + i;
     
        if (s==num) { 
            return true; 
        } 
    } 
    return false; 
        
    }
};
