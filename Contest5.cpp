#include<iostream>
using namespace std;
string getSmallestString(string& s) {
    for(int i = 0; i<s.size()-1; i++) {
        // If both are odd
        if(s[i] % 2 == s[i+1] % 2 and s[i] > s[i+1]) {
            swap(s[i] , s[i+1]);
            break;
        }
    }   
    return s;
    }
int main() {
    string s = "13";

    string ans = getSmallestString(s);

    for(int i = 0; i<ans.size(); i++) {
        cout << s[i] << " ";
    }
    return 0;
}