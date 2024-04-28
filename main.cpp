/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
int main()
{
  int crc[10],i,j;
  int s=0;
  int data[20],divisor[20],data_size,div_size;
  printf("\t\t....CRC....\n");
  printf("data size\n");
  scanf("%d",&data_size);
  printf("data\n");
  for(i=0;i<data_size;i++)
  scanf("%d",&data);
  printf("divisorsize:\n");
  scanf("%d",& div_size);
  printf("divisor\n");
  for(i=0;i<div_size;i++)
  scanf("%d",divisor);
  for(i=0;i<div_size-1;i++)
  data[data_size+i]=0;
  for(i=0;i<div_size;i++);
  crc[i]=data[i];
  for(i=0;i<data_size;i++)
  {
      if(crc[0]==1)
      {
          for(j=0;j<div_size;j++)
          {
              if(crc[j]==divisor[j])
              crc[j]=0;
              else
              crc[j]=1;
          }
      }
       for(j=0;j<div_size;j++)
       crc[j]=crc[j+1];
       crc[div_size-1]=data[div_size+i];
  }
  printf("\n crc codes:");
  for(i=0;i<div_size-1;i++)
  printf("%d",crc[i]);
  for(i=0;i<div_size-1;i++)
  data[data_size+i]=crc[i];
  printf("datasize\n");
  scanf("%d",&data_size);
  printf("data\n");
  for(i=0;i<data_size;i++)
  scanf("%d",&data);
  printf("divisorsize:\n");
  scanf("%d",&div_size);
  printf("divisor\n");
  for(i=0;i<div_size;i++)
  scanf("%d",divisor);
  for(i=0;i<div_size-1;i++)
  data[data_size+i]=0;
  for(i=0;i<div_size;i++);
  crc[i]=data[i];
  for(i=0;i<data_size;i++)
  {
      if(crc[0]==1)
      {
          for(j=0;j<div_size;j++)
          {
              if(crc[j]==divisor[j])
              crc[j]=0;
              else
              crc[j]=1;
          }
      }
       for(j=0;j<div_size;j++)
       crc[j]=crc[j+1];
       crc[div_size-1]=data[div_size+i];
  }
  printf("\n remainder");
  for(i=0;i<div_size-1;i++)
  {
      printf("%d",crc[i]);
      s=s+crc[i];
  }
  if(s==0)
  printf("\n no error");
  else
  printf("error\n");
  getch();
  return 0;
}