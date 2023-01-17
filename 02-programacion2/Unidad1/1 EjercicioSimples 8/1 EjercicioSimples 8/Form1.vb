Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        TextBox3.Text = Str(Int(TextBox1.Text) + Int(TextBox2.Text))
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        TextBox3.Text = Str(Int(TextBox1.Text) - Int(TextBox2.Text))
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        TextBox3.Text = Str(Int(TextBox1.Text) * Int(TextBox2.Text))
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        TextBox3.Text = Str(Int(TextBox1.Text) / Int(TextBox2.Text))
    End Sub
End Class
