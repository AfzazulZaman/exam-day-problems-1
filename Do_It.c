#include<stdio.h>
int main(){
       int count;
       int printing;
       scanf("%d",&count);
       scanf("%d",&printing);

       for (int i = 1; i <=count; i++)
       {
           
           for (int  i = 1; i <=printing; i++)
           {
              printf("%d ",i);
           }
           
         printf("\n");
       }

     
    
       
    return 0;
}