#include "../DataStructures/Helper.h"

/**
 * @brief 2원소에 대한 swap 및 간단한 오름차순 정렬
 */
int main()
{
	// { // swap
	// 	int a = 3;
	// 	int b = 2;
	//
	// 	cout << a << " " << b << endl;
	//
	// 	Helper::SwapPtr(&a, &b);
	// 	Helper::SwapRef(a, b);
	// 	
	// 	cout << a << " " << b << endl;
	// }

	// { // array swap
	// 	int arr[] = {3, 2};
	// 	cout << arr[0] << " " << arr[1] << endl;
	//
	// 	int size = sizeof(arr) / sizeof(arr[0]);
	// 	
	// 	for(int i=0; i+1 < size ; i++)
	// 	{
	// 		if (arr[i] > arr[i+1])
	// 		{
	// 			Helper::SwapRef(arr[i], arr[i+1]);
	// 		}
	// 	}
	//
	// 	cout << arr[0] << " " << arr[1] << endl;
	// }

	// { // ascending sort by int variables
	// 	for (int i=0; i < 5; i++)
	// 	{
	// 		for (int j=0; j < 5; j++)
	// 		{
	// 			int a = j; int b = i;
	//
	// 			if (a > b)
	// 				swap(a, b);
	// 		
	// 			cout << boolalpha;
	// 			cout << a << " " << b << " " << Helper::IsAscSorted(a, b) << endl;
	// 		}
	// 	}
	// }

	{ // ascending sort by int array variable
		int arr[2];
		for (int i=0; i < 5; i++)
		{
			for (int j=0; j < 5; j++)
			{
				arr[0] = j; arr[1] = i;
				if (!Helper::IsAscSorted(arr[0], arr[1]))
					swap(arr[0], arr[1]);

				cout << boolalpha;
				cout << arr[0] << " " << arr[1] << " " << Helper::IsAscSorted(arr[0], arr[1]) << endl;
			}
		}
	}

	return 0;
}
