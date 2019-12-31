#include <stdio.h>
void right (int a);
void down(int a);
void left(int a);
void up(int a);
int a[30][30], i, j, k,l,n,m,x,y,o,p;
int main()
{
	while (scanf("%d%d", &n, &m) != EOF)
	{
		x = n;
		y = m;
		o = n;
		p = m;
		i = 1;
		j =0 ;
		k = 0;
		right(i);
	}
}
void right(int i)
{
	if (i <= x * y)
	{
		for (l = 0; l < m; l++, k++, i++) a[j][k] = i;
		m -= 2;  
		k -= 1;   
		j += 1;  
		down(i); 
	}
	else 
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < y; j++)
			{
				printf("%2d", a[i][j]);
				if (j != y - 1) printf(" ");
			}
			printf("\n");
		}

		
}
void down(int i)
{
	if (i <= x * y)
	{
		for (l = 0; l < n-1; l++, j++, i++) a[j][k] = i;
		n -= 2;
		j -= 1;
		k -= 1;
		left(i);
	}
	else
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < y; j++)
			{
			
				printf("%2d", a[i][j]);
				if (j != y - 1) printf(" ");
			}
			printf("\n");
		}

}
void left(int i)
{
	if (i <= x * y)
	{
		for ( l = 0; l < p-1; l++, k--, i++) a[j][k] = i;
		p -= 2;
		k += 1;
		j -= 1;
		up(i);
	}
	else
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < y; j++)
			{
				printf("%2d", a[i][j]);
				if (j != y - 1) printf(" ");
			}
			printf("\n");
		}

}
void up(int i)
{
	if (i <= x * y)
	{
		for ( l = 0; l < o-2; l++, j--, i++) a[j][k] = i;
		o-= 2;
		j += 1;
		k += 1;
		right(i);
	}
	else
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < y; j++)
			{
				printf("%2d", a[i][j]);
				if (j != y - 1) printf(" ");
			}
			printf("\n");
		}

}

