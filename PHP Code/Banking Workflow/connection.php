<?php

// connecting to the database

$servername = "localhost";   // servername is always localhost for xampp server
$username = "root";   // username root by default
$password = "";    // password should be empty
$database = "transaction";   // our self created database

// query for making connection to the database

$conn = mysqli_connect($servername, $username, $password, $database);
if (!$conn) {

    die("Error" . mysqli_connect_error());
}