array
#include <stdio.h>

int main() {
    int arr[100], n, choice, pos, val, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n--- Menu ---\n");
        printf("1. Update value\n");
        printf("2. Insert value\n");
        printf("3. Delete value\n");
        printf("4. Display array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Update
                printf("Enter position to update (0-%d): ", n-1);
                scanf("%d", &pos);
                if(pos >= 0 && pos < n) {
                    printf("Enter new value: ");
                    scanf("%d", &val);
                    arr[pos] = val;
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 2: // Insert
                printf("Enter position to insert (0-%d): ", n);
                scanf("%d", &pos);
                if(pos >= 0 && pos <= n) {
                    printf("Enter value to insert: ");
                    scanf("%d", &val);
                    for(i = n; i > pos; i--) {
                        arr[i] = arr[i-1];
                    }
                    arr[pos] = val;
                    n++;
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 3: // Delete
                printf("Enter position to delete (0-%d): ", n-1);
                scanf("%d", &pos);
                if(pos >= 0 && pos < n) {
                    for(i = pos; i < n-1; i++) {
                        arr[i] = arr[i+1];
                    }
                    n--;
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 4: // Display
                printf("Array elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 5);

    return 0;
}