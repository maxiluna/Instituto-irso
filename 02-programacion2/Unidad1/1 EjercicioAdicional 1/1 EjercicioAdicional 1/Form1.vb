Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim vocales As String
        Dim i, contador As Integer
        vocales = "aeiou"

        For i = 1 To Len(TextBox1.Text)
            If InStr(vocales, Mid(TextBox1.Text, i, 1)) Then
                contador = contador + 1
            End If
        Next

        TextBox2.Text = contador

    End Sub
End Class
