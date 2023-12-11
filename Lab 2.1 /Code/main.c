#include <stdio.h>

int BinarySearch(double arr[8]) {
    int mid = 3, high = 0, low = 7;

    while (high < low) {
        if (arr[mid] <= 5 && arr[mid] >= 0) {
            return mid;
        }

        if (arr[mid] <= 0) {
            low = mid;
        } else {
            high = mid + 1;
        }
        mid = (low + high) / 2;

        if (high >= low) {
            printf("Item Missing!\n");
            return -1;
        }
    }
    return 0;
}

int main(void) {
    double arr[8][8] ={{43, 12, 93, 28, 8, 4, 1, 13},
                        {34, 28, 19, 17, 12, 7, 5, 2},
                        {32, 24, 3, 0, 2, 7, 8, 12},
                        {63, 19, 14, 3, 11, 89, 100, 12},
                        {49, 9, 4, 4, 24, 38, 46, 52},
                        {17, 1, 10, 48, 62, 84, 98, 12},
                        {4, 3, 17, 42, 68, 73, 90, 73},
                        {1, 0, 6, 10, 25, 39, 45, 10}
    };

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            printf("%.2f     ", arr[i][j]);
        }
        printf("\n\n");
    }

    printf("Index in the last row: %d\n", BinarySearch(arr[7]));

    double fc[8];
    for (int i = 0; i < 8; i++){
        fc[i] = arr[i][0];
    }
    printf("Index in first column: %d", BinarySearch(fc));

    return 0;
}

