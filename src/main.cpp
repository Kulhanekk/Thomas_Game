#include <Arduino.h>
#include <notes.h>
#include <note_shuffle.h>

#define BUZZER_PIN 8

void setup()
{
	
}

void loop()
{
	for (int note = 0; note < N_OF_NOTES; note++)
	{

		// to calculate the note duration, take one second divided by the note type.
		// e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
		int note_duration = 1000 / note_durations[note];
		tone(BUZZER_PIN, melody[note], note_duration);

		// to distinguish the notes, set a minimum time between them.
		// the note's duration + 30% seems to work well:
		int note_pause = note_duration * 1.30;
		delay(note_pause);
		// stop the tone playing:
		noTone(BUZZER_PIN);
	}
}
