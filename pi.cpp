#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("Cadaeic Cadenza.txt","r",stdin);
	freopen("pi.txt","w",stdout);
	char c,t='\0';
	int cnt=0;
	while((c=getchar())!=EOF)
	{
		if(isalpha(c))	cnt++;
		else
		{
			if(isalpha(t))	cout<<(cnt==10?0:cnt);
			cnt=0;
		}
		t=c;
	} 
    return 0;
}

