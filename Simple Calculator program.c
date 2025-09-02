#include <stdio.h>
#include <math.h>
int myFunction1Dsum(){
int i;
int sum=0;
int X[10];
printf("enter the values of my 1D array \n");
for(i=0;i<10;i++){
scanf("%d",&X[i]);
sum=sum+X[i];
}
printf("the sum of the 1d array is:\n");
return sum;
}
int myFunction1Dsubtraction(){
int i;
int subtraction;
int X[10];
printf("\nenter the values of my 1D array \n");
for(i=0;i<10;i++){
scanf("%d",&X[i]);
}
subtraction=X[0];
for(i=1;i<10;i++){
subtraction=subtraction-X[i];
}
printf("the subtraction is:\n");
return subtraction;
}
int myFunction1Dmultiplication(){
int multiplication=1;
int i;
int X[10];
printf("\nenter the values of my 1D array \n");
for(i=0;i<10;i++){
scanf("%d",&X[i]);
multiplication=multiplication*X[i];
}
printf("the multiplication is:\n");
return multiplication;
}
int myFunction1Ddivision(){
int division;
int i;
int X[10];
printf("\nenter the values of my 1D array \n");
 for (i = 0; i < 10; i++) {
    scanf("%d", &X[i]);
    }
    division = X[0];
    for (i = 1; i < 10; i++) {
    if (X[i] != 0) {
            division /= X[i];
        }else{
            printf("Error: Division by zero!\n");
            return 0;
}
}
printf("the division result is:\n");
return division;
}
int myFunction2D(int myNumbers2D[2][5]){
int i;
int j;
int sum=0;
for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            sum=sum+myNumbers2D[i][j];
        }
    }
printf("\nthe sum of the 2d array is %d\n",sum);
return sum;
}
int main()
{
printf("%d",myFunction1Dsum());
printf("%d",myFunction1Dsubtraction());
printf("%d",myFunction1Dmultiplication());
printf("%d",myFunction1Ddivision());
int myNumbers2D[2][5] = { {5,3,4,6,9}, {10,9,8,5,4} };
myFunction2D(myNumbers2D);
double z =sin(45);
printf("%lf\n",sin(45));
double A = cos(45);
printf("%lf\n",cos(45));
double B = sqrt(16);
printf("%lf\n",sqrt(16));
 double C = log(10);
printf("%lf\n",log(10));
double x;
double n;
double power;
printf("please enter the value of the base \n");
scanf("%lf",&x);
printf("please enter the value of the exponent \n");
scanf("%lf",&n);
power=pow(x, n);
printf("the value of %lf to the power of %lf is %lf", x, n, power);
return 0;
}