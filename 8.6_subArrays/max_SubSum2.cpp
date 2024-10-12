#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size ";
    cin >> n;
    int arr[n], check_sum[n];
    cout << "Enter the element of array  ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int max_sum=INT_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++){
       sum += arr[i];
       check_sum[i] = sum;
       max_sum = max (max_sum, sum);
    }

    for(int i = 0; i < n; i++){
       cout << check_sum[i] << " " ;
    }cout<<endl;


    for(int i = 1; i<n ; i ++){
        for(int j = 0 ; j < i; j++){
            sum = check_sum[i] - check_sum[j];
            max_sum = max (max_sum, sum);
        }
    }

    cout << "Maximum subArray Sum " << max_sum << endl;

    return 0;
}