//math lib functions
#include<stdio.h>
#include<math.h>
int main()
{
	float a=6.8,b=2.2,c=1.0,d=-100.23,e=565.55;
	int x=22,y=300;
	printf("Ceil value of a=%.1f",ceil(a));
	printf("\nCeil value of b=%.1f",ceil(b));
	printf("\nCeil value of c=%.1f",ceil(c));
	
	printf("\n\nFloor value of a=%.1f",floor(a));
	printf("\nFloor value of b=%.1f",floor(b));
	printf("\nFloor value of c=%.1f",floor(c));
	
	printf("\n\nRound off value of a=%.1f",round(a));
	printf("\nRound off of b=%.1f",round(b));
	printf("\nRound off value of c=%.1f",round(c));
	
	printf("\n\nAbsolute value of x=%d",abs(x));
	printf("\nAbsolute value of d=%.1f",fabs(d));
	
	printf("\n\nLog value of b=%f",log(b));
	printf("\nBase Log 10 value of b=%f",log10(b));
	
	printf("\n\nSquare root value of e=%.2f and y=%d",sqrt(e),sqrt(y));
	
	printf("\n\nPower value of a^b=%f",pow(a,b));
	
	
	
	
	return 0;
}
