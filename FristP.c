#include<stdio.h>

void main(){
    int x;
    float y;
    int z;
    float r;

    printf("donne les valeur x , y et z : ");
    scanf("%d %f %d",&x,&y,&z);
    printf("valeur x= %d , valeur y= %.2f et valuer z= %d \n",x,y,z);

   /*
    if(x==z){
        r=15.00;
        printf("r=%.2f",r);
    }
    else {
        r=20.22;
          printf("r=%.2f",r);
    }
    */

// Ternay Operateur 
      
      r= (x==y) ? 15.00 : 20.22 ;
    
     printf("r=%.2f",r);
    
}