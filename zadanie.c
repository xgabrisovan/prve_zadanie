#include<stdio.h>
#include<stdlib.h>
#define n 5
#define m 3

void nastav_pole(int x,int pole[x])
{
	int i;
	for(i=0;i<x;i++)
		{
			pole[i]=1+rand()%10;
		}
}

void vypis_pole(int x,int pole[x])
{
	int i;
	for(i=0;i<x;i++)
		{
			printf("%d ",pole[i]);
		}
	printf("\n");
}

void prienik(int pole1[n],int pole2[m])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if (pole1[i]==pole2[j])
				printf("%d " ,pole2[j]);
		}
	}
}				 
int main()
{
	int A[n],B[m];
	nastav_pole(n,A);
	nastav_pole(m,B);
	vypis_pole(n,A);
	vypis_pole(m,B);
	prienik(A,B);
	
}
