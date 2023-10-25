document.getElementById('verify').addEventListener('click', function() {
    const enteredOTP = document.getElementById('otp').value;
    if (enteredOTP === '123456') {
        alert('OTP is verified. You can proceed.');
    } else {
        alert('Invalid OTP. Please try again.');
    }
});
