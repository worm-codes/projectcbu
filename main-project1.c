#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int matrix(int x){


if(x==1){
    return 1;
}
   return x+matrix(x-1);


}
int sum(int x,int y){

    int i,j,summ;


    summ=0;
if(y<x){
    for(j=1; j<=y; j++){
    summ=0;
    for(i=1; i<=x; i++){

        summ+=i;

    }
    x=summ;

}
 return x;
}
if(x<y){
        for(j=1; j<=x; j++){
    summ=0;
    for(i=1; i<=y; i++){

        summ+=i;

    }
    y=summ;

}
return y;

}

}

int main()
{ int a,b,j,i,k,op;
printf("1-recursive\n2-iterative\n");
scanf("%d",&op);
if(op==1){
printf("How many times do you want ?\n");
scanf("%d",&a);
printf("enter first number\n");
scanf("%d",&b);
k=b;
if(a<b){
for(i=1; i<=a; i++){
     b=matrix(b);

  }
  printf("Sum(%d,%d)=%d",a,k,b);

}
if(b<a){
        k=a;
        for(i=1; i<=b; i++){
     a=matrix(a);
  }

  printf("Sum(%d,%d)=%d",k,b,a);

}

}
if(op==2){
printf("enter first number\n");
scanf("%d",&a);
   printf("How many times do you want ?\n");
scanf("%d",&b);

printf("SUM(%d,%d)=%d",a,b,sum(a,b));


}
}
