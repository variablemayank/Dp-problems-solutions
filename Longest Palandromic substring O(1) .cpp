#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int start=0;
	int max_len = 1;
	int len = s.size();
	
	int low=0,high;
	for(int i=0;i<len;i++)
	{
		low = i-1;
		high = i;
		cout<<low<<" "<<high<<endl;
		while((low>=0)&&(high<len) && (s[low] == s[high]) )
		{
			if((high-low+1)>max_len)
			{
				max_len = high-low+1;
				start = low;
			}
			low--;
			high++;
		}
		
		low = i-1;
		high = i+1;
		cout<<low<<" "<<high<<endl;
		while((low>=0) && (high<len) && s[low] == s[high])
		{
			if((high-low+1)>max_len)
			{
				max_len = high-low+1;
				start = low;
			}
			low--;
			high++;
		}
	
		
		
	}
	//	cout<<start<<" "<<(start+max_len);
		string ans= s.substr(start,start+max_len);
		cout<<ans;
}
