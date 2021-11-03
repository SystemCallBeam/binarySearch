#include <bits/stdc++.h>
using namespace std;

int biSearch(int data[], int left, int right, int x)
{
    int mid = (left + right) / 2;
    if (data[mid] == x)
        return mid;
    if (left > right)
        return -1;
    if (data[mid] < x)
        return biSearch(data, mid + 1, right, x);
    else
        return biSearch(data, left, mid - 1, x);
}
int main()
{
    int n[] = {5, 10, 12, 38, 44, 35, 26, 47};
    int size = sizeof(n) / sizeof(int);
    int find = 12;

    cout << "index : " << biSearch(n, 0, size-1, find) << endl;
    return 0;
}