#include<iostream>
#include<string>
#include<array>
#include<vector>
using namespace std;

const int MAX_SIZE = 100;
const int MAX_NUMBERS = 110;
const int MAX_RESULT = 10000;
const int ASCII_OFFSET = 48;
const int DIGIT_BASE = 10;

int main() {
    string a, b;
    vector<int> x(MAX_NUMBERS), y(MAX_NUMBERS), z(MAX_RESULT, 0);
    cin >> a >> b;
    int lena = a.length(), lenb = b.length();
    
    for (int i = 0; i< lena; ++i) {
        x[lena - i - 1] = a[i] - ASCII_OFFSET;
    }
    for (int i = 0; i < lenb; ++i) {
        y[lenb - i - 1] = b[i] - ASCII_OFFSET;
    }
    
    for (int i = 0; i< lena; ++i) {
        for (int j = 0; j < lenb; ++j) {
            z[i + j] += x[i] * y[j];
        }
    }
    
    for (int i = 0; i< lena + lenb; ++i) {
        if (z[i] >= DIGIT_BASE) {
            z[i + 1] += z[i] / DIGIT_BASE;
            z[i] %= DIGIT_BASE;
        }
    }
    
    for (int i = lena + lenb - 1; i >= 0; --i) {
        if (z[i] == 0 && i != 0) {
            continue;
        }
        cout << z[i];
    }
    
    return 0;
}
