#include<iostream>
using namespace std;

int main(){
    long long int t, n, k, *a, i, d, r, lowest;
    cin >> t;

    while(t--){
        cin >> n >> k;
        a = new long long int[n];

        for (i = 0; i < n; i++)
        {
            cin >> d;
            a[i] = d*k;
        }

        lowest = __LONG_LONG_MAX__;
        for (i = 0; i < n; i++)
        {
            cin >> r;
            a[i] += r;
            if(a[i] < lowest){
                lowest = a[i];
            }
        }
        cout << lowest << endl;
    }
    return 0;
}