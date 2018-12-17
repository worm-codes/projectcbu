#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 /*I could use functions but I wanted to do some practice*/
int main()
{
    int op;
    int dimension,i,j,s;

    int a,b,k,y,q,ok=1;
    int counter=0;




    printf("welcome matrix operations please select your operation\n");
    printf("1-Transpose\n2-Addition\n3-Multiplication\n");
    scanf("%d",&op);
    while(s!=0){
            if(s!=0){
    if(op==1){


        printf("please enter dimension...\n");
             scanf("%d",&dimension);

                if(dimension==2){

                 int i,j,a,b;
                 printf("enter height and line\n");
                 scanf("%d %d",&a,&b);

                 int array [a][b];
                 for(i=0;i<a; i++){
                    for(j=0; j<b; j++){
                        printf("[%d,%d]--->",i,j);
                        scanf("%d",&array[i][j]);
                        printf("\n");

                    }


                 }
                 printf("your matrix is : \n");
                 for(i=0; i<a; i++){

                    for(j=0; j<b; j++){
                        printf("%d ",array[i][j]);
                    }
                    printf("\n");

                 }
                 printf("transpose of matrix\n");
                 for(i=0; i<b; i++){

                    for(j=0; j<a; j++){
                        printf("%d ",array[j][i]);

                    }
                    printf("\n");

                 }



                }
    }

    if(op==2){
        printf("please enter dimension...\n");
             scanf("%d",&dimension);

                if(dimension==2){

                 int i,j;
                 printf("enter height and line\n");
                 scanf("%d %d",&a,&b);

                 int array [a][b];
                 printf("enter number for 1st matrix\n");
                 for(i=0;i<a; i++){
                    for(j=0; j<b; j++){
                        printf("[%d,%d]--->",i,j);
                        scanf("%d",&array[i][j]);
                        printf("\n");

                    }


                 }
                 printf("your 1st matrix is : \n");
                 for(i=0; i<a; i++){

                    for(j=0; j<b; j++){
                        printf("%d ",array[i][j]);
                    }
                    printf("\n");

                 }


                 int arrays [a][b];
                 printf("enter number for 2st matrix\n");
                 for(i=0;i<a; i++){
                    for(j=0; j<b; j++){
                        printf("[%d,%d]--->",i,j);
                        scanf("%d",&arrays[i][j]);
                        printf("\n");

                    }


                 }
                 printf("your 2st matrix is : \n");
                 for(i=0; i<a; i++){

                    for(j=0; j<b; j++){
                        printf("%d ",arrays[i][j]);
                    }
                    printf("\n");

                 }
                 int q[a][b];
                 for(i=0; i<a; i++){

                    for(j=0; j<b; j++){
                        q[i][j]=array[i][j]+arrays[i][j];
                    }
                 }
                 printf("sum of matrix is : \n");

                 for(i=0; i<a; i++){
                    for(j=0; j<b; j++){
                        printf("%d ",q[i][j]);
                    }
                    printf("\n");

                 }

                 }





    }
    if(op==3){

      printf("enter dimension\n");
      scanf("%d",&dimension);
      while(dimension!=2){

        printf("error-dimension must be 2 for matrix multiplication operations.Because matrix means 2 dimensional arrays.\n");
        scanf("%d",&dimension);

      }

                 printf("enter height and line\n");
                 scanf("%d %d",&a,&b);

                 int array [a][b];
                 printf("enter number for 1st matrix\n");
                 for(i=0;i<a; i++){
                    for(j=0; j<b; j++){
                        printf("[%d,%d]--->",i,j);
                        scanf("%d",&array[i][j]);
                        printf("\n");

                    }


                 }
                 printf("your 1st matrix is : \n");
                 for(i=0; i<a; i++){

                    for(j=0; j<b; j++){
                        printf("%d ",array[i][j]);
                    }
                    printf("\n");

                 }



                 printf("enter height and line for 2st matrix...\n");
                 scanf("%d %d",&k,&y);
                 while(b!=k){

                        printf("1st matrix's line has equal to 2st matrix's height\n");
                        scanf("%d %d",&k,&y);


                 }

                 int arrays [k][y];
                 printf("enter number for 2st matrix\n");
                 for(i=0;i<k; i++){
                    for(j=0; j<y; j++){
                        printf("[%d,%d]--->",i,j);
                        scanf("%d",&arrays[i][j]);
                        printf("\n");

                    }


                 }
                 printf("your 2st matrix is : \n");
                 for(i=0; i<k; i++){

                    for(j=0; j<y; j++){
                        printf("%d ",arrays[i][j]);
                    }
                    printf("\n");

                 }
                 int z[a][y];

                 for(i=0; i<a; i++){
                    for(j=0; j<y; j++){

                        for(q=0; q<k; q++){
                            z[i][j]=array[i][q]*arrays[q][i];
                        }
                    }
                 }
                 printf("multiplication of  matrices\n");
                 for(i=0; i<a; i++){
                    for(j=0; j<y; j++){
                        printf("%d ",z[i][j]);
                    }
                    printf("\n");
                 }
    }
    printf("Do you want more operations to do ??\n(press 0 FOR FINISH THE OPERATION)\n(if you want to continue you can press any number from your keyboard..)\n");
    scanf("%d",&s);

            }
            else {
                break;
            }
    }













             /*I could use functions but I wanted to do some practice*/






  getch();

    }





