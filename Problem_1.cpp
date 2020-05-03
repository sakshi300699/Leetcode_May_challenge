// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
      int beg=1; int end= n;
        while(beg<=end){
            int mid = beg+ (end-beg)/2 ;
            if(isBadVersion(mid)){
                if(isBadVersion(mid-1)){
                    for(int i=beg;i<=end;i++){
                        if(isBadVersion(i)) return i;
                    }
                }
                else{
                    return mid;
                }
            }
            else{
                beg= mid+1;
            }
        }
        return 0;
    }
};
