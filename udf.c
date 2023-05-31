#include<stdio.h>
calc()
{
	int n,a,b;
	do
	{
		printf("press 1 to addition\n");
		printf("press 2 to subtraction\n");
		printf("press 3 to multiplication\n");
		printf("press 4 to division\n");
		printf("press 5 to module\n");
		printf("press 0 to exit\n");
		printf("enter ualue A =");
		scanf("%d",&a);
		printf("enter ualue B =");
		scanf("%d",&b);
		printf("your choice");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				   printf("addition of A+B=%d",a+b);
				   break;
			case 2:
				   printf("subtraction of A-B=%d",a-b);
				   break;	   
			case 3:
				   printf("multiplication of A*B=%d",a*b);
				   break;
			case 4:
				   printf("division of A/B=%d",a/b);
				   break;
			case 5:
				   printf("module of A%B=%d",a%b);
				   break;
			case 6:
				   printf("exit");
				   break;	 	   	   	   	   
		}
	}while(n==0);
}
main()
{
	calc();
}
