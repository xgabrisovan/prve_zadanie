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

int main()
{
	int A[n],B[m];
	nastav_pole(n,A);
	nastav_pole(m,B);
}
