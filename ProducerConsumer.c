#include<stdio.h>
#include<stdlib.h>
int main()
{
	int buffer[10],in,out,produce,consume,choice=0;
	in=0;
	out=0;
	int buff_size=10;
	while(choice!=3)
	{
		printf("\n1.Produce\t2.Consume\t3.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				if((in+1)%buff_size == out)
				{
						printf("\nBuffer is Full");
				}
				else
				{
					printf("\nEnter the value:");
					scanf("%d",&produce);
					buffer[in]=produce;
					in = (in+1)%buff_size;
				}
				break;
			case 2:
				if(in == out)
				{
					printf("\nBuffer is Empty");
				}
				else
				{
					printf("The consumed value:%d",buffer[out]);
					out=(out+1)%buff_size;
				}
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("Enter the above listed numbers only");
				break;
		}
	}
}
