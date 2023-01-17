Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        TextBox1.Text = Str(Int(TextBox1.Text) + 1)
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        If TextBox1.Text > 0 Then
            TextBox1.Text = Str(Int(TextBox1.Text) - 1)
        End If
    End Sub
End Class
