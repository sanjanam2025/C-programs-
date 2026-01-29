#include <stdio.h>

int main() {
    int arr[50], n = 0;
    int choice, i, j, temp;
    int key, low, high, mid, found;

    while (1) {
        printf("\n----- MENU -----\n");
        printf("1. Input Array\n");
        printf("2. Bubble Sort (Small to Large)\n");
        printf("3. Bubble Sort (Large to Small)\n");
        printf("4. Binary Search\n");
        printf("5. Display Array using Pointer\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter number of elements: ");
            scanf("%d", &n);
            printf("Enter array elements:\n");
            for (i = 0; i < n; i++)
                scanf("%d", &arr[i]);
            break;

        case 2:   // Ascending order
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            printf("Array sorted in ascending order.\n");
            break;

        case 3:   // Descending order
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (arr[j] < arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            printf("Array sorted in descending order.\n");
            break;

        case 4:   // Binary Search (always ascending)
            // Force ascending sort before binary search
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }

            printf("Enter element to search: ");
            scanf("%d", &key);

            low = 0;
            high = n - 1;
            found = 0;

            while (low <= high) {
                mid = (low + high) / 2;

                if (arr[mid] == key) {
                    printf("Element found at position %d\n", mid + 1);
                    found = 1;
                    break;
                }
                else if (key < arr[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }

            if (!found)
                printf("Element not found.\n");
            break;

        case 5: {   // Pointer display
            int *p = arr;
            printf("Array elements using pointer:\n");
            for (i = 0; i < n; i++)
                printf("%d ", *(p + i));
            printf("\n");
            break;
        }

        case 6:
            printf("Program terminated.\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}
