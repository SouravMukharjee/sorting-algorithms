#include <stdio.h>
int main()
 {
    int data[100],i,n,j,temp;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
      {
       printf("%d. Enter element: ",i+1);
       scanf("%d",&data[i]);
    }
    for(j=0;j<n;++j)
    for(i=j+1;i<n;++i)
     {
         if(data[j]>data[i])  
/* To sort in descending order, change > to <. */
          {
             temp=data[j];
             data[j]=data[i]; 
             data[i]=temp;
         }
    }
    printf("In ascending order: ");
    for(i=0;i<n;++i)
        printf("%d  ",data[i]);
    return 0;
}
