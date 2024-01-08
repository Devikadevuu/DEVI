function validateForm(){
alert("successfull")
}
function ValidateEmail() {
       var email=document.getElementById("txtEmail").value
       var lblError=document.getElementById("lblerror");
       lblError.innerHTML="";
       var expr=/^([\w-\.]+)@((\[[0-9]{1,3}\.[0-9]{1,3}\.)|-(([w-]+\.)+))([a-zA-Z]{2,4}|[0-9]{1,3}(\]?)$/;
       if(!expr.test(email)){
          lblError.innerHTML="Invalid email address.";
       }
}
function mYFunction(inputText) 
{
alert("registeration successfull")
}                                                                                                                                                                   

