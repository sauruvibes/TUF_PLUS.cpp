class Solution {
public:
    void pattern18(int n) {
    char ch = 'A' + n - 1;
        for (int i = 0; i < n; i++) {
            for (char chr = ch - i; chr <= ch; chr++) { 
                cout << chr << " "; 
            }
            cout << endl;
        }
    }
};
