#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
bool canProduce(ll time, const vector<ll> &machines, ll t)
{
    ll total = 0;
    for (ll m : machines)
    {
        total += time / m;
        if (total >= t)
            return true; // Early exit
    }
    return false;
}
int main()
{
    int n;
    ll t;
    cin >> n >> t;
    vector<ll> machines(n);
    ll max_time = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> machines[i];
        max_time = max(max_time, machines[i]);
    }
    ll low = 1, high = max_time * t;
    ll answer = high;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (canProduce(mid, machines, t))
        {
            answer = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << answer << endl;
    return 0;
}