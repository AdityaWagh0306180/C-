#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int>& height)
    {

        int left = 0;
        int right = height.size()-1;
        int maxvol = 0;
        while(left < right)
        {
            int width = right - left;
            int ht = min(height[left], height[right]);
            int currVol = ht * width;
            maxvol =max(maxvol , currVol);
            height[left]<height[right] ? left++ : right--;
        }
        return maxvol;
    }
};
int main()
{

    Solution solution;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    vector<int> height(n);
    cout<<"Entre the heights: ";
    for(int i = 0; i < n; i++)
    {
        cin>>height[i];
    }
    int result = solution.maxArea(height);
    cout<<"The maximum area is: "<<result<<endl;

    return 0;
}
