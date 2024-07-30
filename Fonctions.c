#include<stdio.h>

void affichage(){
    printf("HELLO");
}
int add(int a,int b);
void main(){
 int x=15;
 int y=87;
 int resultat;

affichage();
resultat=add(x,y);
printf("add de a + b =%d",resultat);

}

int add(int a,int b){
     int res =a+b;
     return res;
}