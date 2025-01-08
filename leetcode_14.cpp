#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
    double findmaxAverage(vector<int>& nums, int k)
    {
        double sum =0;
        for(int i = 0; i < k; i++)
        {
            sum +=nums[i];
        }
        double ans =sum;
        for(int i = k; i < nums.size(); i++)
        {
            sum += nums[i];
            sum -= nums[i-k];
            ans = max(ans, sum);
        }
        return ans/k;

    }
};
int main()
{
    Solution solution;

    int n , k;
    cout<<"Enter the number of elements: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the arrays: ";
    for(int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    cout<<"Enter the value of k: ";
    cin>>k;

    double result = solution.findmaxAverage(nums , k);
    cout<<"The maximum average is: "<<result<<endl;

    return 0;
}
