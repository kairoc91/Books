#include <stdio.h>

[[nodiscard]] int search_binary(const int list[], int size, int target){
    int left = 0;
    int right = size - 1;
    int steps = 0;

    while (left <= right) {
        steps++;

        int middle = left + (right - left) / 2;

        if (list[middle] == target) {
            printf("Finded number! ");
            return steps;
        }

        if (list[middle] < target){
            left = middle + 1;
        } else {
            right = middle - 1;
        }
printf("Not finded number. ");
return steps;
    }

    int main(void) {
constexpr int LIST_SIZE = 128;
int list[LIST_SIZE];

for (int i = 0; i < LIST_SIZE; ++i) {
list[i] = i + 1;
}

int target = 128;

printf("Searching number %d in a list of %d numbers.\n", target, LIST_SIZE);
int total_steps = search_binary(list, LIST_SIZE, target);

printf("Total steps executed: %d\n", total_steps);
    return 0;
};
