#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sumOfNumbers(int n, int m){
    int sum;
    sum=n+m;
    return sum;
}

int Subtraction(int n, int m){
   int diff;
   diff=n-m;
   return diff;
}

int Multi(int n, int m){
   int prod;
   prod=n*m;
   return prod;
}

double Division(int n, int m){
  double div;
  div=(double)n/m;
  return div;
  }

int Power(int n, int m){
  int power;
  power=pow(n, m);
  return power;
}

double Square(int n){
   double square;
   square=sqrt(n);
   return square;
}

void Average(){
   double avg=0.0;
   double sum=0.0, cnt=0.0;
   double  b;
   char m;
   while(1){

     scanf("%lf", &b);
     scanf("%c", &m);

     if(m == 's'){
      break;
     }
     sum+=b;

     cnt++;

   }
   avg=sum/cnt;
   printf("%lf", avg);


}

void read(){
   int n, m;
   char sign[20];
   printf("Enter the type of calculation you want to do(if you want to find the square root enter '$'):");
   scanf("%s", sign);
   if(strcmp(sign, "+") == 0){
      int sum;
      printf("Enter the numbers you want to perform the calculation on:");
      scanf("%d %d", &n, &m);
      sum=sumOfNumbers(n, m);
      printf("%d", sum);
   }
   else if(strcmp(sign, "-")==0){
      int diff;
      printf("Enter the numbers you want to perform the calculation on:");
      scanf("%d %d", &n, &m);
      diff=Subtraction(n, m);
      printf("%d", diff);
   }
   else if(strcmp(sign, "*")==0){
      int prod;
      printf("Enter the numbers you want to perform the calculation on:");
      scanf("%d %d", &n, &m);
      prod=Multi(n, m);
      printf("%d", prod);
   }
   else if(strcmp(sign, "/")==0){
      double div;
      printf("Enter the numbers you want to perform the calculation on:");
      scanf("%d %d", &n, &m);
      div=Division(n, m);
      printf("%lf", div);
   }
   else if(strcmp(sign, "^")==0){
      int power;
      printf("Enter the numbers you want to perform the calculation on:");
      scanf("%d %d", &n, &m);
      power=Power(n, m);
      printf("%d", power);
   }
   else if(strcmp(sign, "$")==0){
      double sqrt;
      printf("Enter the number you want to perform the calculation on:");
      scanf("%d", &n);
      sqrt=Square(n);
      printf("%lf", sqrt);
   }
   else if(strcmp(sign, "a")==0){
      printf("Enter the numbers you want to perform the calculation on(write 's' when you want to calculate the numbers entered):\n");
      Average();
   }
}

int main()
{
    read();
    return 0;
}
