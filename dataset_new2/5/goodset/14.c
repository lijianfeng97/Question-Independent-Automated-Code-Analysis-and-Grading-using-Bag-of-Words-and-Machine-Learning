#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char a[1000002];
   int i,test,len,flag,mid,flagp;
   scanf("%d\n",&test);
    while(test-->0)
  {
    flag=1;
    gets(a);
     len=strlen(a);
   flagp=0;
     //for 999999......
     for(i=0;i<len;i++)
     {
     if(a[i]!='9')
                  {
                  flag=0;
                  break;
                  }
     }
     if(flag==1)
     {
      a[0]='1';
      for(i=1;i<len;i++)
      a[i]='0';
      a[len]='1';
      a[len+1]='\0';
      flagp=1;
     }
     //end of check of 99999....
     flag=0;
     if(flagp!=1)
                {
 for(i=0;i<len/2;i++)
  {
    if(a[i]<a[len-i-1])
    flag=-1;
    else if(a[i]>a[len-i-1])
    flag=1;
    a[len-i-1]=a[i];
  }
 if(len%2==0)
 mid=len/2-1;
 else
 mid=len/2;
             if(flag==-1 || flag==0)
             {
              i=0;
             while(a[mid-i]=='9')
                             {
                             a[mid-i] = '0';
                             a[len-1-mid+i] = '0';
                             i++;
                             }
             a[mid-i]++;
             a[len-1-mid+i] = a[mid-i];
             }

              }
             printf("%s\n",a);

 }
return 0;
}  
