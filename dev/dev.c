#include<stdio.h>


int main(void)
{
	printf("dev0\n");
	printf("lslls\n");
#ifdef debug
	printf("dev1\n");
	printf("dev2\n");
	printf("dev3\n");
	printf("dev4\n");
	printf("dev5\n");
#endif
	
	return 0;
}
