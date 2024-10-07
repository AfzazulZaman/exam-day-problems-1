// #include <stdio.h>
// int main(){
//       char S[100001];
//         scanf("%s",S);


//     int count=0;
//     for(int i=0; S[i]!='\0'; i++){
//          if(S[i]>='a' && S[i]<='z'){
//              if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o'){
//                 count++;
//              }
//          }
      
//      }
//   printf("%d\n",count);
          
//     return 0;
// }


#include <stdio.h>

int main() {
    char S[100001];
    scanf("%s", S);

    int count = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u') {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}