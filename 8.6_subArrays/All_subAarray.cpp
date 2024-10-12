#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array  ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_sum=INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {   sum = 0 ;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                cout << arr[k] << "  " ;
                if(max_sum < sum)
                   max_sum = sum;
            }
            cout << "= "<< sum << endl;
        }
        cout <<"===============" << endl;
    }

    cout << "Maximum subArray Sum " << max_sum << endl;

    return 0;
}