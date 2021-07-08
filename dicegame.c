#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int GetRandom(int min,int max);

int main(){
  char n[10];
  printf("what is your name? ");
  scanf("%s",n);
  printf("Hello, %s!\n",n);
    int i;
    int j;
    
    int k[2];
    srand((unsigned int)time(NULL));
    k[0]=GetRandom(1,6);
    k[1]=GetRandom(2,7)-1;
	printf("Rolling the dice....\n");
	     for (i = 0;i < 2;i++){
                    printf("die %d:",i+1);
		    printf("%d\n",k[i]);
        }
        
	printf("Total value: %d\n",k[0]+k[1]);
	if(k[0]+k[1]>7){
	  printf("%s won\n",n);
	}
	else printf ("%s lose\n",n);
	return 0;
}

int GetRandom(int min,int max){
      return min + (int)(rand()*(max-min+1.0)/(RAND_MAX+1.0));
}
