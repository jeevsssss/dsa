#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr={1,3,5,7,9,13,15,17,-2,-4,-6,0};
    vector<vector<int>>result;
    sort(arr.begin(),arr.end());
    int sum;
    cout<<"enter target sum : ";
    cin>>sum;
    int n=arr.size();
    for(int i=0;i<=n-3;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int tot_sum=0;
            tot_sum+=arr[i];
            tot_sum+=arr[j];
            tot_sum+=arr[k];
            if(tot_sum==sum)
            {
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(tot_sum>sum)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    if(result.size()==0)
    {
        cout<<"pair not found";
    }
    else
    {
        for(auto x:result)
        {
            for(auto y:x)
            {
                cout<<y<<",";
            }
            cout<<"\n";
        }
    }
}
