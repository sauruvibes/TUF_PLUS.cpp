class Solution {
public:
    bool isPrime(int n) {
        //your code goes here
        if(n < 2){
            return false;
        }

        int count = 0;
        for(int i=1; i<=n; i++){
            if( n % i == 0){
                count = count + 1;
            }
        }
        if(count == 2){
            return true;
        }else{
            return false;
        }
    }
};
