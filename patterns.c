#include<stdio.h>
#include<cs50.h>
int main(void)
{
	int type = get_int("Enter type of pattern (1 or 2) ");
	int num_rows = get_int("Number of rows");
	int c=num_rows;
	switch(type)
	{
		case 1: for(int i=1;i<=num_rows;i++)
			{
				for(int j=num_rows;j>=i;j--)
				{
					printf("#");
				}
				printf("\n");
			}
			break;
			
		case 2: for(int i=1;i<=num_rows;i++)
			{
				for(int k=i;k<num_rows;k++)
				{
					printf(" ");
				}
				for(int j=1;j<=i;j++)
				{
					printf("#");
				}
				printf("\n");
			}
			break;
		
		default: break;
	}
}
