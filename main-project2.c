#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char  senteces[999];
    int uq=0;
    char al[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

char ce[]= {';','/','+',' '};
    int ik,ok,max,counter=0;
    unsigned int array[52]={0};




    printf("Write a sentence..\n");
    gets(senteces);

    printf("\n%s\n",senteces);
    for(ik=0; ik<=999; ik++){

            if(senteces[ik]!=ce[0] || senteces[ik]!=ce[1] || senteces[ik]!=ce[2] || senteces[ik]!=ce[3]){


       for(ok=0; ok<=51; ok++){



        if(senteces[ik]==al[ok]){
            array[ok]+=1;


        }



       }
            }

             if(senteces[ik]=='\0'){
        break;
       }
            }

    for(ik=0; ik<=25; ik++){
        array[ik]=array[ik]+array[ik+26];
        if(1<=array[ik]){
            counter++;
        }

    }
    if(26<=counter){
        printf("sentece is fully...\n");
       }
       else{
        printf("sentece is not fully...\n");
       }


max=array[0];

   for(ik=0; ik<=25; ik++){



    if(max<=array[ik] && 1<array[ik]){
        max=array[ik];
        uq=ik;
       if(1<max)
   printf("Most occurred letter in the sentence :  %c \n",al[uq]);
   else
       printf("every letter you've insterted is 1 ....");

    }





   }

















    return 0;
}

