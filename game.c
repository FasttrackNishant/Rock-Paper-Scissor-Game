#include <stdio.h>
/*  sr  st p 
sr sr  
st  st 
p   p

                st   p  
p  p    st    */


 int logic(char you, char comp)
{

    if (you == comp)
    {
        return 0;
    }


   if (you=='sr' &&  comp =='st')
   {
       return -1;
   }
   else if (you=='st' &&  comp =='sr')
   {
      return 1;
   }


   if (you=='sr' &&  comp =='p')
   {
       return 1;
   }
   else if (you=='p' &&  comp =='sr')
   {
      return -1;
   }


   if (you=='st' &&  comp =='p')
   {
       return 1;
   }
   else if (you=='p' &&  comp =='st')
   {
      return -1;
   }
   
}

int main()
{
    char you, comp;
    printf("Hey! Hello! Welcome to my GAMING World !\n");
    printf("Enter 'st' for 'Stone' , 'p' for 'Paper' , 'sr' for 'Seasor' \n");
    scanf("%c", &you);

    int logic(you, comp);

    return 0;
}