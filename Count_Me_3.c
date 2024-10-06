#include<stdio.h>
int main(){
      int T;
      scanf("%d",&T);

     while (T--)
     {
   
       char S[10001];
       scanf("%s",S);
           int digit=0,small=0,upper=0;
       for (int i = 0; S[i]!='\0'; i++)
       {
           if (S[i]>='a' && S[i]<='z')
           {
              small++;
           }
           if (S[i]>='A' && S[i]<='Z')
           {
              upper++;
           }
           if (S[i]>='0' && S[i]<='9')
           {
             digit++;
           }
               
           
          }
  
         printf("%d %d %d\n",upper,small,digit);
            }
    
      
    return 0;
}