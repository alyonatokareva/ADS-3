// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
// поместить сюда реализацию алгоритма
return 0; // если ничего не найдено
int left = 0, right = size - 1, a = 0;
while (left < right) {
int center = left + (right - left) / 2;
if (arr[center] == value) {
left = center;
while (arr[left] == value) {
left--;
}
while (arr[right] != value) {
right--;
}
while (left < right) {
a++;
left++;
}
} else if (arr[center] > value) {
right = center;
} else {
left = center + 1;
}
}
return a;
}
