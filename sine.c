#include<stdio.h>
#include<math.h>
#define pi 3.142857
int main ()
{
	float x,nume,deno,sum,term,degree;
	int i ;
	printf("enter degree\n");
	scanf("%f",&degree ); 
	x=degree *(pi/180.0);
	i=1; 
	nume=x; 
	deno=1.0;
	sum=0;
	term=1;
	do
	{
		sum=sum+term;
		i=i+2;
		nume=-nume*x*x;
		deno=deno*(i)*(i-1);
		term = nume / deno;
	}
	while (fabs(term)>=0.00001);
	printf ("computed value using Taylor Series - sin(%f) = %f\n",degree,sum);
	printf("using built_in function sin(%f) = %f\n",degree,sin(x));
	return 0;
}
