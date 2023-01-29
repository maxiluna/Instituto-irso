Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        For i = 0 To TextBox1.Text.Length - 1
            If IsNumeric(TextBox1.Text(i)) Then
                TextBox2.Text = TextBox2.Text & TextBox1.Text(i)
            End If
        Next
    End Sub
End Class
