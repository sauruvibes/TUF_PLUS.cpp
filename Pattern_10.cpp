class Solution {
public:
    void pattern10(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
               cout<<"*";
            }  
             cout<<endl;        
        }
        for(int i=n-1; i>=1; i--){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
       
    }
};
