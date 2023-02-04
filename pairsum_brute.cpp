#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> pairs;
    vector<int> arr={1,3,5,-2,6,-3};
    int n;
    cin>>n;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if((arr[i]+arr[j])==n)
            {
                pairs.push_back({arr[i],arr[j]});
            }
        }
    }
    if(pairs.size()==0)
    {
        cout<<"no pair";
    }
    else
    {
        cout<<"found"<<"\n";
        for(int i=0;i<pairs.size();i++)
        {
            cout<<"("<<pairs[i][0]<<","<<pairs[i][1]<<")"<<"\n";
        //     cout<<"(";
        //     for(int element : pairs[k])
        //     {
        //         cout<<element<<",";
        //     }
        //     cout<<")";
        //     cout<<"\n";
        }
    }
}
