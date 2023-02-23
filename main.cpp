#include<iostream>
using namespace std;
int main()
{
    int sizeA, sizeB;
    cout << "������� ������ ������� �������: ";
    cin >> sizeA;
    cout << "������� ������ ������� �������: ";
    cin >> sizeB;
    int* arrA = new int[sizeA];
    int* arrB = new int[sizeB];
    cout << "\n\n������ ������: ";
    for (int x = 0; x < sizeA; x++)
    {
        arrA[x] = rand() % 9 + 1;
        cout << arrA[x] << " ";
    }
    cout << "\n\n������ ������: ";
    for (int x = 0; x < sizeB; x++)
    {
        arrB[x] = rand() % 9 + 1;
        cout << arrB[x] << " ";
    }
    
    sort(arrA, sizeA);
    sort(arrB, sizeB);

    int* arrC = new int[sizeA < sizeB ? sizeA : sizeB];
    int sizeC = 0;

    for (int x = 0, y = 0; x < sizeA && y < sizeB; )
    {
        if (arrA[x] < arrB[y]) ++x;
        else if (arrA[x] > arrB[y]) ++y;
        else
        {
            arrC[sizeC++] = arrA[x];
            x++; y++;
        }
    }

    cout << "\n\n������ ������ (���������������): ";
    for (int x = 0; x < sizeA; x++)
    {
        cout << arrA[x] << " ";
    }
    cout << "\n\n������ ������ (���������������): ";
    for (int x = 0; x < sizeB; x++)
    {
        cout << arrB[x] << " ";
    }

    cout << "\n\n������ ������: ";
    for (int x = 0; x < sizeC; x++)
    {
        cout << arrC[x] << " ";
    }

    delete arrA;
    delete arrB;
    delete arrC;
}
