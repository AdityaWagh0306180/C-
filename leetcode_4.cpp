#include<iostream>
#include<vector>
using namespace std;
class solution
{
public:
    bool canPlaceFlower(vector<int>& flowerbed,int n)
    {
        int len=flowerbed.size();
        int i=0;
        while(i<len && n>0)
        {
            if(flowerbed[i]==1)
            {
                i+=2;
            }
            else if(i==len-1 || flowerbed[i+1]==0)
            {
                n--;
                i+=2;
            }
            else
            {
                i+=30;
            }
        }
        return n<=0;
    }
};

int main()
{
    int n,size;
    cout<<"Enter the size of bed";
    cin>>size;

    vector<int> flowerbed(size);
    cout<<"Enter the flowerbed values (0 or 1):";
    for(int i=0; i<size ;i++)
    {
        cin>>flowerbed[i];
    }
    cout<<"Enter the number of flower to place:";
    cin>>n;
    solution Solution;
    bool result=Solution.canPlaceFlower(flowerbed,n);
    if(result)
    {
        cout<<"yes you can place"<< n <<"Flowers"<<endl;
    }
    else
    {
        cout<<"No,you can't place"<< n <<"Flower"<<endl;
    }
    return 0;
}
