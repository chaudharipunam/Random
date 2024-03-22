#include <stdio.h>
int main()
{
   i,n;
   printf("enter the num: ");
   scanf("%d",&n);
   for(i=1; i<=n;  i++){
     for(int j=1; j<=n; j++){
       if(j<=n-i){
         printf("  ");
       }
       else{
         printf("* ");
       }
     }
     pritnf("\n");
   }
   int s=1,t=0;
   for(int s=1; s<=n; s++){
     for(int q=1; q<=n; q++){
       if(q<=n-t){
          printf("  ");
       }
       else{
          printf("* ");
       }
     }
      printf("\n");
      t++;
   }
   return 0;
}
