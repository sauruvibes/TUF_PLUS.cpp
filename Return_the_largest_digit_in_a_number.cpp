class Solution {
public:
    int largestDigit(int n) {
        int largestDigit = 0;
        while(n>0){
            int lastDig = n%10;
            if(lastDig>largestDigit){
               largestDigit=lastDig;
            }
            n = n/10;
        }
         return largestDigit;
    }
};
