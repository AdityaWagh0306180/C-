//You are given two strings word1 and word2. Merge the strings by adding letters in alternating order,
//starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
//Return the merged string.

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int i = 0, j = 0;
        while (i < word1.size() || j < word2.size()) {
            if (i < word1.size()) {
                merged += word1[i++];
            }
            if (j < word2.size()) {
                merged += word2[j++];
            }
        }
        return merged;
    }
};

int main() {
    Solution solution;
    string word1, word2;
    cout << "Enter the first string: ";
    cin >> word1;
    cout << "Enter the second string: ";
    cin >> word2;
    string result = solution.mergeAlternately(word1, word2);
    cout << "Merged string: " << result << endl;

    return 0;
}

