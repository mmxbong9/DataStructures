#include "../DataStructures/Helper.h"

/**
 * @brief 원소 갯수에 상관 없는 버블 정렬
 */
int main(int argc, char* argv[])
{
    // bubble sort
    {
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
