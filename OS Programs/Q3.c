#include<stdio.h>
#include<conio.h>
#include<pthread.h>
#include<unistd.h>
void *thread1(void *arg);  //function prototype

void *thread1(void *arg)
{
	printf("\nOutput Thread \n");
	int *num=(int *) arg;
	int n,j,i;
	
	for(j=2;j<=*num;j++){
	
 	 	i=2;
 		while(j%i!=0){
  			i++;
  		}
  	
 		if(i==j){
			printf("%d\n",j);
		}	
 	}
}

void main()
{
	int n;
	printf("\nInput Thread \n");
	printf("Enter a number: ");
	scanf("%d",&n);

	pthread_t th1;
	pthread_create(&th1,NULL,thread1,&n);
	pthread_join(th1,NULL); }

