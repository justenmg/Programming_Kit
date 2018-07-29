/*In this project, you have to write and include the pitches.h file in your library.
 * This will allow you to use the previously defined notes without having to write out the whole list of them in this file.
 * 
 * 
 */

//Copy the #defines from the Buttons project

//this is an array. It contains a list of numbers.
 int melody[] = {
  NOTE_C1, NOTE_C2, NOTE_C3, NOTE_C4, NOTE_C5, NOTE_C6, NOTE_C7, NOTE_C8
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 4, 4
};

 void setup() 
 {
  //use the tone() function to play a sound.
  //tone(pin, note, duration);
  tone(SPEAKER, melody[thisNote], noteDuration);
  
  // to distinguish the notes, set a minimum time between them.
  // the note's duration + 30% seems to work well:
  int pauseBetweenNotes = noteDuration * 1.30;
  delay(pauseBetweenNotes);
  
  // stop the tone playing:
  noTone(SPEAKER);
}

void loop() 
{
  //empty
}
