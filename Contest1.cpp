#include<iostream>
using namespace std;
bool checkTwoChessboards(string coordinate1, string coordinate2) {
    int sum = 0;

    int x = (int) coordinate1[0];
    sum = sum + x;
    int y = (int) coordinate2[1];
    sum = sum + y;
    int z = (int) coordinate1[1];
    sum = sum + z;
    int w = (int) coordinate2[0];
    sum = sum + w;

    if(sum % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    string a = "a1";
    string b = "h3";
    cout << checkTwoChessboards(a,b);
    return 0;
}