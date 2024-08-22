#include<stdio.h>

int main() {
	printf(" Pointer : Demonstrate the use of &  and * operator\n");
	printf("------------------------------------------------\n");

	int m=300;
	float fx=300.6000006;
	char cht='z';
	int *p1=&m;
	float *p2=&fx;
	char *p3=&cht;
	
	printf(" m = %d \n",m);
	printf(" fx = %.2f \n",fx);
	printf(" cht = %c \n",cht);
    
	printf(" Using & Operator : \n");
	printf("-----------------------\n");

	printf(" address of  m = %p \n",p1);
	printf(" address of  fx = %p \n",p2);
	printf(" address of  cht = %p \n",p3);

	printf(" Using & and * Operator : \n");
	printf("----------------------------\n");

	printf(" value at address of m = %d\n",m);
	printf(" value at address of fx = %f\n",fx);
	printf(" value at address of cht = %c\n",cht);

	printf(" Using only Pointer variable : \n");
	printf("----------------------------\n");
	
	printf(" address of  m = %p \n",p1);
	printf(" address of  fx = %p \n",p2);
	printf(" address of  cht = %p \n",p3);
	
	printf(" Using only Pointer variable : \n");
	printf("----------------------------\n");

	printf(" value at address of m = %d\n",*p1);
	printf(" value at address of fx = %f\n",*p2);
	printf(" value at address of cht = %c\n",*p3);
	
return 0;	
}