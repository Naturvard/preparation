#include <iostream>
#include <climits>
using namespace std;
int maximumSum(int arr[], int n, int k)
{
    // first we are finding starting and ending position
    int i = 0;
    int j = 0;
    // what we want suma nd maxi so initialiizing it here
    int sum = 0;
    int maxi = INT_MIN;
    // now we will start a loop
    while (j < n)
    {
        // we will find sum with every iteration
        sum = sum + arr[j];
        // now sliding window conditions
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            maxi = max(maxi, sum);
            sum = sum - arr[i];
            i++;
            j++;
        }
    }
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maximumSum(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}