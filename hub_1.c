//#include <stdio.h>
//int main()
//{
//	int n=-1;
//	int count=0;
//	do
//	{
//		count++;
//	}while(n=n&(n-1));     //优化版
//	printf("%d\n",count);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int n=15;
	int count=0,i=0;
	for(i=0;i<32;i++)
	{
		if(((n>>i)&1)==1)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
