#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>


int isprime(int n)
{
	int i;
	if(n==2)
	{
		return 1;
	}
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}					
int main()
{
	pid_t pid;
	int n1,n2,f,prim,n,i=3,j=0;
	printf("enter the limitimg value");
	scanf("%d",&n);
	n1=0,n2=1;
	f=n1+n2;
	pid=fork();
	if(pid==0)//child
	
	{
		
		printf("Fibonacci series");
	
		printf("%d	%d",n1,n2);
		printf("	%d	",f);
		while(i<n)
		{
			
			n1=n2;
			n2=f;
			f=n1+n2;
			printf("%d	",f);
			i++;
		}
	}
	else//parent
	{
		wait(NULL);
		
		int k=2;
		printf("\nPrime Numbers");
		while(j<n)
		{
			if(isprime(k))
			{
				printf("%d	",k);
				j++;
			}
			k++;
		}
	}			
					
						
	return 0;
}			
