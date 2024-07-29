#include<stdio.h>

   /////partie 3 permettaition entre a et b avec pointeur .on utlise add de pt car add de a et b dans swap et main diff
void swap(int *a,int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

int main()
{
   
   
    //////// Partie 1

    int a=40;   // int =2 byte =2 octet = 8 bite
    int *ptr;  // poiteur  = valeur de a
    ptr=&a; // adress ptr = adress a
   

    printf("la valeur a est %d \n",a);
    printf("l'adresse de valeur a est %d \n",&a);  // adresse de a dans la memoire 
    
    printf("l'adresse de valeur ptr est %d \n",ptr); 
    printf("la valeur de pointeur %d \n",*ptr);

      ////////// Partie 2

      int val1;
      int *pt1;
      pt1=&val1;
      int val2=50;
      int *pt2;
      pt2=&val2;

      printf("donne valeur \n");
      scanf("%d",pt1);  /// pt=&val;
      printf("la valeur = %d \n",val1);  //poiteur  = valeur de val
      
      printf("la somme: val1 + val2 = %d \n",*pt1 +*pt2);
      printf("SOUS :  val1 - val2 = %d \n",(*pt1) -(*pt2));
      printf("Mul :  val1 * val2 = %d \n",(*pt1) * (*pt2));
      printf("Div :  val1 / val2 = %d \n",(*pt1) / (*pt2));
   
  

    //////// partie 3
    int a=15;
    int b=20;

    int *ptra;
    int *ptrb;

  ptra=&a;
  ptrb=&b;

 swap(ptra,ptrb);
 printf("a=%d et b=%d \n" ,*ptra,*ptrb);  



//// partie 4  chaq tab est un pointeur 

  int tab[10]={55,85,76,74,45,75,16,67,48,89};
   
   for(int i=0; i<10 ;i++){

 printf("les valeur de tableau = %d d'idex = %d \n",tab[i],i); 
 printf("les valeur de tab par pt de tab %d d'idex = %d \n",*(tab+i),i); //tab[i]=*(tab+i)


 printf("les add de tableau %d d'idex = %d \n",&tab[i],i); 
 printf("les add de tab par pt de tab %d d'idex = %d \n",tab+i,i); //&tab[i]=tab+i
   }

return 0;
}