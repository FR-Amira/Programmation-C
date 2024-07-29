#include<stdio.h>
 #include<string.h>

void main()
{
    char ch[10];

/*

    scanf("%s",ch);   // dans chaine on ne utilsé pas &
    printf("%s",ch);

  //2 methode , on peut affiche espace
  gets(ch);
  printf("%s",ch);


 // 3 methode on ajoute taille de chaine  taille N-1
   fgets(ch,5,stdin);
   printf("%s",ch);
   

  // 4 methode on utilise puts pour afficharge
      gets(ch);
      puts("hello");
      puts(ch);

      // 5 methode les affichage on meme ligne
           gets(ch);
      fputs("hello",stdout);
      fputs(ch,stdout);

       */


      /////////////// bibliotheque chaine
    
    char s[10]="HELLO";
    int longeur;

    char s2[20]=" welcome to C";
    int x;

    longeur=strlen(s);
    // printf("longeur de chaine %s est egale %d",s,longeur);
 
    strcat(s,s2);
    // printf("%s",s);
  
   x=strcmp(s,s2);
   printf("comparaison entre 2 chaine est %d",x);  // diff =1 et eg = 0
  
   strlwr(s);  //  chaine minscule
   printf("%s",s);
 
  }