#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int k = 0;  // Pointer for the compressed string position
        int i = 0;  // Pointer for traversing the string

        while (i < chars.size()) {
            int j = findGroupEnd(chars, i);  // Find the end of the current group
            k = writeCharacter(chars, k, chars[i]);  // Write the character
            if (j > i) {
                k = writeCount(chars, k, j - i + 1);  // Write the count if the group size > 1
            }
            i = j + 1;  // Move to the next group
        }

        return k;  // Return the length of the compressed string
    }

private:
    // Find the end of the current group of identical characters
    int findGroupEnd(const vector<char>& chars, int start) {
        int end = start;
        while (end + 1 < chars.size() && chars[end + 1] == chars[start]) {
            end++;
        }
        return end;
    }

    // Write the character to the compressed string
    int writeCharacter(vector<char>& chars, int k, char c) {
        chars[k] = c;
        return k + 1;
    }

    // Write the count to the compressed string
    int writeCount(vector<char>& chars, int k, int count) {
        string countStr = to_string(count);
        for (char c : countStr) {
            chars[k++] = c;
        }
        return k;
    }
};

int main() {
    Solution solution;
    int n;

    // Take input for the size of the array
    cout << "Enter the number of characters: ";
    cin >> n;

    vector<char> chars(n);
    cout << "Enter the characters: ";
    for (int i = 0; i < n; i++) {
        cin >> chars[i];
    }

    // Call the compress function
    int compressedLength = solution.compress(chars);

    // Display the compressed result
    cout << "Compressed string: ";
    for (int i = 0; i < compressedLength; i++) {
        cout << chars[i];
    }
    cout << endl;

    cout << "Length of compressed string: " << compressedLength << endl;

    return 0;
}

