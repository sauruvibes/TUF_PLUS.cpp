class Solution {
public:
    void pattern15(int n) {
        for(int i=1; i<=n; i++){
            for(char ch='A'; ch<='A'+(n-i); ch++){
                cout<<ch;
            }
            cout<<endl;
        }
    }
};
