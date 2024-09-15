class Solution {
private:
    void pattern7(int n) {
        for(int i=1; i<=n; i++){
            //for spaces
            for(int j=1; j<=n-i; j++){
                cout<<" ";
            }
            for(int j=1; j<=2*i-1; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
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
public:
    void pattern9(int n) {
        pattern7(n);
        pattern8(n);
    }
};
