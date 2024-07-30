#include<stdio.h>

/// 1 methode 
struct  etudiant   ///// structure
{  /* data */
    char nom[50];
    char prenom[50];
    int age;                        
};

/// 2 methode 
typedef struct 
{
    /* data */
    char nom[50];
    char prenom[50];
    int age;  
}etd;

void main(){
  char nom_etudiant1[50],prenom_etudiant1[50];
  int age_etudiant1=22;

  struct etudiant etudiant2,etudiant3;
  etudiant2.age=15;
  etudiant3.age=12;


  printf("etudiant1 age : %d \n",age_etudiant1);

 printf("etudiant2 age : %d \n",etudiant2.age);
 printf("etudiant3 age : %d \n",etudiant3.age);


etd etudiant4;
  etudiant4.age=17;
  printf("etudiant4 age : %d \n",etudiant4.age);
}