#include<iostream>
#include<vector>
using namespace std;
class LCSFinder {
public:
    int findLCS(string text1, string text2){
    int n1 = text1.size();
    int n2 = text2.size();

    vector<int> curr(n2 + 1, 0);
    vector<int> next(n2 + 1, 0);
    for (int i = n1 -1; i >= 0; i--){
        for(int j = n2 - 1; j >= 0; j--){
            if(text1[i] == text2[j])
                curr[j] = 1 + next[j + 1];
            else
                curr[j] = max(next[j], curr[j + 1]);
        }
        next = curr;
    }
    return next[0];
    }
};
int main(){
    string text1, text2;
    cout << "Enter first String: ";
    cin >> text1;
    cout <<" Enter second string: ";
    cin >> text2;

    LCSFinder lcs;
    int result = lcs.findLCS(text1, text2);

    cout<<"Length of longest common subsequence: "<<result <<endl;

    return 0;
}
