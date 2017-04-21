#include<stdio.h>
#include<string.h>

#define	TEST(x) strlen(x),"额，"\
       	"傻逼\n"

int main()
{
	char buf[40]={"aaaaa bbbbbb cccccccc"};
	char a[20] = {0};
	strncpy(a,buf+13,strlen(buf+13));
	strcpy(buf+5,a);
	printf("%s\n",buf);
	printf("%d\n",strncmp(buf,"ab",2));
	printf("%d %s",TEST("dddddd"));
	return 0;

}
