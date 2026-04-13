#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *arr = NULL;
  int size = 0, newsize,choice,i,*temp;
  
  while(1)
  {
    printf("Dynamic Array operation\n");
    printf("create new dynamic array\n");
    printf("add element to the array\n");
    printf("resize of array\n");
    printf("display the array\n");
    printf("free memory and exit\n");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      if(arr!=NULL)
      {
        printf("array already exists.free it before creating new one\n");
        break;
      }
      printf("size of element");
      scanf("%d",&size);
      arr=(int*)malloc(size*sizeof(int));
      if(arr==NULL)
      {
        printf("Memory allocated failed.\n");
      }
      else{
        printf("Memory allocation successfully.\n");
      }
      break;
      case 2:
      if(arr==NULL)
      {
        printf("array is not created.\n");
        break;
      }
      printf("enter elements of array \n");
      for(i=0;i<size;i++)
      {
           scanf("%d",&arr[i]);
      }
      printf("element added successfully");
      break;
      case 3:
      if(arr==NULL)
      {
        printf("array is not created\n.");
        break;
      }
        printf("enter size");
        scanf("%d",&newsize);
        
        temp =(int*)realloc(arr, newsize*sizeof(int));
        if(temp == NULL)
        {
         printf("memory allocation is failed");
          break;
        }
         arr = temp;
         if(newsize>size)
         {
          printf("enter new element %d",newsize-size);
          for(i=size;i<newsize;i++)
          {
            scanf("%d ",&arr[i]);
          }
         }
         size=newsize;
         printf("array resize successfully");
      
      break;
      case 4:
      if(arr==NULL)
      {
        printf("Array is undefined\n");
        break;
      }
      
        printf("array element are \n");
        for(i=0;i<size;i++)
        {
          printf("%d",arr[i]);
        }
        printf("\n");
        break;
        case 5:
        if(arr!=NULL)
        {
           free(arr);
           arr=NULL;
           printf("memory freed sucessfully\n");
           
        }
        printf("exiting program");
        return 0;
      default:
      printf("invalid choice");
      
    }
  }
  return 0;
}
