#include<iostream>
#include<string>
using namespace std;
    int minAnagramLength(string s) {
        int ans = 0;
        char prev = s[0];
        
        for(int i=1; i<s.length(); i++){
            if(s[i] != prev) {
                ans++;
            }
            prev = s[i];
        }
        return ans;
    }
int main() {
    string s;
    cin>>s;
    cout << minAnagramLength(s);
    return 0;
}