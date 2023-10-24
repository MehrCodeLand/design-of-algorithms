#include <iostream>
using namespace std;


void insertionSort(int nums[], int length);
void printData(int nums[], int length);

int main()
{
	int nums[] = { -2,3,0 ,12 ,-100 , 100 };
	int length = sizeof(nums) / sizeof(nums[0]);

	insertionSort(nums, length);
	printData(nums, length);
}

void insertionSort(int nums[], int length)
{
	int i, key, j;

	for (i = 1; i < length; ++i) {

		key = nums[i];
		j = i - 1;

		while (j >= 0 && nums[j] > key) {
			nums[j + 1] = nums[j];
			j = j - 1;
		}
		nums[j + 1] = key;
	}
}

void printData(int nums[], int length) {

	for (int i = 0; i < length; ++i) {
		cout << nums[i] << endl;
	}
}
