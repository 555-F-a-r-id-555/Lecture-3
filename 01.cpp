#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // формирование и заполнение массива;
    int size, i;
    cin >> size;
    i = 0;
    int x[size];
    while (i < size)
    {
        cin >> x[i];
        i++;
    }
    for (i = 0; i < size; i++)
    {
        printf("x[%d]= %d\n", i, x[i]);
    }
    // Поиск max_1 элемента и его индекса i_max_1;
    int max_1 = x[0];
    int i_max_1 = 0;

    for (int i = 0; i < size; i++)
    {
        if (x[i] > max_1)
        {
            max_1 = x[i];
            i_max_1 = i;
        }
    }
    printf("max_1 = %d i_max_1 = %d\n", max_1, i_max_1);

    // Поиск вотого max_2 элемента и его индекса i_max_2;
    int max_2;
    int i_max_2;
    for (int i = 0; i < size; i++)
    {
        max_2 = x[i];
        i_max_2 = i;
        if (max_2 != max_1)
        {
            max_2 = x[i];
            i_max_2 = i;
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (x[i] != max_1)
        {
            if (x[i] > max_2)
            {
                max_2 = x[i];
                i_max_2 = i;
            }
        }
    }
    if (max_2 != max_1)
    {
        printf("max_2 = %d i_max_2 = %d", max_2, i_max_2);
    }
    else
    {
        printf("max_2 = max_1= %d", max_2);
    }
}