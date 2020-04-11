#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

 void *fun1(void *arg);
 int main()
 {
 	int n;
 	printf("Enter the number\n");
 	scanf("%d",&n);
 	pthread_t t1;
 	printf("thread creating\n");
 	pthread_create(&t1,NULL,fun1,&n);
 	pthread_join(t1,NULL);
 	exit(0);
 }
 void *fun1(void *arg)
 {
 	printf("\nThe prime numbers less than or equal to the input number is \n");
	int *number=(int *) arg;
	int n,b,i;
	
	for(b=2;b<=*number;b++)
	{
	
 	 i=2;
 	while(b%i!=0)
  	{
  		i++;
  	}
  	
 	if(i==b)
  	{
		printf("Prime numbers are %d\n",b) ;
		}
		
  }

 }
