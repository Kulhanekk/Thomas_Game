#include <note_shuffle.h>

#include <Arduino.h>

/**
 * randomly swaps entries in int array
 */
void shuffle_array(int **array, int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        int n = random(0, array_size);
        int temp = (*array)[n];
        (*array)[n] = (*array)[i];
        (*array)[i] = temp;
    }
}

void init_note_array(int array_size)
{
    for (size_t i = 0; i < array_size; i++)
    {
        note_idx_array[i] = i;
    }
    shuffle_array((int **)&note_idx_array, array_size);
}