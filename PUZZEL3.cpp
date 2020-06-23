#include<stdio.h>
#include<malloc.h>
#include<string.h>
int main()
{
 int x,k,y,i,j,p,n,t;
 char label[3][3];
 int r;
 int z;
 memset(label,' ',sizeof(label));
for(i=0;i<3;i++)
{
  printf("\n-----------------\n");
  for(j=0;j<3;j++)
  {
    printf("%c",label[i][j]);
    printf(" | ");
  }
}
 ///giving input to the shell
r=0;
 while(r<8)
 {
   printf("\nenter the position");
   scanf("%d",&p);
   i=(p-1)/3;
   j=(p-1)%3;
   printf("enter the number that should be stored in perticular position as mentioned above");
   scanf("%d",&n);
   label[i][j]=n;
   r++;
  }
  ///shell after input
  for(i=0;i<3;i++)
  {
  printf("\n--------------\n");
    for(j=0;j<3;j++)
     {
      if(label[i][j]==32)
      {
      label[i][j]=' ';
      printf("%c",label[i][j]);
      }
      else
      printf("%d",label[i][j]);
      printf(" | ");
     }
  }

  ///shell processing
  for(x=0;x<3;x++)
  {
   for(y=0;y<3;y++)
   {
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
      if(label[i][j]>label[x][y])
      {
       t=label[i][j];
       label[i][j]=label[x][y];
       label[x][y]=t;
      }
     }
    }
   }
  }
  
  ///final shell representation after the process
  printf("\nfinal result of your puzzle is:\n");
  for(i=0;i<3;i++)
  {
   printf("-------------\n");
   for(j=0;j<3;j++)
   {
    if(label[i][j]==32)
    {
    label[i][j]=' ';
    printf("%c",label[i][j]);
    }
    else if(label[i][j]>32)
    {
    label[2][2]=' ';
    printf("%d",label[i][j]);
    }
    else
    printf("%d",label[i][j]);
    printf(" | ");
   }
   printf("\n");
  }
return 0;
 }
