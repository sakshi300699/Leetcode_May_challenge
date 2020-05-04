class Solution {
public:
    int findComplement(int num) {
      int bit_count = floor(log2(num))+1;
        long unsigned int x = (1 << bit_count);
   int ones = (x - 1);
   int y = ones ^ num;
        return y;
    
    }
};
