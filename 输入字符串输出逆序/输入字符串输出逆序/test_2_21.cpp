#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);  // 读入包含空格的字符串

    int n = str.length();
    for (int i = n - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}
