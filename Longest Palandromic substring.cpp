#include <bits/stdc++.h>
using namespace std;

int main()
{
   
   string s;
   cin>>s;
   bool dp[s.size()][s.size()];
   
   memset(dp,0,sizeof(dp));
   
   int max_length = 1;
   // for size of one
   
   int len = s.size();
   for(int i=0;i<len;i++)
   {
       dp[i][i] = true;
   }
   
   for(int i=0;i<len;i++)
   {
       if(s[i]== s[i+1])
       {
           dp[i][i+1] = true;
           max_length = 2;
       }
   }
   
   for(int k=3;k<len;k++)
   {
       for(int i=0;i<len-k+1 ;++i)
       {
           // every k size substring 
           // making i start and j as end 
           int j = i + k -1;
           // if size of k substring is palan then
           if(s[i] == s[j] && dp[i+1][j-1])
           {
               dp[i][j] = true;
               
               if(k>max_length)
               {
                   max_length = k;
               }
           }
       }
   }
   cout<<max_length<<endl;
}
 

