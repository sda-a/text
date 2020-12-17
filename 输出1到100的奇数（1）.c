#include<stdio.h>
int main()                                
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);
		}
		i++;
	}


	return 0;                 //      一个数模2余0是偶余1是奇
}