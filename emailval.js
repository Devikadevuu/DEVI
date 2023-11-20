function isValidEmail(email) {
const emailRegex=/^[^s@]+@[^\s@]+\.[^\s@]+$/;
return email.Regex.test(email);
const email ="example@example.com";
if (isValidEmail(email)) {
console.log("email is valid");
}
else
{
conosle.log("email is inavalid");
}
