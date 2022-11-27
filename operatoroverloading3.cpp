#include<bits/stdc++.h>
using namespace std;

int poww(int n)
{   
    int c=1;
    while(n--)c*=2;
    return c;
}

int f(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    map<int,int> mp;
    int ans=0;

    for(auto &i:arr)
    mp[i]++;

    for(auto &i:arr)
    {   
        int val=0;
    
        mp[i]--;
        for(int j=0;j<32;j++)
        {
            
            val = poww(j);  
                  
        

        int target = val-i;

        if(target<0)
        continue;
        if(target>arr.back())break;

        if(mp.find(target)!=mp.end())ans+=mp[target];
        
        }
        
        
    }
    return ans;

}

int main()
{
    vector<int> arr={2,2,4,6,8};
    cout<<f(arr)<<"\n";
}