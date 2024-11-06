#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int bit_C(int x)
    {
        int c = 0;
        while (x) {
            if (x & 1) {
                c++;
            }
            x /= 2;
        }
        return c;
    }
    bool canSortArray(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> bit(9, -1);
        for (int i = 0; i < n; i++) {
            int c = bit_C(nums[i]), m = -1;
            for (int j = 0; j < 9; j++) {
                if (j != c) {
                    m = max(m, bit[j]);
                }
            }
            if (m > nums[i]) {
                return false;
            }
            bit[c] = max(bit[c], nums[i]);
        }
        return true;
    }
};
int main()
{
    vector<int> n = { 8, 4, 2, 30, 15 };
    Solution w;
    cout << w.canSortArray(n) << endl;

    return 0;
}