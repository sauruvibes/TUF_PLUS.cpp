class Solution {
private:
 void pattern1(int n) {
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                cout << "*";
            }
            for (int j = 0; j < 2 * i; j++) {
                cout << " ";
            }
            for (int j = 0; j < n - i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    void pattern2(int n) {
 for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    }
public:
    void pattern20(int n) {
        pattern2(n);
        pattern1(n);
    }
};
