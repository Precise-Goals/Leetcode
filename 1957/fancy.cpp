#include <iostream>

using namespace std;
class Solution {
public:
    string makeFancyString(string s)
    {
        int l = s.size(), i = 0;
        string ref = "";
        for (int j = 0; j < l; j++) {
            char temp = s[i];
            int c = 0;
            while (i < l && s[i] == temp) {
                c++;
                if (c <= 2) {
                    ref += s[i];
                }
                i++;
            }
        }

        return ref;
    }
};
int main()
{
    Solution s;
    string a = "i ammm suppppeeeeeerrrrrmaaaann";
    cout << "original text : " << a << endl;
    cout << "fancy text : " << s.makeFancyString(a) << endl;

    return 0;
}