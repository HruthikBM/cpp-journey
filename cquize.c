#include<stdio.h>
int fun()
{
    static  int c=10;
	c++;
	printf("inside the fun()=%d\n",c);
	return c;
}
int main()
{
	printf("1.%chjk=%+10d%c\n",'c',3,'e');
	printf("2.%d\n",fun());
	printf("3.%d");
	printf("\n");
	printf("4.%d",sizeof(3.4));
	printf("\n");
	char *p="qwertyuiop";
	printf("5.");
	printf((p+2));
	printf("\n");
	printf("6.sdfghjkl;\n");
	int i;
	for(i=0;i>9;i+=3)
	{
		printf("d\n");
	}
	fprintf(stdout,"7.ghjk");
	return 0;
}

