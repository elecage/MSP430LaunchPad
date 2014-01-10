#include "pitches.h"
int melody[] = {
  NOTE_G3, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_G3, NOTE_E3, 
  NOTE_G3, NOTE_G3, NOTE_E3, NOTE_E3, NOTE_D3, 0,
  NOTE_G3, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_G3, NOTE_E3, 
  NOTE_G3, NOTE_D3, NOTE_D3, NOTE_E3, NOTE_C3,  0};
int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 2, 
  4, 4, 4, 4, 1.5, 4,
  4, 4, 4, 4, 4, 4, 2,  
  4, 4, 4, 4, 1.5, 4};
void setup()
{
  // put your setup code here, to run once:
}

void loop()
{
  // put your main code here, to run repeatedly:
 
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 26; thisNote++) {
    
    int noteDuration = 1000/noteDurations[thisNote];
    int pauseBetweenNotes = noteDuration * 1.30;
    tone(P2_5, melody[thisNote],noteDuration);
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(P2_5);
  }
  delay(1000);
}
