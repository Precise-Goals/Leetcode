#include <iostream>
#include <string.h>
using namespace std;
class Solution {
public:
    int minChanges(string s)
    {
        int n = s.length(), fr, ch;
        char m = s[0];
        fr = ch = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == m) {
                fr++;
                continue;
            }
            if (fr % 2 == 0) {
                fr = 1;
            } else {
                ch++;
                fr = 0;
            }
            m = s[i];
        }
        return ch;
    }
};
int main()
{
    string lok = "11100110011001";
    Solution s;
    cout << "The Number of Changes required is " << s.minChanges(lok) << endl;
    return 0;
}