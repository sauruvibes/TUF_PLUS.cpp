class Solution {
public:
    void pattern17(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                cout<<" ";
            }
            char ch = 'A';
            for(int j=1; j<=2*i-1; j++){
                if(j<i){
                    cout<<ch;
                    ch++;
                }else{
                    cout<<ch;
                    ch--;
                }
            }
            cout<<endl;
        }
    }
};
