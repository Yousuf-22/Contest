#include<iostream>
#include<vector>
using namespace std;
vector<int> getFinalState(vector<int>& arr, int k, int multi) {

    int minn = arr[0];
    for(int i = 0; i<k; i++) {
        int j = 0;
        int smallest = INT16_MAX;

        for(int i = 0; i<arr.size(); i++) {
            if(arr[i] < smallest) {
                smallest = arr[i];
                j = i;
            }
        }
        arr[j] = smallest * multi;
    }

    for(int i : arr) {
        cout << i << " "; 
    }
}
int main() {
    vector<int> arr = {2,1,5,4,3};
    getFinalState(arr,5,2);
    return 0;
}