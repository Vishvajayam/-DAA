#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    int list[n];
    printf("Enter the elements of the list:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &list[i]);
    }
    int minSequenceStart = 0, minSequenceEnd = 0;
    int maxSequenceStart = 0, maxSequenceEnd = 0;
    int currentMin = list[0];
    int currentMax = list[0];

    for (int i = 1; i < n; i++) {
        if (list[i] < currentMin) {
            currentMin = list[i];
            minSequenceStart = i;
            minSequenceEnd = i;
        } else {
            minSequenceEnd = i;
        }
        if (list[i] > currentMax) {
            currentMax = list[i];
            maxSequenceStart = i;
            maxSequenceEnd = i;
        } else {
            maxSequenceEnd = i;
        }
    }
    printf("\nMinimum value sequence: ");
    for (int i = minSequenceStart; i <= minSequenceEnd; i++) {
        printf("%d ", list[i]);
    }
    printf("\nMaximum value sequence: ");
    for (int i = maxSequenceStart; i <= maxSequenceEnd; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}

