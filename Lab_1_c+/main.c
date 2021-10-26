#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1,x2,delta,x3;
    unsigned int i=1,N;
    unsigned char A;
    printf("Choise your variant: \n");
    scanf("%c",&A);
    if(A=='1')
    {
    //1
    printf("First value : \n");
    scanf("%lf",&x1);

    printf("Last value : \n");
    scanf("%lf",&x2);

    printf("Count of steps : \n");
    scanf("%d",&N);

    printf("Start: %.2lf\nFinish: %.2lf\nCount of steps: %d\n",x1,x2,N );
    printf("**********************************\n");
    printf("\t* N * X * F(X) *\t\n");
    printf("**********************************\n");

    for(i; i<=N; i++)
      {
        x3=x1*2;
        //my function F(x)=x1*2
        printf("\t| %d| %.2lf| %.2lf|\t\n",i,x1,x3);
        printf("+----------+----------+----------+\n");
        x1++;
      }
    }
   else if(A=='2')
   {
    //2
    printf("\nFirst value : ");
    scanf("%lf",&x1);

    printf("\nLast value : ");
    scanf("%lf",&x2);

    printf("\nStep : ");
    scanf("%lf",&delta);

    printf("Start: %.2lf\nFinish: %.2lf\nStep: %.2lf\n", x1,x2,delta );
    printf("**********************************\n");
    printf("\t* N * X * F(X) *\t\n");
    printf("**********************************\n");

    for(i; i<=x2; i++)
    {
        x3=x1*2;
        //my function F(x)=x1*2
        printf("\t| %d| %.2lf| %.2lf|\t\n",i,x1,x3);
        printf("+----------+----------+----------+\n");
        x1=x1+delta;
    }
   }
    return 0;
}
