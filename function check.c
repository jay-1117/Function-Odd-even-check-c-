//wap to check the number is even or odd using function



#include<stdio.h>

   int check(int number)
{

	int a;
	printf("enter the number:\n");
	scanf("%d",&a);
	
	if(a % 2 ==0)
	{
		printf("number is even");
		
	}
	else{
		printf("number is odd");
	}
	return a;
}

main()
{
	int a;
	check(a);
}
