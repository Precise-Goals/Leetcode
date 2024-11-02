#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int n = nums.size(), unique = 0;
        for (int i = 0; i < n; i++) {
            unique ^= nums[i];
        }
        return unique;
    }
};
int main()
{
    vector<int> Guts={1,2,3,4,5,6,5,4,3,2,1};
    Solution sol;
    cout<<"The unique Number is "<<sol.singleNumber(Guts)<<endl;
    return 0;
}