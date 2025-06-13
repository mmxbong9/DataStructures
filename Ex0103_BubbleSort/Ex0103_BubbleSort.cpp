#include "../DataStructures/Helper.h"

/**
 * @brief 원소 갯수에 상관 없는 버블 정렬
 */
int main(int argc, char* argv[])
{
    // { // 선택 정렬은 최솟값을 앞에서 부터 채워 넣는다면 버블 정렬은 최대값을 뒤에서부터 채워 넣는다. 시간 복잡도는 O(n²) 으로 동일 하다. 
    //     int arr[] = {5, 1, 4, 2, 8};
    //     int size = sizeof(arr) / sizeof(arr[0]);
    //
    //     Helper::PrintArray(arr, size);
    //     for (int i=0; i<size; i++) for (int j=0; j+1<size-i; j++)
    //     {
    //         if (arr[j] > arr[j+1])
    //             swap(arr[j], arr[j+1]);
    //     }
    //     Helper::PrintArray(arr, size);
    // }
    
    { // bubble sort + 최적화( 불필요한 swap 및 정렬 완료시 loop 탈출 )
        int arr[] = {5, 1, 4, 2, 8};
        int size = sizeof(arr) / sizeof(arr[0]);
    
        Helper::PrintArrayWithPrefix("not sorted: ", arr, size); Helper::PrintNewLine();
        
        for (int i=0; i+1 < size; i++)
        {
            bool swapped = false;
            for (int j=0; j+1 < size-i; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    swapped = true;
                    swap(arr[j], arr[j+1]);
                }
                
                Helper::PrintArrayWithPrefix("sorting...: ", arr, size);
            }
    
            Helper::PrintNewLine();
            
            if (!swapped) break;
        }
        
        Helper::PrintArrayWithPrefix("sorted    : ", arr, size); 
    }
    
    return 0;
}
