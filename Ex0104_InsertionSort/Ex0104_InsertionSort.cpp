#include "../DataStructures/Helper.h"

int main(int argc, char* argv[])
{
    // { // 단일 케이스에 대한 삽입 정렬
    //     int arr[] = {1, 2, 4, 5, 3, 6};
    //     int size = sizeof(arr) / sizeof(arr[0]);
    //
    //     assert(size > 0);
    //
    //     Helper::PrintArrayWithPrefix("not sorted: ", arr, size); Helper::PrintNewLine();
    //
    //     int i = 4;
    //     int key = arr[i];
    //     for (; i > 0 && arr[i-1] > key; i--)
    //     {
    //         arr[i] = arr[i-1];
    //         Helper::PrintArrayWithPrefix("shifting..: ", arr, size);
    //     }
    //
    //     arr[i] = key;
    //
    //     Helper::PrintNewLine(); Helper::PrintArrayWithPrefix("sorted    : ", arr, size);
    // }
    
    // { // insertion sort by for loop
    //     int arr[] = {6, 3, 2, 5, 4, 1};
    //     int size = sizeof(arr) / sizeof(arr[0]);
    //
    //     assert(size > 0);
    //
    //     for (int j=1; j < size; j++)
    //     {
    //         int i = j;
    //         int key = arr[i];
    //         for (; i > 0 && arr[i-1] > key; i--)
    //         {
    //             arr[i] = arr[i-1];
    //             Helper::PrintArrayWithPrefix("shifting..: ", arr, size);
    //         }
    //
    //         arr[i] = key;
    //
    //         Helper::PrintArrayWithPrefix("sorting.. : ", arr, size);            
    //     }
    // }

    { // insertion sort by while
        int arr[] = {6, 3, 2, 5, 4, 1};
        int size = sizeof(arr) / sizeof(arr[0]);

        assert(size > 0);

        for (int i=1; i < size; i++)
        {
            int insertPos = i;
            int key = arr[insertPos];
            while (insertPos > 0 && arr[insertPos-1] > key)
            {
                arr[insertPos] = arr[insertPos-1];
                --insertPos;
            }

            arr[insertPos] = key;

            Helper::PrintArray(arr, size);
        }
    }
    
    return 0;
}
