#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int> energy = {2,5,-10,-5,1};
    
    int k;
    cin >> k;

     int n = energy.size();

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (energy[i] < k && energy[i] > 0) {
                ans = energy[i] + ans;
            }
        }
            if(ans == 0) {
                cout<< "1" << endl;
            }
        cout<< ans;
    return 0;
}