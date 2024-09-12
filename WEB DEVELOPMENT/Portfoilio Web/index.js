function sendemail()
{
Email.send({
    SecureToken: "a3d051bd-c1bd-4c3d-989d-c70eb7457732",
    To: 'nebulacodersbpmce+noreply@gmail.com',
    From: document.getElementById('email').value,
    Subject: "New Enquiry From Someone",
    Body: "Name : " + document.getElementById("username").value +
        "<br>" + "Email : " + document.getElementById("email").value + "<br>"
        + "Message : " + document.getElementById("query").value + "br>"
}).then(
    message => {
        if (message == 'OK') {
            swal("Successful", "Data sent", "success");
        } else {
            swal("Sonething Went Wrong", "Data Not Received", "error");
        }
    }

);
}