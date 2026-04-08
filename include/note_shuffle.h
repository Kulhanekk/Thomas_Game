#ifndef _NOTE_SHUFFLE_H_
#define _NOTE_SHUFFLE_H_

#include <notes.h>

int note_idx_array[N_OF_NOTES];

void shuffle_array(int **array, int array_size);
void init_note_array();

#endif