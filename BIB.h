
typedef struct 
{
    int note_phy;
    int note_math;
    int note_inf; 
}notes;



void affiche(notes n){

printf("note phy  %d \n",n.note_phy);
printf("note math   %d \n",n.note_math);
printf("note inf  %d \n",n.note_inf);

}