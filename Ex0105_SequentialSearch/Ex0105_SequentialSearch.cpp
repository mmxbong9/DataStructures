#include "../DataStructures/Helper.h"

int main(int argc, char* argv[])
{
    int arr[] = { 8, 1, 1, 3, 2, 5, 1, 2, 1, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Count 9 = " << Helper::Count(arr, size, 9) << endl;
    cout << "Count 1 = " << Helper::Count(arr, size, 1) << endl;
    cout << "SearchIndex 9 = " << Helper::SequentialSearchIndex(arr, size, 9) << endl;
    cout << "SearchIndex 1 = " << Helper::SequentialSearchIndex(arr, size, 1) << endl;
    cout << endl;

    Helper::InsertionSortAsc(arr, size);

    cout << "Sorted Count 9 = " << Helper::SortedCount(arr, size, 9) << endl;
    cout << "Sorted Count 1 = " << Helper::SortedCount(arr, size, 1) << endl;
    cout << endl;

    return 0;
}
