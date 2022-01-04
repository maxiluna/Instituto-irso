Imports System
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
Module Program
    Sub Main(args As String())
        Dim texto1 As String = "El numero es 5"
        Dim texto2 As String = "El numero es 10"
        Dim n As Integer = 1
        If (n = 0) Then
            Console.WriteLine("El numero es 5 !")
        Else
            Console.WriteLine("El numero es 10 !")
        End If
    End Sub
End Module
