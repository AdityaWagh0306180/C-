#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    int j = 0;

    for(int i = 0; i< nums.size(); i++)
    {
        if (nums[i] !=0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}
void displayVector(const vector<int>& nums)
{
    for(int num: nums)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}
int main()
{

    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array (space-seprated): ";
    for(int i =0 ; i<n; i++)
    {
        cin>>nums[i];
    }
    cout<<"Orignal array:";
    displayVector(nums);

    moveZeroes(nums);

    cout<<"Arrat after moving zeroes to the end: ";
    displayVector(nums);
    return 0;
}
