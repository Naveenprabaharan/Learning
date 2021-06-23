#include<stdio.h>

int main()
{
    int result=10;
    double fraction;

    puts("\nAddition:");
    result=result + 20;
    printf("10+20=%i\n",result);

    puts("\nsubtraction:");
    result=result-5;
    printf("30-5=%i\n",result);

    puts("\nMultiplication:");
    result=result*2;
    printf("25*2=%i\n",result);

    puts("\nDivision:");
    result=result/5;
    printf("50/5=%i\n",result);

    puts("\nDivision with int");
    result=10/3;
    printf("10/3=%i\n",result);

    puts("\nDivision with fraction");
    fraction=10/3.0;
    printf("10/3.0=%g\n",fraction);

    puts("\npre & post increment:");
    result=2;
    printf("result=%d\n",result);
    printf("result++=%i\n",result++);
    printf("++result=%i\n",++result);

    puts("\npre & post decrement:");
    printf("result--=%i\n",result--);
    printf("--result=%i\n",--result);

    return 0;
}
