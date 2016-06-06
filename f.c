#include<stdio.h>
int main(){
  int i=1,f=1,num;
  scanf("%d",&num);
 
  while(i<=num){
      f=f*i;
      i++;
  }
 
  printf("%d",f);
  return 0;
}
