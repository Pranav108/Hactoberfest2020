#include<stdio.h>
int main(){
int i,j,k,temp,n;
int arr[10];
printf("Enter the number of elements in array :");
    scanf("%d",&n);
    printf("%d\n\nInitial array : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
printf("\n\nSteps for Sorting are : \n");
for(i=1;i<n;i++){
    temp=arr[i];
    for(j=i-1;j>=0&&temp<arr[j];j--)
        arr[j+1]=arr[j];
        arr[j+1]=temp;
        printf("\n\nStep %d : ",i);
        for(k=0;k<n;k++)
        printf("%d, ",arr[k]);

}
 printf("\n\nFinal Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d, ",arr[i]);
return 0;
}
