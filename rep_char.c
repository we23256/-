#include<stdio.h>
int main()
{
	int i,j ,tot_rep,rep;
	char ch;
	
	printf("�ݺ��� Ƚ�� �Է� : ");
	scanf("%d", &tot_rep);
	rewind(stdin);
	i = 0;
	while(i < tot_rep)
	{
		printf("���ڿ� Ƚ�� �Է� : ");
	    scanf(" %c %d", &ch, &rep);
        j = 0;
	    while(j < rep )
	    {
	       printf("%c", ch);
		   j++;	
		}
		printf("\n");
		i++;
	} 
	    return 0;
}
