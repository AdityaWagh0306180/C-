#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool uniqueOcurrences(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
    vector<int> v;
    for(int i=0; i < arr.size(); i++)
    {
        int cnt =1;
        while(i+1 < arr.size() && arr[i] == arr[i +1])
        {
            cnt++;
            i++;
        }
        v.push_back(cnt);
    }
    sort(v.begin(), v.end());
    for(int i = 1; i< v.size(); i++)
    {
        if(v[i] == v[i-1])
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array:";
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(uniqueOcurrences(arr))
    {
        cout<<"True: all occurences are unique"<<endl;
    }
    else
    {
        cout<<"False: Duplicate occurance found"<<endl;
    }
    return 0;
}
