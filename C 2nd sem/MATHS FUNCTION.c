#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double x=9.0, y=8.0, z=7.0;
//	printf("\nlog value is: %lf", log(x));
//	printf("\nlog value with base 10 is: %lf",log10(x));
//	printf("\nExponential value is: %lf",exp(x));
//	printf("\nCeil value is: %lf",ceil(8.94));
//	printf("\nFloor value is: %lf",floor(2.34));
//	printf("\nPower: %lf",pow(3.0,2.0));
//	printf("\nFloating absolute is: %lf",fabs(-2.9));
//	printf("\nSquare root value is %lf",sqrt(9));
//	printf("\nSin: %f,Cos: %f, Tan: %lf", sin(x),cos(y),tan(z));
//	printf("\nfMod:%f",fmod(2.0,1.5));
//	
//	
//}

int main()
{
	int a = 5;
	{
		int a = 50;
		{
			int a = 500;
			printf("\na:%d",a);
		}
		printf("\na:%d",a);
	}
	printf("\na:%d",a);
	return 0;
}
