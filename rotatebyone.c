#include <stdio.h>
void rotateLeftByOne(int *arr,int n){
    int lastEle=arr[0];
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=lastEle;
    printf("After rotating left by one:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void rotateRightByOne(int *arr,int n){
    int firstEle=arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=firstEle;
    printf("after rotating right by one:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n,ch;
    printf("Enter number of array elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("enter your choice: 1 for rotateLeft, 2 for rotateRight ");
    scanf("%d", &ch);
    if(ch==1){
        rotateLeftByOne(arr,n);
    }
    else if(ch==2){
        rotateRightByOne(arr,n);
    }
      
    return 0;
}

