#include <stdio.h>

int main() {
    // Declare an array of size 50 and variables for size, loop iteration, position, and element to be inserted
    int arr[50], size, i, position, element;

    // Prompt user to enter the number of elements in the array and read the input
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Prompt user to enter the elements of the array
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask the user for the position where the new element should be inserted
    printf("Enter the position where you wish to insert an element: ");
    scanf("%d", &position);
    // Ask the user for the value of the element to be inserted
    printf("Enter the value to insert: ");
    scanf("%d", &element);

    // Check if the entered position is valid (within the array bounds)
    if(position < 0 || position > size) {
        printf("Invalid position! Please enter position between 1 to %d", size);
    } else {
        // Shift elements to the right to make space for the new element
        for(i = size; i >= position; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the new element at the specified position
        arr[position - 1] = element;
        
        // Increment the size of the array to account for the added element
        size++;

        // Print the array after insertion
        printf("Array after insertion: \n");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}
