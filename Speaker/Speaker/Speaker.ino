/*In this project, you have to write and include the pitches.h file in your library.
 * This will allow you to use the previously defined notes without having to write out the whole list of them in this file.
 * 
 * 
 */

//Copy the #defines from the Buttons project

#include "pitches.h"

#define SPEAKER 2

//this is an array. It contains a list of numbers.
 int melody[] = {
  NOTE_E7, NOTE_D7, NOTE_C7, NOTE_B7, NOTE_A7, NOTE_G6, NOTE_F6
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 4, 4, 4, 4, 4
};

 void setup() 
 {
 // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 7; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(SPEAKER, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(SPEAKER);
  }
}

void loop() 
{
  //empty
}
