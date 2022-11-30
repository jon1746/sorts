#include <iostream>

int numbers[10]; /* n is an array of 10 integers */
void fillarray(int *numbers);

void printarray(int *numbers);

void selectionsort(int *numbers);

void bubblesort(int *numbers);

void swap(int *xp, int *yp);

int main() {
    fillarray(numbers);
    printarray(numbers);
    selectionsort(numbers);
    printarray(numbers);
    printf("Refilling the array.\n");
    fillarray(numbers);
    printarray(numbers);
    bubblesort(numbers);
    printarray(numbers);

    return 0;
}

void fillarray(int *numbers) {

    int i;
    for (i = 0; i < 10; i++) {
        numbers[i] = rand() % 100;
    }

    return;
}

void printarray(int *numbers) {
    printf("The array values:\n");
    int i;
    for (i = 0; i < 10; i++)
        printf("%d ", numbers[i]);

    printf("\n");
    return;
}


void selectionsort(int *numbers) {
    printf("Executing a selection sort\n");

    int i, j, min_idx;


    for (i = 0; i < 10; i++) {


        min_idx = i;
        for (j = i + 1; j < 10; j++)
            if (numbers[j] < numbers[min_idx])
                min_idx = j;


        if (min_idx != i)
            swap(&numbers[min_idx], &numbers[i]);
    }


    return;

}

void bubblesort(int *numbers) {
    printf("Executing a bubble sort\n");

    int i, j;
    for (i = 0; i < 10 - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < 10 - i - 1; j++)
            if (numbers[j] > numbers[j + 1])
                swap(&numbers[j], &numbers[j + 1]);

    return;
}

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
