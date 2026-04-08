#include <Arduino.h>
#include <notes.h>
#include <note_shuffle.h>

#define BUZZER_PIN 3

int note_idx_array[N_OF_NOTES];

void setup()
{
	// Serial.begin(9600);
	// while (!Serial); // Wait for monitor to open
    // Serial.println("System Start");
    
    // init_note_array(N_OF_NOTES);
    // Serial.println("Notes Initialized");
}

void loop()
{
	for (size_t note = 0; note < N_OF_NOTES; note++)
	{

		// to calculate the note duration, take one second divided by the note type.
		// e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
		int note_duration = note_durations[note];
		tone(BUZZER_PIN, melody[note], note_duration);
		Serial.println(note);

		// to distinguish the notes, set a minimum time between them.
		// the note's duration + 30% seems to work well:
		int note_pause = note_duration * 1.30;
		delay(note_pause);
		// stop the tone playing:
		noTone(BUZZER_PIN);
	}
}
