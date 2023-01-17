'***********************************************************
' Materia: Programacion 2
' Descripción: 1.2.- INSTRUCCIONES BASICAS EN VISUAL BASIC
' Autor: Maximiliano Luna 
'
' Compilador Online: 
' https://www.onlinegdb.com/online_vb_compiler
'***********************************************************
' 1.2.- INSTRUCCIONES BASICAS EN VISUAL BASIC
' IF ... THEN ... ELSE ...  
Imports System
Module Program
    Sub Main(args As String())
        Dim texto1 As String = "El numero es 5"
        Dim texto2 As String = "El numero es 10"
        Dim n As Integer = 1
        Dim a As Integer = 11
        Dim k, b, q, g, q2, t, p As Integer

        ' IF forma basica
        '-----------------
        If (n = 0) Then
            Console.WriteLine("IF FORMA BASICA")
            Console.WriteLine("El numero es 5 !")
        Else
            Console.WriteLine("IF FORMA BASICA")
            Console.WriteLine(texto2)
        End If

        ' IF variables
        '-----------------
        If (a = 11) Then
            k = 5
            b = 0
            Console.WriteLine(vbNewLine & "IF Variables")
            Console.WriteLine("El valor de k es: " & k & " y El valor de b es: " & b)
        Else
            k = 7
            b = 1
            Console.WriteLine(vbNewLine & "IF Variables")
            Console.WriteLine("El valor de k es: " & k & " y El valor de b es: " & b)
        End If

        ' IF anidados
        '-----------------
        If a = 1 Then
            q = 8
            Console.WriteLine(vbNewLine & "IF Anidado")
            Console.WriteLine("El valor de q es: " & q)
        Else
            If g = 4 Then
                q = 7
                Console.WriteLine(vbNewLine & "IF Anidado")
                Console.WriteLine("El valor de q es: " & q)
            Else
                q = 9
                Console.WriteLine(vbNewLine & "IF Anidado")
                Console.WriteLine("El valor de q es: " & q)
            End If
        End If

        ' IFF funcion
        ' <condición>, <acción si condición verdadera>, <acción si condición falsa>
        '-----------------
        IIf(a = 11, q2 = 3, q2 = 6)

        ' SELECT CASE SIMPLE
        '-----------------
        t = 5
        Select Case t
            Case 3
                q = 7
                Console.WriteLine(vbNewLine & "SELECT CASE")
                Console.WriteLine("El valor de q es: " & q)
            Case 4
                q = 9
                Console.WriteLine(vbNewLine & "SELECT CASE")
                Console.WriteLine("El valor de q es: " & q)
            Case 5
                q = 13
                Console.WriteLine(vbNewLine & "SELECT CASE")
                Console.WriteLine("El valor de q es: " & q)
        End Select

        ' SELECT CASE CON RANGO
        '-----------------
        t = 20
        Select Case t
            Case 3
                q = 7
                Console.WriteLine(vbNewLine & "SELECT CASE")
                Console.WriteLine("El valor de q es: " & q)
            Case 4 To 21
                q = 9
                Console.WriteLine(vbNewLine & "SELECT CASE")
                Console.WriteLine("El valor de q es: " & q)
            Case 22 To 30
                q = 13
                Console.WriteLine(vbNewLine & "SELECT CASE")
                Console.WriteLine("El valor de q es: " & q)
        End Select

        ' FOR ... NEXT 
        '-----------------
        For i = 1 To 4
            q = q + 10
            Console.WriteLine(vbNewLine & "FOR ... NEXT")
            Console.WriteLine("El valor de i es: " & i)
            Console.WriteLine("El valor de q es: " & q)
        Next i

        ' FOR ... STEP
        '-----------------
        For i = 0 To 20 Step 5
            q = q + 10
            Console.WriteLine(vbNewLine & "FOR ... STEP")
            Console.WriteLine("El valor de i es: " & i)
            Console.WriteLine("El valor de q es: " & q)
        Next i

        ' FOR ... EXIT FOR
        '-----------------
        For i = 0 To 20 Step 5
            t = t + 3
            Console.WriteLine(vbNewLine & "FOR ... EXIT FOR")
            Console.WriteLine("El valor de i es: " & i)
            If t = 33 Then Exit For
            q = q + 10
            Console.WriteLine("El valor de q es: " & q)
        Next i

        ' WHILE
        '-----------------
        n = 1
        q = 2
        While (n < 10)
            Console.WriteLine(vbNewLine & "WHILE")
            Console.WriteLine("El valor de n es: " & n)
            p = q * 3
            n = n + 1
            Console.WriteLine("El valor de p es: " & p)
            q = p
        End While

        ' DO WHILE LOOP
        '-----------------
        n = 1
        Do While (n < 10)
            Console.WriteLine(vbNewLine & "DO WHILE LOOP")
            Console.WriteLine("El valor de n es: " & n)
            p = q * 3
            n = n + 2
            Console.WriteLine("El valor de p es: " & p)
            q = p
        Loop

        ' DO UNTIL LOOP
        '-----------------
        n = 1
        q = 5
        p = 0
        Do Until (n = 11)
            Console.WriteLine(vbNewLine & "DO UNTIL LOOP")
            Console.WriteLine("El valor de n es: " & n)
            p = q * 3
            n = n + 1
            Console.WriteLine("El valor de p es: " & p)
            q = p
        Loop

        ' DO LOOP WHILE
        '-----------------
        n = 1
        q = 4
        p = 0
        Do
            Console.WriteLine(vbNewLine & "DO LOOP WHILE")
            Console.WriteLine("El valor de n es: " & n)
            p = q * 3
            n = n + 4
            Console.WriteLine("El valor de p es: " & p)
            q = p
        Loop While (n < 10)

        ' DO LOOP UNTIL
        '-----------------
        n = 1
        p = 0
        q = 2
        Do
            Console.WriteLine(vbNewLine & "DO LOOP UNTIL")
            Console.WriteLine("El valor de n es: " & n)
            p = q * 3
            n = n + 3
            Console.WriteLine("El valor de p es: " & p)
            q = p
        Loop Until (n = 10)

        ' DO WHILE - EXIT DO
        '-----------------
        n = 0
        p = 0
        q = 10
        Do While (n < 10)
            Console.WriteLine(vbNewLine & "DO WHILE - EXIT DO")
            Console.WriteLine("El valor de n es: " & n)
            p = q * 3
            Console.WriteLine("El valor de p es: " & p)
            If (p > 100) Then Exit Do
            n = n + 2
            q = p
        Loop

        ' FUNCION chr$ (0 a 255)
        '-----------------
        Dim valorChar As Char
        Console.WriteLine(vbNewLine & "FUNCION chr$")
        valorChar = Chr(54)
        Console.WriteLine("El valor de valorChar es: " & valorChar)
        valorChar = Chr(107)
        Console.WriteLine("El valor de valorChar es: " & valorChar)
        valorChar = Chr(64)
        Console.WriteLine("El valor de valorChar es: " & valorChar)

        ' FUNCION RAIZ CUADRADA sqr
        '-----------------
        'Dim MySqr
        'Console.WriteLine(vbNewLine & "FUNCION Sqr")
        'MySqr = Sqr(4)
        'Console.WriteLine("El valor de & MySqr es: " & MySqr)

    End Sub
End Module