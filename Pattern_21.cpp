class Solution {
public:
    void pattern21(int n) {
        for(int i=1; i<=n; i++){
            if(i == 1 || i == n){
                for(int j=1; j<=n; j++){
                cout<<"*";
                }
            }else{
                cout<<"*";
                for(int j=1; j<=n-2; j++){
                    cout<<" ";
                }
                cout<<"*";
            }
            cout<<endl;
        }
    }
};
