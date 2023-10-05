#include <stdio.h>

int main() {
	char c;
		int num=0;
		
	printf("input string: ");
	while ((c=getchar()) != '\n')
	{
		if  (c>='0' && c<='9')
		{
			num=num+1;
		}
	}
	printf("the number of digits is %d\n", num);
    return 0;
}

