#include<stdio.h>
#include<stdlib.h>


typedef struct{
	int *pole;
	unsigned int dlzka;
}MNC;

void prienik(MNC *A,MNC *B)
{
	int i,j;
	
	printf("Prienik mnozin:\n");
	for(i=0;i<A->dlzka;i++)
	{
		for(j=0;j<B->dlzka;j++)
		{
			if (A->pole[i]==B->pole[j])
				printf("%d " ,B->pole[j]);
		}
	}
	printf("\n");
}

void zjednotenie(MNC *A, MNC *B)
{ 	
	int i = 0, j = 0; 
	
	printf("Zjednotenie mnozin:\n");
	while (i < A->dlzka && j < B->dlzka) 
	{ 
		if (A->pole[i] < B->pole[j]) 
		{
			printf(" %d ", A->pole[i]); 
			i++;
		}
		else if (B->pole[j] < A->pole[i]) 
		{
			printf(" %d ", B->pole[j]); 
			j++;
		}
		else
		{	 
			printf(" %d ", B->pole[j]); 
			i++;
			j++; 
		} 
	}
   
	while(i < A->dlzka) 
	{
		printf(" %d ", A->pole[i]);
		i++;
	}
	 
	while(j < B->dlzka) 
	{
		printf(" %d ", B->pole[j]);
		j++;
	}
}
	

int main()
{
    
	int A[5]={1,2,3,4,5},B[5]={3,4,5,6,7};
	MNC N,M;
	
	N.pole=A;
	N.dlzka=5;
	M.pole=B;
	M.dlzka=5;
	
	prienik(&N,&M);
	zjednotenie(&N,&M);
	
	return(0);
}
