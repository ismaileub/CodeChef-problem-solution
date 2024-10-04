#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        bool sorted = true;
        for(int i = 0; i < n - 1; i++) {
            if(arr[i] > arr[i + 1]) {
                sorted = false;
                break;
        }
        }

        if(sorted) {
            cout << 0 << endl;
            continue;
        }

        int min = arr[0], max = arr[0];

        for(int i = 1; i < n; i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
            if(arr[i] > max) {
                max = arr[i];
            }
        }

        cout << max + min << endl;
    }
    return 0;
}
