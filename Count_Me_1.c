#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }  

        int countDivisibleByTwo=0;
        int countDivisibleByThree=0;

    for(int i=0; i<N; i++){
       
    if(A[i]%2==0){
         countDivisibleByTwo++;
    }
    if(A[i]%3==0){
        countDivisibleByThree++; 
    }
     if(A[i]%6==0){
        countDivisibleByThree--;
     }
    }
   
    printf("%d %d\n", countDivisibleByTwo, countDivisibleByThree);
    return 0;
}