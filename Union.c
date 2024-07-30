
#include<stdio.h>

/// si on utilise Union on trouve que tout les valeur qui on utise dans fonction Union est meme par contre fonction struct on diff adress
union notes1
{
    int note_phy1;
    int note_math1;
    int note_inf1;
    /* data */
};

typedef union 
{
    int note_phy3;
    int note_math3;
    /* data */
}notes3;


struct notes
{
    int note_phy;
    int note_math;
    int note_inf;
    /* data */
};

void main(){

union notes1 n;
n.note_phy1=15;
n.note_math1=19;
n.note_inf1=12;

  ///////// resultat que note phy=note math= note inf =12 car sont dans la meme adss
printf("note phy 1 %d \n",n.note_phy1);
printf("note math 1 %d \n",n.note_math1);
printf("note inf 1 %d \n",n.note_inf1);

notes3 n3;
n3.note_phy3=11;
n3.note_math3=9;

   // Res pyh = math =9
printf("note phy 3 %d \n",n3.note_phy3);
printf("note math 3 %d \n",n3.note_math3);

  /////// resultat correct 
struct notes n2;
n2.note_phy=15;
n2.note_math=19;
n2.note_inf=12;
printf("note phy 2 %d \n",n2.note_phy);
printf("note math 2  %d \n",n2.note_math);
printf("note inf 2 %d \n",n2.note_inf);
}