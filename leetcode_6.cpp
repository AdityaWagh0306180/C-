#include<sstream>
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{
    public:
    string reverseWords(string s)
    {
        istringstream stream(s);
        vector<string> words;
        string word;
        //split string
        while(stream >> word)
        {

            words.push_back(word);
        }
        //reverse the string
        reverse(words.begin() , words.end());
        string result;
        for(const auto& w: words)
        {
            result += w + " ";
        }
        //remove the trailing space
        if(!result.empty())
        {
            result.pop_back();
        }
        return result;
    }
};
int main()
{
    Solution solution;
    string sentence;
    cout<<"Enter the sentence";
    getline(cin, sentence);
    string reversed = solution.reverseWords(sentence);
    cout<<"Reversal order: "<< reversed <<endl;
    return 0;
}
