// https://codeforces.com/contest/1937/problem/B
#include <iostream>

using namespace std;
const int N=1000010;

int  T,n;
char a[3][N];

int main()
{
	scanf("%d",&T);
	while(T--)
	{
        scanf("%d",&n);
		for(int i=1;i<=2;i++)
		{
		    scanf("\n");
			for(int j=1;j<=n;j++)
				scanf("%c",&a[i][j]);
		}
		int max_down=n,min_down=1;
		for(int i=n;i>=2;i--)
			if(a[1][i]=='1'&&a[2][i-1]=='0') max_down=i-1;
		for(int i=1;i<max_down;i++)
			if(a[2][i]=='1'&&a[1][i+1]=='0') min_down=i+1;
		for(int i=1;i<=max_down;i++) printf("%c",a[1][i]);
		for(int i=max_down;i<=n;i++) printf("%c",a[2][i]);
		printf("\n");
		printf("%d\n",max_down-min_down+1);
	}
	
	return 0;
}