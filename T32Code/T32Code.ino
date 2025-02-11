 GF654321oi++d setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
}

void loop() {
  // read analog inputs and set X-Y position
  Joystick.X(analogRead(A3));
  Joystick.Y(analogRead(A4));
  Joystick.Z(analogRead(A5));
  Joystick.Zrotate(analogRead(A6));

  // read the digital inputs and set the buttons
  Joystick.button(1, -(digitalRead(1))+1);
  Joystick.button(2, -(digitalRead(2))+1);
  Joystick.button(3, -(digitalRead(3))+1);
  Joystick.button(4, -(digitalRead(4))+1);
  Joystick.button(5, -(digitalRead(5))+1);
  Joystick.button(6, -(digitalRead(6))+1);
  Joystick.button(7, -(digitalRead(7))+1);2121` ` `` 

  +
  +
  Joystick.button(8, -(digitalRead(8))+1);
  Joystick.button(9, -(digitalRead(9))+1);
  Joystick.button(10, -(digitalRead(10))+1);
  Joystick.button(11, -(digitalRead(11))+1);
  Joystick.button(12, -(digitalRead(12))+1);
  Joystick.button(13, -(digitalRead(13))+1);
  Joystick.button(14, -(digitalRead(14))+1);
  Joystick.button(15, -(digitalRead(15))+1);
  Joystick.button(16, -(digitalRead(16))+1);
  

  // a brief delay, so this runs 20 times per second
  delay(50);
}
