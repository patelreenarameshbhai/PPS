#include<stdio.h>
int main ()
{
    int maths;
    int pps;
    int bee;
    int egd;
    int etc;
    
    printf("\n enter the marks of maths ");
    scanf("%d",&maths);
    
    printf("\n enter the marks of pps ");
    scanf("%d",&pps);
    
    printf("\n enter the marks of bee ");
    scanf("%d",&bee);
    
    printf("\n enter the marks of egd ");
    scanf("%d",&egd);
    
    printf("\n enter the marks of etc ");
    scanf("%d",&etc);
    
    int total;
    total= maths+pps+bee+egd+etc;
      printf("total marks =%d",total);
     
      
      float per;
      per= total/5;
      printf("per =%f",per);
      if(per>=90)
      {
      printf("grade A");
      }
      else if(per>=75)
      {
        printf("grade B");
      }
        else if(per>=60)
      {
      printf("grade C");
      }
         else if(per>=40)
      {
        printf("grade D"); 
      }
        else if(per<40)
      {
        printf("Fail");
      }
      return 0;
      
    
}
