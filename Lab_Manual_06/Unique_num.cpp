#include<stdio.h>
#define SIZE 10

int main(){
	int Arr[SIZE];
	for(int i=0;i<SIZE;i++)
	{	int duplicate=0;
		printf("Enter a Positive Integer at Index %d :",i);
		scanf("%d",&Arr[i]);
		for(int j=0;j<i;j++)
		{
		  if(i!=j && Arr[i]==Arr[j])
		  {
		    printf("Integer is Already in Array! Please enter a different number\n");
		    duplicate=1;
		    break;
		  }
		}
			if(duplicate==1)
			{
				i--;
			}	
	}
	printf("\n\nContent of Array:");
for(int i=0;i<SIZE;i++){
	printf("%d ",Arr[i]);
}

printf("\n");
	return 0;
}

