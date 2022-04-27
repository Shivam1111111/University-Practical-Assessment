#include <iostream>
using namespace std;

int main() {
    long long int t, i, distance, cost, n, k, lowest, total;
    cin >> t;
    while(t--){
        cin >> n >> k;
        long long int* costToTravel = new long long int[n];
        long long int* totalCostArr = new long long int[n];
        
        for (i = 0; i < n; i++) {
            cin >> distance;
            costToTravel[i] = distance * k;
        }
        
        for (i = 0; i < n; i++) {
            cin >> cost;
            total = cost + costToTravel[i];
            if(i==0){
                lowest = total;
                continue;
            }
            if(total < lowest){
                lowest = total;
            }
        }
    
        
        cout << lowest << endl;
        
        delete(costToTravel);
        delete(totalCostArr);
    }
	return 0;
}