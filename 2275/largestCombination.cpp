#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int largestCombination(vector<int>& candidates)
    {
        int n = candidates.size();
        int ans = 0;
        vector<int> bits(31, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 31; j++) {
                if (((1 << j) & candidates[i])) {
                    bits[j]++;
                }
            }
        }
        for (int o = 0; o < 31; o++) {
            ans = max(ans, bits[o]);
        }
        return ans;
    }
};
int main()
{
    vector<int> vec = { 16, 17, 71, 62, 12, 24, 14 };
    Solution so;
    cout << so.largestCombination(vec) << endl;
    return 0;
}