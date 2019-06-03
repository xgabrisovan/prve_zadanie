#include <stdio.h>
#include <stdlib.h>


typedef struct{
	int *pole;
	unsigned int dlzka;
}MNC;

void vypis_mnoziny(MNC *C)
{
	int i;
	
	for(i=0;i<C->dlzka;i++)
		printf("%d ",C->pole[i]);
	
	printf("\n");
}
	

void prienik(MNC *A,MNC *B,MNC *C)
{
	int i,j;
	unsigned int pocet=0; 
	
	for(i=0;i<A->dlzka;i++)
	{
		for(j=0;j<B->dlzka;j++)
		{
			if (A->pole[i]==B->pole[j])
			{
			
				C->pole[pocet]=B->pole[j];
				pocet++;
			}
		}
	}
	C->dlzka=pocet;
	C->pole=&(C->pole[0]);
}

void zjednotenie(MNC *A, MNC *B,MNC *C)
{ 	
	int i = 0, j = 0;
	unsigned int pocet=0; 
	
	while (i < A->dlzka && j < B->dlzka) 
	{ 
		if (A->pole[i] < B->pole[j]) 
		{
			C->pole[pocet]=A->pole[i]; 
			i++;
			pocet++;
		}
		else if (B->pole[j] < A->pole[i]) 
		{
			C->pole[pocet]=B->pole[j]; 
			j++;
			pocet++;
		}
		else
		{	 
			C->pole[pocet]=A->pole[i]; 
			i++;
			j++; 
			pocet++;
		} 
	}
   
	if(i==A->dlzka && pocet==A->dlzka) 
	{
		while (j<B->dlzka)
		{
			C->pole[pocet]=B->pole[j];
			pocet++;
			j++;
		}
	}
	 
	else
	{
		while (i<A->dlzka)
		{
			C->pole[pocet]=A->pole[i];
			pocet++;
			i++;
		}
	}
	
	C->dlzka=pocet;
	C->pole=&(C->pole[0]);
}



int main(void)
{
    
	int A[8]={1,2,3,4,5,6,7,8},B[5]={7,8,9,10,11},P[8]={},Z[13]={};
	MNC N,M,C,D;

	N.pole=A;
	N.dlzka=8;
	M.pole=B;
	M.dlzka=5;
	C.pole=P;
	D.pole=Z;
	
	prienik(&N,&M,&C);
	printf("\nPrienik mnozin:\n");
	vypis_mnoziny(&C);
	
	zjednotenie(&N,&M,&D);
	printf("\nZjednotenie mnozin:\n");
	vypis_mnoziny(&D);

	return(0);
}
