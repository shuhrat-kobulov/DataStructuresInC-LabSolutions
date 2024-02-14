#include <stdio.h>

int main() {
    int arr[100], size, position, i;
    
    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    // Input the elements of the array
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the position of the element to be deleted
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &position);
    
    // Check if position is valid
    if(position < 1 || position > size) {
        printf("Invalid position! Please enter position between 1 to %d\n", size);
    } else {
        // Deleting the element by shifting elements to the left
        for(i = position - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        
        // Decrementing the size of the array
        size--;
        
        // Printing the updated array
        printf("Array after deletion:\n");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}
