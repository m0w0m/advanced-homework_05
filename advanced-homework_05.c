#include <stdio.h> 
#include <stdlib.h> 
int add3(int);

int main(void)
{
	int i,result;
	for(i=2;i<=100;i++)
	{
		if(i%2==0)result=add3(i);
	}
	printf("2+4+6+~+100總和為:%d\n",result);
	system("pause");
	return 0;
}

int add3(int i)
{
	static int sum=0;
	sum+=i;
	return sum;
}
