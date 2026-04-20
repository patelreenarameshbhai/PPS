#include<stdio.h>
#include<stdlib.h>
char filename[50];
void writefile()
{
  char text[500];
  printf("enter file name : ");
  scanf("%s",filename);
  FILE *fp=fopen(filename,"w");
  if(fp==NULL)
  {
    printf("error.unable to create file");
    return;
  }
  printf("write a file");
  getchar();
  fgets(text,sizeof(text),stdin);
  fprintf(fp,"%s",text);
  fclose(fp);
  printf("file '%s' created and written.",filename);
}
void readfile()
{
  char ch;
  printf("enter filename;");
  scanf("%s",filename);
  FILE*fp=fopen(filename,"r");
  if(fp==NULL)
  {
    printf("error file does not exist.");
    return;
  }
  printf("\ncontents of %s\n\n",filename);
  while((ch=fgetc(fp))!=EOF)
  {
    putchar(ch);
  }
  fclose(fp);
}
void appendfile()
{
  char filename[50],text[500];
  printf("enter filename");
  scanf("%s",filename);
  FILE*fp=fopen(filename,"a");
  if(fp==NULL)
  {
    printf("error unable to open file:");
    return;
  }
  printf("enter text to append:");
  getchar();
  fgets(text,sizeof(text),stdin);
  fprintf(fp,"%s",text);
  fclose(fp);
  printf("text appended,filename");
}
void deletecontents()
{
  char filename[50];
  printf("enter filename");
  scanf("%s",filename);
  FILE*fp=fopen(filename,"w");
  if(fp==NULL)
  {
    printf("error unable to open file");
    return;
  }
  fclose(fp);
  printf("contents of %s have been deleted.",filename);
}
int main()
{
  int choice;
  while(1)
  {
    printf("simple text editor:\n");
    printf("1.create and write to a file\n");
    printf("2.read and display.\n");
    printf("3.append text to a file\n");
    printf("4.delete file contents\n");
    printf("5.exit\n");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: writefile();break;
      case 2: readfile();break;
      case 3: appendfile();break;
      case 4: deletecontents();break;
      case 5: 
      printf("exiting the program.");
      return 0;
  break;
      default:
      printf("invalid choice");
    }
  
  }
  return 0;
}
