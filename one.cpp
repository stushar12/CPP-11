#include<iostream>
#include<string>
#include<map>
#include<unordered_set>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
 set<int>Set;
int arr[]={1,2,3,4};

int n=sizeof(arr)/sizeof(arr[0]);
for (int i=0;i<n;i++)
{
Set.insert(arr[i]);
}

int count=1;
int max=-1;
auto i2=(--Set.end());
for(auto i=Set.begin();i!=i2;i++)
{
    if((*(next(i))-*i)==1)
    {
    count=count+1;
    }
    else
    {
        count=1;
    }
    if (count>max)
    max=count;
    
}
cout<<max<<" ";
}