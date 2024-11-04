#include <iostream>

using namespace std;
class Solution {
public:
    string Compre(string word)
    {
        int n = word.size(), i = 0;
        string ans = "";
        while (i < n) {
            char mch = word[i];
            int freq = 0;
            while (i < n && word[i] == mch && freq < 9) {
                i++;
                freq++;
            }
            ans += char('0' + freq);
            ans += word[i];
        }
        return ans;
    }
};
int main()
{
    string c = "aaaaaaaaaaaaaabb";
    Solution s;
    cout << "The Original String " << c << endl;
    cout << "The Compress String " << s.Compre(c) << endl;
    return 0;
}