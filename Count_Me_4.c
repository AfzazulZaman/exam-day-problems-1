#include<stdio.h>
int main(){
       char S[10001];
        scanf("%s",S);
         int freq[26]={0};
 
         for (int i = 0; S[i]!='\0'; i++)
         {
             freq[S[i]-'a']++;
         }
         
         for (int i = 0; i < 26; i++)
         {
            if (freq[i]>0)
            {
                printf("%c - %d\n",i+'a',freq[i]);
            }
            
         }
         
    return 0;
}
