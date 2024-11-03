#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        string combined = s + s; // Concatenate the string to itself
        return combined.find(goal) != string::npos;
    }
};

int main() {
    Solution s;
    bool ans = s.rotateString("abcde", "deabc");
    cout << (ans ? "true" : "false") << endl;
    return 0;
}
