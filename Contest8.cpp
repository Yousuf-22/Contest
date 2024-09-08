#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
string dectobinary(int x) {
    string ans = "";
    while(x > 0) {
        if(x % 2 != 0) ans += '1';
        else ans += '0';

        x = x/2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
string convertDateToBinary(string date) {

    int a = stoi(date.substr(0,4));
    int b =  stoi(date.substr(5,2));
    int c = stoi(date.substr(8,2));

    string ans = "";
    ans += dectobinary(a);
    ans += "-";
    ans += dectobinary(b);
    ans += "-";
    ans += dectobinary(c);
    return ans;
}
int main() {
    string s = "1900-01-01";
    cout << convertDateToBinary(s);

    return 0;
}