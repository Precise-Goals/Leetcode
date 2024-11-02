#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int ms = INT8_MIN;
        int cs = 0;
        for (int v : nums) {
            cs += v;
            ms = max(ms, cs);
            if (cs < 0) {
                cs = 0;
            };
        }
        return ms;
    }
};
int main()
{
    vector<int> Charge = { -1, 2, 5, -6, 3, 9, 12 };
    Solution s;
    cout<<"The Maxsum of Subarray is "<<s.maxSubArray(Charge)<<endl;
    return 0;
}