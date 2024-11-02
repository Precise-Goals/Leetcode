#include <iostream>

using namespace std;
class Solution {
public:
    bool isCircularSentence(string sentence)
    {
        int l = sentence.size();
        for (int k = 0; k < l; k++) {
            if (sentence[k] == ' ' && sentence[k - 1] != sentence[k + 1]) {
                return false;
            }
        }
        if (sentence[0] != sentence[l - 1])
            return false;
        return true;
    }
};
int main()
{
    string sent1 = "first commit for leetcode profile on github";
    string sent2 = "leetcode exercises sound delightful";
    Solution sol;
    cout << "The Sentence " << sent1 << " is " << sol.isCircularSentence(sent1) << endl;
    cout << "The Sentence " << sent1 << " is " << sol.isCircularSentence(sent2) << endl;
    return 0;
}