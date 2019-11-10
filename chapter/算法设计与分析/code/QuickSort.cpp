#include <cstdio>
int Partition(int A[], int left, int right)
{
    int temp = A[left]; //将最左边的值存放
    while (left < right)
    {
        while (left < right && A[right] > temp) right--;
        A[left] = A[right];
        while (left < right && A[left] < temp) left++;
        A[right] = A[left];
    }
    //把temp放到left与right相遇的地方
    A[left] = temp; 
    return left;
}
void quickSort(int A[], int left, int right)
{
    if (left < right)
    {
        int pos = Partition(A, left, right);
        quickSort(A, left, pos - 1);
        quickSort(A, pos + 1, right);
    }
}