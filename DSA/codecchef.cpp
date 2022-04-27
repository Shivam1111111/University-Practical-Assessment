#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int length; 
    cin>>length;
    int idx;

    int *array = new int[length];

    for (idx = 0; idx < length; idx++)
    {
        cin >> array[idx];
    }

    sort(array, array+length);
    int min_index = 0;

    while(min_index < length)
    {
        int num_stick = 0;

        int flag = 0;

        int cut = array[min_index];

        int n_index;

        for (idx = min_index; idx < length; idx++)
        {
            if(array[idx] > 0){

                array[idx] = array[idx] - cut;
                num_stick = num_stick + 1;

                if(array[idx] > 0 && !flag)
                {

                    n_index = idx;
                    flag = 1;
                
                }
            }
        }
        if(num_stick <= 0)
        {
            break;
        }
        min_index = n_index;
        cout << num_stick;
        cout << endl;
    }
    return 0;
}