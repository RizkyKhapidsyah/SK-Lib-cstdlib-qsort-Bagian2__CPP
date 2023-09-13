#include <iostream>
#include <algorithm>
#include <conio.h>
#include <cstdlib>

using namespace std;

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

#define N 1000000

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[N], dupArr[N];

    srand(time(NULL));

    clock_t begin, end;
    double time_spent;

    for (int i = 0; i < N; i++) {
        dupArr[i] = arr[i] = rand() % 100000;
    }
        
    begin = clock();
    qsort(arr, N, sizeof(int), compare);
    end = clock();

    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    cout << "Time taken by C qsort() - " << time_spent << endl;

    time_spent = 0.0;

    begin = clock();
    sort(dupArr, dupArr + N);
    end = clock();

    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    cout << "Time taken by C++ sort() - " << time_spent << endl;

    _getch();
    return 0;
}