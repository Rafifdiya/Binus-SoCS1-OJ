#include <stdio.h>

int main(){
 
 int T, N;
 scanf("%d %d", &T, &N);
 
 int X[T];
 for(int i=0; i<T; i++){
  scanf("%d", &X[i]);
 }
 
 int rem;
 for(int i=0; i<N; i++){
  scanf("%d", &rem);
  for(int j=0; j<T; j++){
  
   if(rem==X[j]){
    X[j]=-1;
   }
  }
 }
  
 int highest = -1;
 for(int i=0; i<T; i++){
  if(X[i]>highest){
   highest=X[i];
  } 
 }
 
 printf("Maximum number is %d\n", highest);
 return 0;
}

