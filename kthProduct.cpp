#include <iostream>
#include <vector>
using namespace std;
int findKthPositive(vector<int> &arr, int k)
{
    int i = 0, num = 1;
    while (k > 0)
    {
        if (i < arr.size() && arr[i] == num)
        {
            i++; // Number is in array, skip
        }
        else
        {
            k--; // Number is missing
        }
        if (k == 0)
            return num;
        num++;
    }
    return -1; // Should never reach here
}
int main()
{
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << findKthPositive(arr, k) << endl;
    return 0;
}
