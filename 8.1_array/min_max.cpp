#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout << " Enter array size : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int max = arr[0] , min=arr[0];
    int max_num = INT_MIN , min_num= INT_MAX;

    for (int i = 1; i < n; i++)
    {
        // if(arr[i] > max_num){
        //     max_num = arr[i];
        // }
        max_num =max(max_num,arr[i]);

        // if(arr[i] < min_num){
        //     min_num = arr[i];
        // }
        min_num =min(min_num,arr[i]);
    }

    cout << "max : " << max_num << "  min : " << min_num << endl;
}