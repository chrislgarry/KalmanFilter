' Script for tallying grades from a text dump of online transcript

Const ForReading = 1
Set objFSO = CreateObject("Scripting.FileSystemObject")
Set objTextFile = objFSO.OpenTextFile("PATH/TO/TEXTFILE", ForReading)

Dim arrNumbers(12)

Do Until objTextFile.AtEndOfStream

    strNextLine = objTextFile.Readline
  Trim(strNextLine)
	
	Select Case strNextLine
	  Case "A"
		  arrNumbers(0) = arrNumbers(0) + 1
	  Case "A-"
		  arrNumbers(1) = arrNumbers(1) + 1
	  Case "B+"
		  arrNumbers(2) = arrNumbers(2) + 1
	  Case "B"
		  arrNumbers(3) = arrNumbers(3) + 1
	  Case "B-"
		  arrNumbers(4) = arrNumbers(4) + 1
	  Case "C+"
		  arrNumbers(5) = arrNumbers(5) + 1
	  Case "C"
		  arrNumbers(6) = arrNumbers(6) + 1
	  Case "C-"
		  arrNumbers(7) = arrNumbers(7) + 1
		  Wscript.Echo "C-"
	  Case "D+"
		  arrNumbers(8) = arrNumbers(8) + 1
	  Case "D"
		  arrNumbers(9) = arrNumbers(9) + 1
	  Case "D-"
		  arrNumbers(10)= arrNumbers(10) + 1
	  Case "F"
		  arrNumbers(11)= arrNumbers(11) + 1
	End Select

Loop

Wscript.Echo "A: " & arrNumbers(0)
Wscript.Echo "A-: " & arrNumbers(1)
Wscript.Echo "B+: " & arrNumbers(2)
Wscript.Echo "B: " & arrNumbers(3)
Wscript.Echo "B-: " & arrNumbers(4)
Wscript.Echo "C+: " & arrNumbers(5)
Wscript.Echo "C: " & arrNumbers(6)
Wscript.Echo "C-: " & arrNumbers(7)
Wscript.Echo "D+: " & arrNumbers(8)
Wscript.Echo "D: " & arrNumbers(9)
Wscript.Echo "D-: " & arrNumbers(10)
Wscript.Echo "F: " & arrNumbers(11)
