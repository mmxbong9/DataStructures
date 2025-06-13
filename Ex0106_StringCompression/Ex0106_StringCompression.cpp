
#include <cassert>
#include <iostream>
#include <ostream>

using namespace std;

void Print(char* inArray, int inCount)
{
    for (int i = 0; i < inCount; i++)
    {
        cout << inArray[i] << " ";
    }
    cout << endl;
}

int Count(char* inArray, int inCount, int x)
{
    int count = 0;
    for (int i = 0; i < inCount; i++)
    {
        if (x == inArray[i])
            count++;
    }
    return count;
}

void InsertionSort(char* inArray, int inCount)
{
    for (int j=1; j < inCount; j++)
    {
        int i = j;
        int key = inArray[i];
        for (; i < inCount && inArray[i-1] > key; i--)
        {
            inArray[i] = inArray[i-1];
        }
    
        inArray[i] = key;
    }

    cout << "InsertionSorted: "; Print(inArray, inCount); cout << endl;
}

int main(int argc, char* argv[])
{
    char array[] = "ababcdfdceeedag";
    int n = sizeof(array) - 1;

    assert(n >= 1);

    // {
    //     int table[26] = { 0 };
    //
    //     // 테이블 사용 출력.
    //     for (int i=0; i < n; i++)
    //         table[ array[i] - 'a' ]++;
    //
    //     Print(table, sizeof(table) / sizeof(table[0]));
    //
    //     // 테이블 사용하지 않고 출력.
    //     for (int i=97; i < 122; i++)
    //     {
    //         int count = Count(array, n, i);
    //         if (count > 0)
    //             cout << (char)i << " " << count << endl;
    //     }
    // }

    // {
    //     int table[26] = { 0 };
    //     
    //     for (int i=0; i < 26; i++)
    //     {
    //         // 테이블 사용 몰아서 출력.
    //         table[i] = Count(array, n, char(i + 97));
    //         
    //         // 테이블 사용하지 않고 직접 출력.
    //         int count = Count(array, n, char(i + 97));
    //         if (count > 0)
    //             cout << char(i + 97) << " " << table[i] << endl;
    //     }
    //     
    //     Print(table, n); cout << endl;
    // }

    cout << "notSorted: "; Print(array, n);
    InsertionSort(array, n);

    char ch = array[0];
    int count=1;
    for (int i=1; i<n; i++)
    {
        if (ch == array[i])
        {
            count++;
        }
        else
        {
            cout << ch << count;
            
            ch = array[i];
            count = 1;
        }
    }

    cout << ch << count << endl;
    
    return 0;
}
