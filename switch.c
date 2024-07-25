#include<stdio.h>

int x;

void main(){
  
   printf("donne les valeur x = \n");
    scanf("%d",&x);

    switch (x)       /* expression */
    {
    case 10:             /* constant-expression */
           printf("x= 10") ;           /* code */
          
        break;
    case 11:           
             printf("x= 11") ;         
        break;
    case 12:           
           printf("x= 12") ;       
        break;
    case 13:           
           printf("x= 13") ;         
        break;
    default:
         printf("la valeur de x= %d \n",x) ;  
        break;
    }
}