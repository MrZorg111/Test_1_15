#include <iostream>

int main() {
    int first, end, sum = 0, total_sum = 0;
    int arr[]{-2,1,-3,4,-1,2,1,-5,4};
    for (int u = 0, y = 1; y < 9; y++) {
        for (int i = u, j = y; j < 9;) {
            for (int t = i; t <= j; t++) {
                sum += arr[t];
             }
            if (sum > total_sum) {
                first = i;
                end = j;
                total_sum = sum;
            }
            i++, j++, sum = 0;
        }
    }
    std::cout << first << "\t" << end;
}