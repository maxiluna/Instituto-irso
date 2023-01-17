Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If RadioButton1.Checked Then
            TextBox1.Text = "1"
        ElseIf RadioButton2.Checked Then
            TextBox1.Text = "2"
        ElseIf RadioButton3.Checked Then
            TextBox1.Text = "3"
        ElseIf RadioButton4.Checked Then
            TextBox1.Text = "4"
        End If
    End Sub
End Class
