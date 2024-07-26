#include<stdio.h>

void main(){

     // tableau 1 demonsion 
    int T[5]={2,5,8,7,6} ;

    for(int i=0 ; i < 5 ; i++){

        printf("Tableau = %d\n",T[i]);
    }

            /// Tableau 2 demonsion 
    int TB[2][5]={{2,5,8,7,6} , {111,77,66,44,88}} ;

    for(int i=0 ; i < 2 ; i++)
    {
 
       for(int j=0 ; j < 5 ; j++)
       {
           
           printf("Tableau = %d\t",TB[i][j]);
        }
        printf("\n");
    }
        

       
    


}