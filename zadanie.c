#include<stdio.h>
#include<stdlib.h>
#define n 5
#define m 5

void nastav_pole(int x,int pole[x])
{
	int i;
	printf("zadaj prvky mnoziny:\n");
	for(i=0;i<x;i++)
		{
			scanf("%d",&pole[i]);
		}
	printf("\n");
}

void prienik(int x,int y,int pole1[x],int pole2[y])
{
	int i,j;
	printf("prienik tvojich mnozin:\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			if (pole1[i]==pole2[j])
				printf("%d " ,pole2[j]);
		}
	}
	printf("\n");
}	

int main()
{
	int A[n],B[m];
	nastav_pole(n,A);
	nastav_pole(m,B);
	prienik(n,m,A,B);
	return(0);
}
