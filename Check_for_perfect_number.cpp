
class Solution {
public:
    bool isPerfect(int n) {
        int sum=0;
        for(int i=1; i<n; i++){
            if(n%i == 0){
            sum = sum+i;
            }
        }
        if(sum == n){
            return true;
        }else{
            return false;
        }
    }
};
