#include <stdio.h>
#include <stdlib.h>



void printVetor(int v[])
{
	for(int i=0;i<10;i++)
	{
		printf("%d --> ", v[i]);
	}
}

void main()
{
	int a[10];
	char l[10];

	for(int i = 0; i<10;i++)
	{
		fgets(l,10,stdin);
		a[i] = atoi(l);
		
	}

	printVetor(a);	
}


