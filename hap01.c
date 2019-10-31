#include<stdio.h>
int main()
{
	int i=1, hap=0, num;
	
	printf("숫자입력: ");
    scanf("%d", &num);
	
	while(i <= num)
	{
		hap += i;
		i++;
	 } 
	 
	 return 0;
	
}

