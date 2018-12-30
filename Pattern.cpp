#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		int a[n][n],i,j,k=1,l;
		a[0][0]=1;
		l=n;

		for(j=1;j<n;j++)
		{
			a[0][j]=a[0][j-1]+k;
			k++;
		}
		
		for(i=1;i<n;i++)
		{
			for(j=0;j<n;j++)
			{	
				if(j==(n-1))
				{	a[i][j]=a[i-1][j]+l;
					l--;
				}
				else
				a[i][j]=a[i-1][j+1]+1;
			}
		}

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
return 0;
}
