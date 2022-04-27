// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int length;
    cin>>length;
    
    int *array = new int[length];

    for(int i = 0; i < length; i++){
        cin>>array[i];
    }
    
    sort(array,array+length,greater<int>());
    int j = length;

    cout<<length<<endl;
    while(j > 0){
        int min = array[length-1];
        j = 0;
        for(int i = 0; i < length; i++){
            array[i] = array[i] - min;
            if(array[i] > 0){
                j++;
            }
        }
            cout<<j<<endl;
            length = j;
            // for(int i = 0; i < length; i++){
            //     cout<<"\n"<<array[i];
            // }
    }
    
}
	

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     int length;
//     cin>>length;
    
//     int *array = new int[length];
    
//     for(int i = 0; i < length; i++){
//         cin>>array[i];
//     }
//     int num_stick = length;
//     int j=length;
//     sort(array,array+length, greater<int>());
    
//     cout << length;
//     while(j != 1){
//     j = 0;
//     int max = array[length-1];

//     for(int i = 0; i < length; i++){
//         array[i] = array[i] - max;
//         if(array[i]>0){
//             j++;
//         }
//     }
//     cout<<j;
//     length = j;
//     }
// }