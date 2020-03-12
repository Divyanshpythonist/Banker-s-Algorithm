//generalised bankers algorithm


#include<stdio.h>
int main()
{ 
 int n1=0,n2=0;
 printf("enter the number of resources:\n");
 scanf("%d",&n1);
 struct resource
  {
    int r[n1];   
  };
struct process
{
 struct resource max;
 struct resource alloc;
 struct resource need;
 int flag;
};
 
  printf("enter the number of processes:\n");
  scanf("%d",&n2);
 
  struct process p[n2];
  struct resource avl,temp;

  char c;
 
  for(int i=0,c='A';i<n1;i++,c++)
  {
       printf("enter the values of available resource %c",c); 
       scanf("%d",&avl.r[i]);
       temp.r[i]=avl.r[i];
  }




 printf("enter the value for each processes:\n");
  
 for(int i=0;i<n2;i++)
 {
     printf("\nnew process\n");
    for(int j=0,c='A';j<n1;j++,c++)
    {
     printf("enter the values of max resource for p%d and resource %c:",i,c);
     scanf("%d",&p[i].max.r[j]);
      
    }
    
 }
 
 
 for(int i=0;i<n2;i++)
 {
    printf("\nnew process\n");
    for(int j=0,c='A';j<n1;j++,c++)
    {
    
     printf("enter the values of allocated resource of p%d and resource %c:",i,c);
     scanf("%d",&p[i].alloc.r[j]);
       
    }
    
 }

  

 for(int i=0;i<n2;i++)
 {
   
    for(int j=0;j<n1;j++)
    {
    
     p[i].need.r[j] = p[i].max.r[j] - p[i].alloc.r[j];    
    }
    
 }

 
 
 for(int i=0;i<n2;i++)
 {
   p[i].flag=0;
 }

 int count=0;
  printf("\nneed is:\n");
 for(int i=0;i<n2;i++)
 {
   for(int j=0;j<n1;j++)
    {
      printf("%d  ",p[i].need.r[j]);
    }
    printf("\n");
 }
 
 
 
  printf("\nthe sequence is:");
  int flag1;
 
 for(int i=0;i<n2;i++)
 {
   flag1=0;
   if(p[i].flag==0)
   {
   for(int j=0;j<n1;j++)
    {
    
      if(p[i].need.r[j]<=temp.r[j] &&  count<=n2)
        flag1=0;
      else
       { 
          flag1=1;
          break;
       }
    }
  
  if(flag1==0)
   {
    p[i].flag=1;
    printf("P%d ",i);
      count++;
    for(int k=0;k<n1;k++)
    {
        temp.r[k]+=p[i].alloc.r[k];    
        
    }
    i=-1;
  }
    
 }

}
 printf("\n");
 if(count==n2)
   printf("it is a safe sequence");
 else
   printf("not a safe sequence");
}  
   
 
 
 
