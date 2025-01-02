#include<iostream>
#include<vector>
using namespace std;

class Solution
{

public:
    vector<int> productExceptSelf(vector<int>& nums)
    {

        int n = nums.size();
        vector<int> output( n ,1);
        computeLeftProducts(nums, output, n);
        computeRightProducts(nums, output, n);

        return output;
    }
private:
    void computeLeftProducts(const vector<int>& nums, vector<int>& output, int n)
    {

        int left = 1;
        for(int i = 0; i < n; i++)
        {
            output[i] *=left;
            left *=nums[i];
        }
    }
    void computeRightProducts(const vector<int>& nums, vector<int>& output, int n)
    {
        int right = 1;
        for(int i = n - 1; i>=0; i--)
        {
            output[i] *=right;
            right *=nums[i];
        }
    }
};
int main()
{

    Solution solution;
    int n;
    cout<<"Enter the numbers of element: "<<endl;
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the numbers of the array: ";
    for( int i = 0; i < n; i++)
    {
        cin>> nums[i];
    }
    vector<int> result = solution.productExceptSelf(nums);

    cout<<"Product array except self: ";
    for(int val : result)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
