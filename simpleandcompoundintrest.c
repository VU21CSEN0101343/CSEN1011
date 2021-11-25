# include <stdio.h>
int main() {
  int si,ci,p,t,r;

  printf("Principle = " );
  scanf("%d", &p);

  printf("Rate of Interest = " );
  scanf("%d", &r);

  printf("Time period = " );
  scanf("%d", &t);
  si=(p*t*r)/100;
  ci=(p*t*(1+r/100),t);
  
  printf("Simple Interest = %d \n",si );
  printf("compound intrest = %d \n",ci);
  
  return (0);
}
