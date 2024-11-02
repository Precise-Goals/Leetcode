#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t)
    {
        int s = nums.size();
        for (int i = 0; i < s; i++) {
            for (int l = i + 1; l < s; l++) {
                if (nums[i] + nums[l] == t) {
                    return { i, l };
                }
            }
        }
        return { 0, 0 };
    }
};
int priVec(vector<int> vec)
{
    for (int i : vec) {
        cout << i << " ";
    }
    return 0;
}
int main()
{
    vector<int> vec = { 2, 4, 5, 2, 1, 2, 4 };
    int target = 9;
    Solution s;
    cout << "Given Vector : ";
    priVec(vec);
    cout << endl;
    vector<int> ans = s.twoSum(vec, target);
    cout << "Perfect twoSummation for target = " << target << " is at location" << ans[0] << ", " << ans[1];
    return 0;
}