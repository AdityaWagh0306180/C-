//There are n kids with candies. You are given an integer array candies,
//where each candies[i] represents the number of candies the ith kid has,
// and an integer extraCandies, denoting the number of extra candies that you have.
//Return a boolean array result of length n, where result[i] is true if, after
// giving the ith kid all the extraCandies, they will have the greatest number of
// candies among all the kids, or false otherwise.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int maxCandies = *max_element(candies.begin(), candies.end());
    vector<bool> result;

    for (int candy : candies) {
        result.push_back(candy + extraCandies >= maxCandies);
    }

    return result;
}

int main()
{

    int n;
    cout<<"enter the number of kids:";
    cin>>n;
    vector<int> candies(n);
    cout<<"Enter the number of candies each kid has:";
    for(int i=0; i<n; i++){
        cin>>candies[i];
    }
    int extraCandies;
    cout<<"Enter the number of extra candies:";
    cin>>extraCandies;

    vector<bool> result=kidsWithCandies(candies,extraCandies);
    cout<<"result:";
    for(bool res:result)
    {
        cout<<(res ? "true" :"false")<<" ";
    }
    cout<<endl;
    return 0;
}
