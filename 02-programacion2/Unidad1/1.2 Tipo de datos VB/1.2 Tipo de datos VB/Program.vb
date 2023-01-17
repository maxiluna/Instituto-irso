'***********************************************************
' Materia: Programacion 2
' Descripción: 1.3.- TIPOS DE DATOS EN VISUAL BASIC
' Autor: Maximiliano Luna
'
' Compilador Online: 
' https://www.onlinegdb.com/online_vb_compiler
'***********************************************************
Imports System

Module Program
    Sub Main(args As String())
        ' Los tipos de datos básicos soportados por Visual Basic son:

        ' Integer - 2 bytes
        ' -32768 a 32767 - Sufijo: %
        Dim numInteger As Integer
        numInteger = 15000
        Console.WriteLine("Integer = " & numInteger)
        numInteger = numInteger * 3
        Console.WriteLine("Integer = " & numInteger)

        ' Long(Long Integer) - 4 bytes
        ' -2147483648 a 2147483647 - Sufijo: &
        Dim numLong As Long
        numLong = 80
        Console.WriteLine("Long = " & numLong)
        Console.WriteLine("Long = " & numLong)
        numLong = numLong * 9000
        Console.WriteLine("Long = " & numLong)

        ' Single(punto flotante) 4 bytes
        ' -3.402823E38 a –1.401298E-45 para valores negativos
        ' 1.401298E-45 a 3.402823E38 para valores positivos
        ' Sufijo: !
        Dim numSingle As Single
        numSingle = 10
        Console.WriteLine("Single = " & numSingle / 4)

        ' Double (punto flotante) 8 bytes
        ' -1.79769313486232E308 a –4.94065645841247E-324para valores negativos
        ' 4.94065645841247E-324 a 1.79769313486232E308para valores positivos
        ' Sufijo: #
        Dim numDoble As Double
        numDoble = 100
        Console.WriteLine("Double = " & numDoble / 33)


        ' String 1 byte por carácter
        ' 0 a 65500 bytes - Sufijo: $
        Dim palabra, numero As String
        palabra = "algo"
        Console.WriteLine("String = " & palabra)
        ' --> STRING ERROR AL QUERER MULTIPLICAR TEXTO Y CONVERTIR A DOBLE <--
        'Console.WriteLine("String = " & palabra * 2)
        Console.WriteLine("String = " & palabra)
        numero = 30
        Console.WriteLine("String = " & numero)
        ' --> STRING SIN ERROR AL QUERER CONVERTIR A DOBLE POR SER NUMERO <--
        Console.WriteLine("String = " & numero * 2)


        ' Variant
        ' Cualquier valor numérico fuera del rango del
        ' tipodobleo cualquier caracter de texto.
        Dim valorVariant2 As VariantType
        valorVariant2 = 99
        Console.WriteLine("VariantType = " & valorVariant2)
        Console.WriteLine("VariantType = " & valorVariant2 / 2)

    End Sub
End Module
