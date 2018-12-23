
#include<stdio.h>
#include<stdlib.h>
int main()
{
    
float *ptr;
int limit;
int i;
float sum=0.0;
float average=0.0;

printf("Enter limit of the array: ");
scanf("%d",&limit);

//declare memory dynamically
ptr=(float*)malloc(limit*sizeof(float));

//read array elements
for(i=0;i<limit;i++)
{
printf("Enter element %02d: ",i+1);
scanf("%f",(ptr+i));
}

for(i = 0; i < limit; i++)
{
    sum = sum + *(ptr+i);
    
}

printf("sum is:%f \n",sum);

average = sum / limit;
printf("Average = %f", average);

//free memory
free(ptr);

return 0;
}
