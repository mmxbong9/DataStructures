#include "../DataStructures/Helper.h"

/**
 * @brief 3원소 이상에 대한 소팅 및 셀렉션 소팅 기능
 */
int main(int argc, char* argv[])
{
    // {
    //     cout << boolalpha;
    //     for (int i=0; i < 3; i++) for (int j=0; j < 3; j++) for (int k=0; k < 3; k++)
    //     {
    //         int arr[3] = {k, j, i};
    //         int size = sizeof(arr) / sizeof(arr[0]);
    //
    //         // 3원소용 수동 정렬
    //         if (arr[0] > arr[1]) swap(arr[0], arr[1]);
    //         if (arr[1] > arr[2]) swap(arr[1], arr[2]);
    //         if (arr[0] > arr[1]) swap(arr[0], arr[1]);
    //
    //         // 표준 라이브러리 정렬. 3원소 이상의 동적 크기 사용 가능
    //         // sort(begin(arr), end(arr));
    //     
    //         cout << k << " " << j << " " << i << " → " << arr[0] << " " << arr[1] << " " << arr[2] << " " << Helper::IsAscSortedArray(arr, size) << endl;
    //     }
    // }
    
    { // unstable selection sort
        int arr[] = {8, 3, 2, 5, 1, 1, 2, 5, 8, 9};
        int size = sizeof(arr) / sizeof(arr[0]);

        assert(size > 0);

        Helper::PrintArrayWithPrefix("not sorted: ", arr, size);
        
        for (int i=0; i+1 < size; i++)
        {
            int min_index = i;
            for (int j=i+1; j < size; j++)
            {
                if (arr[j] < arr[min_index])
                    min_index = j;
            }

            if (i != min_index)
                swap(arr[i], arr[min_index]);
        }
        
        Helper::PrintArrayWithPrefix("sorted    : ", arr, size);
    }
    
    return 0;
}
