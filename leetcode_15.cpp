#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0, maxcount = 0;

        // Initial window of size k
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                count++;
            }
        }
        maxcount = count;

        // Sliding window
        for (int i = k; i < s.length(); i++) {
            if (isVowel(s[i])) {
                count++;
            }
            if (isVowel(s[i - k])) {
                count--;
            }
            maxcount = max(count, maxcount);
        }

        return maxcount;
    }

    bool isVowel(char c) {
        c = tolower(c); // Handle uppercase vowels as well
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};

int main() {
    Solution solution;

    string s;
    int k;

    cout << "Enter the string: ";
    cin >> s;

    cout << "Enter the value of k: ";
    cin >> k;

    int result = solution.maxVowels(s, k);
    cout << "The maximum number of vowels in any substring of length " << k << " is: " << result << endl;

    return 0;
}
