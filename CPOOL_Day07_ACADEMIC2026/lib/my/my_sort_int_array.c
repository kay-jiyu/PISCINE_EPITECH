

void my_sort_int_array(int *array, int size)
{
    int i = 1;
    int key;
    int j;

    while (i < size)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
        i++;
    }
}
