class Solution {
public:
    void pattern8(int n) {
        for(int i=1; i<=n; i++){
            //for spaces
            for(int j=1; j<=i-1; j++){
                cout<<" ";
            }
            for(int j=1; j<=(n*2)-(i*2-1); j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};
