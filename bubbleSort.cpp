#include <iostream>
#include <vector>
using namespace std;
void countSwaps(vector<int> a)
{
    int totalSwaps = 0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        // Track number of swaps for this iteration
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // Swap adjacent elements if they are in decreasing order
                swap(a[j], a[j + 1]);
                totalSwaps++;
            }
        }
    }
    cout << "Array is sorted in " << totalSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n - 1] << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    countSwaps(a);
    return 0;
}