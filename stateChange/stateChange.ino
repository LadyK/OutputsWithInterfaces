int lastButtonState = LOW;    // state of the button last time you checked
 
void setup() {
  // make pin 2 an input:
  pinMode(2, INPUT);
}
 
void loop() {
  // read the pushbutton:
  int buttonState = digitalRead(2);
 
  // check if the current button state is different than the last state:
  if (buttonState != lastButtonState) {
     // do stuff if it is different here
  }
 
  // save button state for next comparison:
  lastButtonState = buttonState;
}
