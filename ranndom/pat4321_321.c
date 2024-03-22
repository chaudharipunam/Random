/*

enter the num: 5
5 4 3 2 1 
  5 4 3 2 
    5 4 3 
      5 4 
        5 

*/

#include<stdio.h>
int main()
{
  int i,n;
  printf("enter the num: ");
  scanf(%d",&n);
  int p=n;
  for(i=n; i>0; i--){
    for(int j=1;  j<=n; j++){
      if(i+j<=n){
        printf("  ");
      }
      else("%d ",p);
      p--;
    }
    printf("  ");
    p=p+i;
  }
  return 0;
}
