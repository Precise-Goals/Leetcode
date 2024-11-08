#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int priVec(vector<int> vec)
{
    for (int i : vec) {
        cout << i << " ";
    }
    return 0;
}
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit)
    {
        int n = nums.size(), cu = 0;
        vector<int> main;
        for (int i = 0; i < n; i++) {
            cu ^= nums[i];
            int k = 0;
            for (int j = maximumBit - 1; j >= 0; j--) {
                if (!((1 << j) & cu)) {
                    k |= (1 << j);
                }
            }
            main.push_back(k);
        }
        reverse(main.begin(), main.end());
        return main;
    }
};
int main()
{
    vector<int> h = { 0, 1, 1, 3 };
    Solution sol;
    priVec(sol.getMaximumXor(h, 2));
    return 0;
}