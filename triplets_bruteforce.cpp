#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> result;
    vector<int> arr={1,3,5,7,9,13,15,17,-2,-4,-6,0};
    int sum;
    cout<<"enter target :";
    cin>>sum;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            for(int k=j+1;k<arr.size();k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    result.push_back({arr[i],arr[j],arr[k]});
                }
            }
        }
    }
    if(result.size()==0)
    {
        cout<<"sum not found";
    }
    else
    {
        for(auto x:result)
        {
            for(auto y:x)
            {
                cout<<y<<",";
            }
            cout<<endl;
        }
    }
}
