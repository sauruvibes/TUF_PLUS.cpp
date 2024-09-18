class Solution {
public:
    bool isPalindrome(int n) {
        int copy = n;
        int reverse = 0;

        while(n>0){
            int lastDig = n%10;
            reverse = (reverse*10)+lastDig;
            n = n/10;
        }

        if(reverse==copy){
            return true;
        }else{
            return false;
        }
    }
};
