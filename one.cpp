#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,15,9,1,11,8,6,5,13,10,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int, bool> m;
    
    for(int i=0;i<n;i++)
    m[arr[i]]=true;

    for(int i=0;i<n;i++)
    {
        if(m.find(arr[i]-1)!=m.end())
        m[arr[i]]=false;
    }
     int res=1;
    for(auto itr:m)
    {
        int x=itr.first;
        int len=1;
        if(itr.second == 1)
        {
            while(m.find(x+1)!=m.end())
            {
                len++;
                x++;
            }
            res=max(res,len);

        }
    }

    cout<<res;


}
