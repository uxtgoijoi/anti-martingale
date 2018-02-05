#include <stdio.h>
#include <stdlib.h>

int result(float p);

int main()
{
	int count1=50;
	int count2=4;
	float p=0.5;
	int surplus=50;
	for(int i=0;i<count1;i++)
	{
		if(surplus<1)
			break;
		int ante=1;
		int step=0;
		do
		{
			if(result(p)==0)
			{
				surplus-=ante;
				break;
			}
			else
			{
				surplus+=ante;
				ante*=2;
				if(surplus<ante)
					break;
			}
			printf("   %d\n",surplus);
			step++;
		}
		while(step<count2);
		printf("%2d %d\n",i,surplus);
	}

	return 0;
}

int result(float p)
{
	int flag;

	flag=rand();
	if(flag<RAND_MAX*p)
	{
		return 1;
	}

	return 0;
}
