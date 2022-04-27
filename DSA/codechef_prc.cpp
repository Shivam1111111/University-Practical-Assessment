// #include <iostream>
// using namespace std;


// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int N, K;
//         int rest = N - K;
//         cin >> N >> K;
//         int *array = new int[N];
//         for (int i = 0; i < N; i++)
//         {
//             cin >> array[i];
//         }
//         int i, j, min, temp;
//         for (i = 0; i < N - 1; i++)
//         {
//             min = i;
//             for (j = i + 1; j < N; j++)
//             {
//                 if (array[min] > array[j])
//                 {
//                     min = j;
//                 }
//             }
//             temp = array[i];
//             array[i] = array[min];
//             array[min] = temp;
//         }
//         int d_sum = 0, c_sum = 0;
//         if(K>N/2){
//             for(int g = N-1; g >= 0; g--){
//                 if(i>=N-K){
//                     d_sum = d_sum + array[g];
//                 }
//                 else {
//                     c_sum = c_sum + array[g];
//                 }
//             }
//         }
//         else{
//             for(int h = 0; h < N; h++){
//                 if(i<K){
//                     c_sum = c_sum + array[h];
//                 }
//                 else{
//                     d_sum = d_sum + array[h];
//                 }
//             }
//         }
//             cout<< abs(d_sum - c_sum)<<endl;
//     }
//     return 0;
// }

#include<iostream>

using namespace std;
#define ll long long
#define endl '\n'

void swap(ll* a, ll* b){
    ll temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(ll* arr, ll len){
    ll smallestIndex;
    for(ll i = 0; i<len-1; i++){
        smallestIndex = i;
        for(ll j=i+1; j<len; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(&arr[smallestIndex], &arr[i]);
    }
}



int main() {
	ll t, n, *arr, i, k, dw, sw; cin >> t;
	while(t--){
	    cin >> n >> k;
	    arr = new ll[n];
	    
	    for (i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    selectionSort(arr, n);
	    
	    dw=0;sw=0;
	   
	    if(k > n/2){
	        for(i=n-1; i >= 0; i--){
	            if(i >= n-k){
	                dw += arr[i];
	            } else {
	                sw += arr[i];
	            }
	        }
	    } else {
	        for (i = 0; i < n; i++) {
	            if(i < k){
	                sw += arr[i];
	            } else {
	                dw += arr[i];
	            }
	        }
	    }
	   
	    cout << abs(dw - sw) << endl;
	    
	    delete arr;
	}
	return 0;
}