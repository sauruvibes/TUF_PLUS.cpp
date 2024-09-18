class Solution {
public:
    int countOddDigit(int n) {
        if(n == 0){
            return 0;
        }

        int countOdd = 0;
        while(n > 0){
            int lastDig = n%10;
            if(lastDig  % 2 != 0){
                countOdd=countOdd+1;
            }
            n=n/10;
        }
        return countOdd;
    }
};
