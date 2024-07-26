  #include<stdio.h>

void main(){

int x=5;
////////// while 
/// si condition faux n'est excute pas 0 fois
while (x<5)
{
    printf("%d\n",x);
    x++;
}



///// do         while
// il execute au moins  fois  c a d il excute experstion dand do puis test condition 

do
{
     printf("la valeur de x= %d\n",x);
    x++;
}
    
while (x<5);

///          FOR   
//  si condition faux n'est excute pas 0 fois

for (int y = 5; y < 5; y++)
{
    printf("la valeur de y= %d\n",y);
 
}

}
  

