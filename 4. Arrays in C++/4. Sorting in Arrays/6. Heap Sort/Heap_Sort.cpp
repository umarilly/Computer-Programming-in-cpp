#include <iostream>
#include <conio.h>

int left(int i) {
    return 2 * i + 1;
}

int right(int i) {
    return 2 * i + 2;
}

int parent(int i) {
    return (i - 1) / 2;
}

void max_heapify(int a[], int heap_size, int i) {
    
    int l = left(i);
    int r = right(i);

    int largest = i;

    if (l < heap_size && a[l] > a[i]) {
        largest = l;
    }

    if (r < heap_size && a[r] > a[largest]) {
        largest = r;
    }

    if (largest != i) {
        std::swap(a[i], a[largest]);
        max_heapify(a, heap_size, largest);
    }
}

void build_max_heap(int a[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        max_heapify(a, size, i);
    }
}

void heap_sort(int a[], int size) {
    build_max_heap(a, size);

    for (int i = size - 1; i >= 0; i--) {
        std::swap(a[0], a[i]);
        max_heapify(a, i, 0);
    }
}

int main() {
    int a[] = {99, 0, 5, 20, 123, 0, -1, 72, 21, 22, 13, 8, 7, 67, 29, 1, 2, 4};
    int size = sizeof(a) / sizeof(a[0]);

    heap_sort(a, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    _getch();
    return 0;
}