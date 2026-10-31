
#include <iostream>
using namespace std;
int sumOfDigits(int n){
   int sum = 0;
   while(n > 0){
      int rem = n % 10;
      sum = sum + rem;
      n = n / 10;
   }
   return sum;
}

int factorial(int n){
   int fact = 1 ;
   while(n > 0){
      fact = fact * n;
      n -= 1;
   }
   return fact;
}


int binomial(int n , int r){
   int fact_n = factorial(n);
   int fact_r = factorial(r);
   int fact_sub = factorial(n-r);
   return fact_n/ (fact_r*fact_sub);
}
   


int main(){
   int a;
   int b;
   cout << "enter two n and r";
   cin >> a >> b;
   cout << binomial(a ,b);
}