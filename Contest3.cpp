#include<iostream>
#include<string>
using namespace std;
int main() {
    string s = "abcde";
    string t = "edbac";
    int n = s.length();

    int ans = 0;
    int diff = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (s[i] == t[j]) {
                    ans = i-j;
                }
                if(ans < 0) {
                    ans = ans * -1;
                }
            }
            diff = diff + ans;
        }

        cout << diff;
    return 0;
}