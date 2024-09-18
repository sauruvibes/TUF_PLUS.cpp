class Solution {
public:
    int reverseNumber(int n) {
        int reverse = 0;
        while(n>0){
            int lastDig = n % 10;
            reverse = (reverse*10)+lastDig;
            n = n/10;
        }
        return reverse;
    }
};
