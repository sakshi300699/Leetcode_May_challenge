class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int fre[128]={0};
        int count=0;
        for(auto x:S){
            fre[x-'0']++;
        }
        for(auto x:J){
            count+=fre[x-'0'];
        }
        return count;
    }
};