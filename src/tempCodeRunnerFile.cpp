#include<iostream>
using namespaces std;
int fun(string s)
{
    int n=s.size();
    vector<int>mp;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(mp[s[i]-'a']==0)
        {
        cnt++;
        }
        mp[s[i]-'a']++;
    }
    
    
    int ans=0;
    vector<int>key(9,0);
    for(cnt--)
    {
       
       int maxi=-1;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,mp[i]); 
        }
        
        int mini=INT_MAX;
        int idx=-1;
        for(int i=0;i<n;i++)
        {
            if(key[i]<mini)
            {
             mini=min(mini,key[i]);
             idx=i;
            }
           
        }

        if(mini==0)
        {
            ans++;
            key[idx]=1;
        }
        else if(mini==1)
        {
            ans+=2;
             key[idx]=2;
        }
        else if(mini==2)
        {
            ans+=3;
            key[idx]=3;
        }
        
    }
    
}
int main()
{
   
    
}