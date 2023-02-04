#include<iostream>
#include<unordered_map>
using namespace std;

void findpair(int arr[],int n,int x)
{
    unordered_map<int,int> box;
    bool found=false;
    for(int i=0;i<n;i++)
    {
        int target=x-arr[i];
        if(box.count(target))
        {
            cout<<"positions ->"<<i<<","<<box[target]<<"\n";
            cout<<"values ->"<<arr[i]<<","<<arr[box[target]]<<"\n";
            found=true;
        }
        //to add in unordered set
        box[arr[i]]=i;
    }
}
int main()
{
    int arr[]={1,3,5,-6,9,4,-2};
    int x=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    findpair(arr,n,x);
}
