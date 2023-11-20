function validateForm(){
var email = document.myForm.email.value;
    var emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/; 
    if (email === "" || email === null) {
        alert("Enter Email !!")
        var firstNameField = document.getElementById("email");
        firstNameField.focus();
        return false;
    } else if (!emailRegex.test(email)) {
        alert("Enter Valid Email !!")
        var firstNameField = document.getElementById("email");
        firstNameField.focus();
        return false;
    }
    
    var name = document.myForm.mobnu.value;
    var mobileRegex = /^[6-9]\d{9}$/; 
    if (name == "" || name == null) {
        alert("Enter Mobile Number");
        var firstNameField = document.getElementById("mobnu");
        firstNameField.focus();
        return false;
    } else if (!mobileRegex.test(name)) {  
        alert("Enter valid Mobile Number");
        var firstNameField = document.getElementById("mobnu");
        firstNameField.focus();
        return false;
    }
    
alert("Registeration Successful");
return true;
}
