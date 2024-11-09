#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
#define ll long long
    long long minEnd(int n, int x)
    {
        n--;
        ll ans = x;
        vector<int> unset_bit;
        for (ll j = 0; j <= 60; j++) {
            ll mask = (1ll << j);
            if (!(mask & x)) {
                unset_bit.push_back(j);
            }
        }
        for (ll j = 60; j >= 0; j--) {
            ll mask = (1ll << j);
            if (mask <= n) {
                n -= mask;
                ans = ans | (1ll << unset_bit[j]);
            }
        }
        return ans;
    }
};
int main()
{
    int n = 3, x = 4;
    Solution s;
    cout<<n<<endl;
    cout<<x<<endl;
    cout << s.minEnd(n, x) << endl;
    return 0;
}