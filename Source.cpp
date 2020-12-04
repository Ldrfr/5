#include<stdio.h>

int bin_search(int *a, int n, int left, int right, int need) {
	int x;
	if (left <= right) {
		int mid = (left + right) / 2;
		if (need == a[mid])
			return mid;
		if (need < a[mid]) {
			x = bin_search(a, n, left, mid - 1, need);
		}
		else {
			x = bin_search(a, n, mid + 1, right, need);
		}
		if (need == a[x]) return x;
		else return -1;
	}
}


int main() {
	int n, left = -1, mid, need;
	scanf_s("%d%d", &n, &need);
	int right = n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) scanf_s("%d", &a[i]);
	int res = bin_search(a, n, left, right, need);
	printf("%d", res);
}