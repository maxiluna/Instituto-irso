Public Class Form1
    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged
        TextBox2.Text = TextBox1.Text
    End Sub
End Class
