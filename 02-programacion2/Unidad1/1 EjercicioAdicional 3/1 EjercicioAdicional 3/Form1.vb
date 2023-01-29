Public Class Form1
    Dim num1, num2, total, num_mr As Double
    Dim operador As Integer
    '   Operador Suma=1 Resta=2 Multiplicacion=3 Division=4

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        TextBox1.Text = TextBox1.Text & 1
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        TextBox1.Text = TextBox1.Text & 2
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        TextBox1.Text = TextBox1.Text & 3
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        TextBox1.Text = TextBox1.Text & 4
    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        TextBox1.Text = TextBox1.Text & 5
    End Sub

    Private Sub Button6_Click(sender As Object, e As EventArgs) Handles Button6.Click
        TextBox1.Text = TextBox1.Text & 6
    End Sub

    Private Sub Button7_Click(sender As Object, e As EventArgs) Handles Button7.Click
        TextBox1.Text = TextBox1.Text & 7
    End Sub

    Private Sub Button8_Click(sender As Object, e As EventArgs) Handles Button8.Click
        TextBox1.Text = TextBox1.Text & 8
    End Sub

    Private Sub Button9_Click(sender As Object, e As EventArgs) Handles Button9.Click
        TextBox1.Text = TextBox1.Text & 9
    End Sub

    Private Sub Button10_Click(sender As Object, e As EventArgs) Handles Button10.Click
        TextBox1.Text = TextBox1.Text & 0
    End Sub

    Private Sub Button11_Click(sender As Object, e As EventArgs) Handles Button11.Click
        TextBox1.Text = TextBox1.Text & "."
    End Sub

    Private Sub Button13_Click(sender As Object, e As EventArgs) Handles Button13.Click
        num1 = CDbl(Val(TextBox1.Text))
        TextBox1.Text = String.Empty
        operador = 1
    End Sub

    Private Sub Button15_Click(sender As Object, e As EventArgs) Handles Button15.Click
        num1 = CDbl(Val(TextBox1.Text))
        TextBox1.Text = String.Empty
        operador = 2
    End Sub

    Private Sub Button14_Click(sender As Object, e As EventArgs) Handles Button14.Click
        num1 = CDbl(Val(TextBox1.Text))
        TextBox1.Text = String.Empty
        operador = 3
    End Sub

    Private Sub Button16_Click(sender As Object, e As EventArgs) Handles Button16.Click
        num1 = CDbl(Val(TextBox1.Text))
        TextBox1.Text = String.Empty
        operador = 4
    End Sub

    Private Sub Button12_Click(sender As Object, e As EventArgs) Handles Button12.Click
        num2 = CDbl(Val(TextBox1.Text))
        Select Case operador
            Case 1
                total = num1 + num2
                TextBox1.Text = total
            Case 2
                total = num1 - num2
                TextBox1.Text = total
            Case 3
                total = num1 * num2
                TextBox1.Text = total
            Case 4
                total = num1 / num2
                TextBox1.Text = total
        End Select
    End Sub

    Private Sub Button21_Click(sender As Object, e As EventArgs) Handles Button21.Click
        num1 = vbEmpty
        num2 = vbEmpty
        total = vbEmpty
        TextBox1.Text = String.Empty
    End Sub

    Private Sub Button22_Click(sender As Object, e As EventArgs) Handles Button22.Click
        If num1! = vbEmpty Then
            num2 = vbEmpty
        Else
            num1 = vbEmpty
        End If
        TextBox1.Text = String.Empty
    End Sub

    Private Sub Button20_Click(sender As Object, e As EventArgs) Handles Button20.Click
        ' Elimina un digito
        TextBox1.Text = TextBox1.Text.Substring(0, TextBox1.Text.Length - 1)
    End Sub

    Private Sub Button19_Click(sender As Object, e As EventArgs) Handles Button19.Click
        ' Memoria Recupera
        TextBox1.Text = num_mr
    End Sub

    Private Sub Button18_Click(sender As Object, e As EventArgs) Handles Button18.Click
        ' Suma a Memoria 
        num_mr += TextBox1.Text
    End Sub

    Private Sub Button17_Click(sender As Object, e As EventArgs) Handles Button17.Click
        ' Resta a Memoria
        num_mr -= TextBox1.Text
    End Sub
End Class
