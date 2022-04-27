#include <iostream>
using namespace std;

int getMin(int arr[],int n){
int temp = arr[0];
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
      }
   }
   return temp;
}
void swap(int &p, int &q)
{
    int temp = p;
    p = q;
    q = temp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        int i, j, min;
        for (i = 0; i < n - 1; i++)
        {
            min = i;
            for (j = i + 1; j < n; j++)
            {
                if (array[j] < array[min])
                {
                    min = j;
                }
            }
            swap(array[i], array[min]);
        }

        int d_size = n - 1;
        int differ[d_size];
        for (int k = 0; k < d_size; k++)
        {
            differ[k] = array[k + 1] - array[k];
        }

        cout << getMin(differ, d_size);
    }

    return 0;
}