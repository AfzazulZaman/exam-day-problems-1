#include<stdio.h>
int main(){
       int n;
        scanf("%d",&n);

        while (n--)
        {
           int M1,M2,D;
           scanf("%d %d %d",&M1,&M2,&D);

           int newDays = (M1 * D)/(M1+M2);

           int days=D-newDays;

           printf("%d\n",days);
        }
        
    return 0;
}