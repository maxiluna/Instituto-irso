Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        TextBox3.Text = Str(Int(TextBox1.Text) + Int(TextBox2.Text))
    End Sub
End Class
