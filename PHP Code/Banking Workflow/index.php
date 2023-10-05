<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="shortcut icon" href="images/index_favicon.jpg">
    <title>Basic Banking System</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-GLhlTQ8iRABdZLl6O3oVMWSktQOp6b7In1Zl3/Jr59b6EGGoI1aFkw7cmDA6j6gD" crossorigin="anonymous">
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <?php
    require "navbar.php";
    require "connection.php";

    // check weather the method is post and name is submit

    if (isset($_POST['submit'])) {
        $username = $_POST['username'];
        $email = $_POST['email'];
        $cbalance = $_POST['cbalance'];

        // check if the username and email already exists in the databse or not

        $sql = "SELECT * from intern where username = '$username' AND email = '$email'";
        $result = mysqli_query($conn, $sql);
        $num = mysqli_num_rows($result);
        if ($num == 1) {
    ?>

            <!-- I have not allowed to submit same username and email twice -->

            <script>
                swal("Error...!", "Same Username and Email already exist!");
            </script>
            <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
            <script src="userexist.js"></script>

            <?php
        } else {

            // if the given credentials is in correct format and unique then only data is submitted to the database

            $send = "INSERT INTO `intern` (`sn`, `username`, `email`, `current_balance`) VALUES (NULL, '$username', '$email', '$cbalance');";
            $query = mysqli_query($conn, $send);
            if ($query) {
            ?>
                <script>
                    swal({
                        title: "Success!",
                        text: "Thank you for joining with us!",
                        icon: "success",
                        button: "OK!",
                    });
                </script>
                <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
                <script src="joining.js"></script>

    <?php
            }
        }
    }
    ?>

    <img class="background" src="images/index_background.jpg" alt="Aleq">
    <h3>Welcome User, fill the credentials and have a journey with us...!</h3>
    <div class="container mt-4">
        <form method="post" autocomplete="off">

            <div class="mb-3">
                <label for="exampleInputEmail1" class="form-label">Username</label>
                <input type="text" class="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" name="username" title="Username" required>
            </div>

            <div class="mb-3">
                <label for="exampleInputEmail1" class="form-label">Email Address</label>
                <input type="email" class="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" name="email" title="Email" required>
            </div>

            <div class="mb-3">
                <label for="exampleInputPassword1" class="form-label">Deposit Amount</label>
                <input type="text" class="form-control" id="exampleInputPassword1" name="cbalance" title="Amount to be deposited" required>
            </div>

            <button type="submit" class="btn btn-success" name="submit">Submit</button>
        </form>
    </div>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js" integrity="sha384-w76AqPfDkMBDXo30jS1Sgez6pr3x5MlQ1ZAGC+nuZB+EYdgRZgiwxhTBTkF7CXvN" crossorigin="anonymous"></script>
</body>

</html>