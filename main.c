#include <stdio.h>

int main() {
	int answer=32;
	int num;
	int trial=0;
	
	do
	{
		printf("your answer: ");
		scanf("%d",&num);
		
		if(num>32){
			printf("too high\n");
		}
		else if(num<32){
			printf("too low\n");
		}
		trial=trial+1;
	} while(num!=32);
	printf("congratulation!\n");
	
    return 0;
}

