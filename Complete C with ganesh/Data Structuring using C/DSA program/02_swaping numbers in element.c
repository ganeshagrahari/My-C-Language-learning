#include<stdio.h>
int main()
{
        int arr[30],num, temp,i,j;
        printf("Enter the element: ");
        scanf("%d",&num);
        for(i=0;i<num;i++){
            scanf("%d",&arr[i]); 
        }
        
        
        j=i-1;
        i=0;
        while(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        
        }
        printf("Revers the number is : \n");
        for(i=0;i<num;i++){
            printf("%d\t",arr[i]);
        }
        return 0;
}
