#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
	puts("Unsigned values:");
	printf("max.char value :%u\n",UCHAR_MAX);
	printf("max.short value :%u\n",USHRT_MAX);
	printf("max.int value :%u\n",UINT_MAX);
	printf("max.MAX value :%u\n",ULONG_MAX);
	
	printf("\nSigned Values\n");
	printf("Min.int value :%i\n",INT_MIN);
	printf("MAX.int value :%i\n",INT_MAX);
	printf("\n");
	printf("MIN.short value :%i\n",SHRT_MIN);
	printf("max.short value :%i\n",SHRT_MAX);
	printf("\n");
	printf("MIN.LONG value :%i\n",LONG_MIN);
	printf("max.LONG value :%ui\n",LONG_MAX);
	printf("\n");
	printf("\n FLOAT,DOUBLE,LONGDOUBLE Values\n");
	printf("MIN.float value :%g\n",FLT_MIN);
	printf("max.float value :%g\n",FLT_MAX);
	printf("\n");
	printf("MIN.DOUBLE float value :%g\n",DBL_MIN);
	printf("max.DOUBLE float value :%g\n",DBL_MAX); 
	printf("\n");
	printf("MIN.LONGDOUBLE float value :%g\n",LDBL_MIN);
	printf("max.LONGDOUBLE float value :%g\n",LDBL_MAX);
	printf("\nMEMORY SIZE\n");
	printf("The size of char:%i\n",sizeof(char));
	printf("The size of int:%i\n",sizeof(int));
	printf("The size of short int:%i\n",sizeof(short));
	printf("The size of long int:%i\n",sizeof(long));
	printf("The size of float:%i\n",sizeof(float));
	return 0;
}
