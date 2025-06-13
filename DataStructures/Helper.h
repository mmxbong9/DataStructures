#pragma once

#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

class Helper
{
public:
    static void SwapPtr(int* a, int* b)
    {
        int temp = *a; *a = *b; *b = temp;
    }
    
    static void SwapRef(int& a, int& b)
    {
        // do use temp variable
        // int temp = a; a = b; b = temp;

        // do not use temp variable
        a = a + b; b = a - b; a = a - b;
    }

    static bool IsAscSorted(int& a, int& b)
    {
        return a <= b;
    }

    static bool IsAscSortedArray(int* arr, int size)
    {
        for (int i=0; i+1<size; i++)
        {
            if (!IsAscSorted(arr[i], arr[i+1]))
                return false;
        }

        return true;
    }

    static void PrintArray(int* arr, int size)
    {
        for (int i=0; i < size; i++) cout << arr[i] << " "; cout << endl;
    }
    
    static void PrintArrayWithPrefix(const char* prefix, int* arr, int size)
    {
        cout << prefix; PrintArray(arr, size);
    }

    static void PrintNewLine()
    {
        cout << endl;
    }

    static int Count(int* arr, int size, int value)
    {
        int count = 0;
        for (int i=0; i < size; i++)
        {
            if (arr[i] == value)
                count++;
        }
        return count;
    }

    static int SequentialSearchIndex(int* arr, int size, int value)
    {
        for (int i=0; i < size; i++)
        {
            if (arr[i] == value)
                return i;
        }
        return -1;
    }

    static int SequentialSearchMatchingIndex(int* arr, int size, int value)
    {
        int i;
        for (i = 0; i < size && arr[i] != value; i++) { /* do nothing */ }
        
        if (i == size)
            return -1;
        else
            return i;
    }

    static int CountFromSortedIndex(int* arr, int size, int value, int start)
    {
        int count = 0;
        for (int i = start; i < size; i++)
        {
            if (arr[i] == value)
                count++;
            else
                break;
        }
        
        return count;
    }

    static int CountMatchingFromSortedIndex(int* arr, int size, int value, int start)
    {
        int count = 0;
        for (int i = start; i < size && arr[i] == value; i++) count++;
        
        return count;
    }

    static int SortedCount(int* arr, int size, int value)
    {
        int index = SequentialSearchIndex(arr, size, value);

        if (index < 0)
            return 0;

        return CountFromSortedIndex(arr, size, value, index+1) + 1;
    }

    static void InsertionSortAsc(int* arr, int size)
    {
        for (int i=1; i < size; i++)
        {
            int insertPos = i;
            int key = arr[i];
            while (size > 0 && arr[insertPos-1] > key)
            {
                arr[insertPos] = arr[insertPos-1];
                --insertPos;
            }
        
            arr[insertPos] = key;
        }

        PrintArrayWithPrefix("asc sorted: ", arr, size);
    }
};
