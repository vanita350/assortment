#include <stdio.h>

int main() {
    int n,i;
    
    printf("Enter the array's size: ");
    scanf("%d", &n);
    
    int arr[n];
    

    printf("Enter array's elements:\n");
    for (i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Negative elements from an Array: ");
    int found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (found) {
                printf(", "); 
            }
            printf("%d", arr[i]);
            found = 1;
        }
    }
    
    if (!found) {
        printf("None");
    }

    printf("\n");
    
    return 0;
}
