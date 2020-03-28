#include<iostream>
using namespace std;
int main()
{
	int n,m,i,h,g;
	n=5;
	m=3;
	int alloc[5][3]={{0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}};
	int max[5][3]={{7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3}};
	int avail[3]={3,2,2};
	int f[n],ans[n],ind=0;
	for(g=0;g<n;g++)
	{
		f[g]=0;
	}
	int need[n][m];
	for(i=0;i<n;i++)
	{
		for(h=0;h<m;h++)
		need[i][h]=max[i][h]-alloc[i][h];
	}
	int z=0;
	for(g=0;g<5;g++)
	{
		for(i=0;i<n;i++)
		{
			if(f[i]==0)
			{
				int flag=0;
				for(h=0;h<m;h++)
				{
					if(need[i][j]>avail[j])
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					ans[in++]=i;
					for(z=0;z<m;z++)
					avail[z]+=alloc[i][y];
					f[i]=1;
				}
			}
			
		}
	}
	
}

