#include<stdio.h>
#include<string.h>
int main(){
      int T;
      scanf("%d",&T);
       
       while (T--)
       {
         int lower=0,upper=0,digits=0;
          char S[10001];
          scanf("%s",S);

          for (int i = 0; S[i]!='\0'; i++)
          {
              if (islower(S[i]))
              {
                lower++;
              }
              if (isupper(S[i]))
              {
                upper++;
              }
              if (isdigit(S[i]))
              {
                digits++;
              }
              
             
              
          }
           printf("%d %d %d\n",upper,lower,digits);
          
       }
       
    return 0;
}