
class Solution {
public:
    int countDigit(int n) {
        if(n == 0){
            return 1;
        }

        int count = 0;
        while(n > 0){
            int lastDig = n % 10;
            count = count+1;
            n = n/10;
        }
        return count;
    }
};
