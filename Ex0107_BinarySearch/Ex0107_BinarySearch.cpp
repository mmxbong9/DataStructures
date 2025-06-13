
#include <iomanip>
#include <iostream>

using namespace std;

void PrintHelper(int* inArray, int inN, int inLeft, int inRight)
{
    cout << "[" << inLeft << ", " << inRight << "]" << endl;
    
    cout << "Indices: ";
    for (int i=inLeft; i<=inN && i<=inRight; i++)
        cout << setw(3) << i;
    cout << endl;
    
    cout << "Values : ";
    for (int i=inLeft; i<=inN && i<=inRight; i++)
        cout << setw(3) << inArray[i];
    cout << endl;
}

void BinarySearchWithFor(int* inArray, int inN, int inX)
{
    int left = 0;
    int right = inN-1;
    for (int i=0; i<inN; i++)
    {
        if (left > right) // 값을 몾찾음.
        {
            cout << "not found: left[ " << left << " ]" << " right[ " << right << " ]" << endl;
            break;
        }
        
        PrintHelper(inArray, inN, left, right);

        int middle = left+(right-left)/2;
        cout << "middle " << middle << endl;

        if (inX == inArray[middle]) // 찾는 값을 가지고 있는 index 를 찾았다.
        {
            cout << "Found " << middle << endl;
            break;
        }

        if (inX < inArray[middle]) // 찾을 값보다 middle 값이 크다. middle 이후 값은 찾지 않아도 된다. right 값을 middle-1 설정
        {
            right = middle-1;
            cout << "right " << right << endl;
        }
        else if (inX > inArray[middle]) // 찾을 값보다 middle 값이 작다. middle 이전 값은 찾지 않아도 된다. left 값을 middle+1 설정
        {
            left = middle+1;
            cout << "left " << left << endl;
        }
    }
}

int BinarySearchWithWhile(int* inArray, int inN, int inX)
{
    int left = 0;
    int right = inN-1;
    
    while (left <= right)
    {
        PrintHelper(inArray, inN, left, right);

        int middle = left+(right-left)/2;
        cout << "middle " << middle << endl;

        if (inArray[middle] > inX)
        {
            right = middle-1;
            cout << "right " << right << endl;
        }
        else if (inArray[middle] < inX)
        {
            left = middle+1;
            cout << "left " << left << endl;
        }
        else if (inArray[middle] == inX)
        {
            cout << "Found index: " << middle << endl;
            return middle;
        }
    }
    
    cout << "not Found value[ " << inX <<  " ] for index: " << endl;
    return -1;
}

int main(int argc, char* argv[])
{
    // int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int array[] = { 2, 4, 5, 5, 6, 8, 9, 10, 12, 13 };
    int n = sizeof(array) / sizeof(array[0]);

    // BinarySearchWithFor(array, n, 5);
    BinarySearchWithWhile(array, n, 6);
    
    return 0;
}
