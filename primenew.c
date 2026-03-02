#include<stdio.h>
#include <stdbool.h>
bool isprime(int num) {
    if(num <= 1)
        return false;
     for(int i = 2; i*i<=num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}
int main(){
    int n;
    printf("enter number of array elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(isprime(arr[i])){
            for(int j=i; j<n-1; j++){
                arr[j]=arr[j+1];
            }
             n--;
             i--;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("n = %d \n",n);

}



