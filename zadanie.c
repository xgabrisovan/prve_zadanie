#include<stdio.h>
#include<stdlib.h>
#define n 5
#define m 5

void nastav_pole(int x,int pole[x])
{
	int i;
	
	printf("Urc prvky mnoziny:\n");
	for(i=0;i<x;i++)
		{
			scanf("%d",&pole[i]);
		}
	printf("\n");
}

void prienik(int x,int y,int pole1[x],int pole2[y])
{
	int i,j;
	
	printf("Prienik mnozin:\n");
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

void zjednotenie(int x,int y,int pole1[x],int pole2[y])
{ 	i
	int i = 0, j = 0; 
	
	printf("Zjednotenie mnozin:\n");
	while (i < x && j < y) 
	{ 
		if (pole1[i] < pole2[j]) 
		{
			printf(" %d ", pole1[i]); 
			i++;
		}
		else if (pole2[j] < pole1[i]) 
		{
			printf(" %d ", pole2[j]); 
			j++;
		}
		else
		{	 
			printf(" %d ", pole2[j]); 
			i++;
			j++; 
		} 
	}
   
	while(i < x) 
	{
		printf(" %d ", pole1[i]);
		i++;
	} 
	while(j < y) 
	{
		printf(" %d ", pole2[j]);
		j++;
	}
}
	

int main()
{
	int A[n],B[m];
	
	nastav_pole(n,A);
	nastav_pole(m,B);
	prienik(n,m,A,B);
	zjednotenie(n,m,A,B);
	return(0);
}
