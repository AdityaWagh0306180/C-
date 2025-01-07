#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{

public:
    int maxoperations(vector<int>& nums, int k)
    {
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size()-1;
        int count = 0;
        while(start < end)
        {
            int sum = nums[start] + nums[end];
            if(sum == k)
            {
                count++;
                start++;
                end--;
            }
            else if(sum > k)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return count;
    }
};
int main()
{
    Solution solution;
    int n , k;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    cout<<"Enter the target sum (k): ";
    cin>>k;

    int result = solution.maxoperations(nums, k);
    cout<<"The maximum numbers of operation is: "<<result<<endl;

    return 0;
}
