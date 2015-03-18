#include <stdio.h>

const char d[4]={'0','A','B','C'};

void hanNT ( int x, int y, int k)
{
	if ( k== 1)
	{
		printf ( "%c -> %c\n", d[x], d[y]);
		return ;
	}
	
	int temp= 6-x-y;
	hanNT ( x,temp,k-1);
	printf ( "%c -> %c\n", d[x], d[y]);
	hanNT ( temp, y, k-1);
	return ;
}

int main ()
{
	int n;
	printf ( "请输入你想要的汉诺塔个数:");
	scanf ( "%d", &n);
	hanNT ( 1, 3, n);
}
