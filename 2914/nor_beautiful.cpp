#include <iostream>
#include <string.h>
using namespace std;

class Solution {
public:
    int minChanges(string s)
    {
        int n = s.length(), ch = 0;
        for (int i = 0; i < n; i += 2) {
            if (s[i] != s[i + 1]) {
                ch++;
            }
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