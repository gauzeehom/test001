#include<stdio.h>
#include<string.h>

#define NUM_PLANETS 3

int main(int argc, char *argv[])
{
	printf("<<<\n");
	printf("argc:%d\n",argc);
	for (int n=0; n<argc; n++)
	{
		printf("%d:%s\n", n+1, argv[n]);
	}
	printf("\n");
	
	char *planets[]={"aaa", "bbb", "ccc"};
	for(int m=0;m<NUM_PLANETS;m++)
	{
		printf("%s\n",planets[m]);
	}
	printf("\n");

	int i,j;
	for(i=1;i<argc;i++)
	{
		for(j=0;j<NUM_PLANETS;j++)
		{
			if(strcmp(argv[i],planets[j])==0)
			{
				printf("%s is found\n", argv[i]);
				break;
			}
		}

		if(j==NUM_PLANETS)
			printf("%s is not found\n", argv[i]);

	}
	
	printf(">>>");
	return 0;
	
}
