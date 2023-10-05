<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="shortcut icon" href="images/transaction_favicon.jpg">
    <title>Transaction - Banking System</title>
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
        $email1 = $_POST['email1'];    // email1 is the sender's email
        $email2 = $_POST['email2'];   // email2 is the receiver email
        $balance = $_POST['balance'];

        $sql = "SELECT * from intern where username = '$username' AND email = '$email1'";
        $result = mysqli_query($conn, $sql);
        $num = mysqli_num_rows($result);

        // check if the sender's credentials match with the databse or not

        if ($num == 1) {
            $sql2 = "SELECT * from intern where email = '$email2'";
            $result2 = mysqli_query($conn, $sql2);
            $num2 = mysqli_num_rows($result2);
            if ($num2 == 1) {

                // check if the receiver's credentials match with the databse or not

                $sql3 = "SELECT current_balance FROM intern where email = '$email1'";
                $result3 = mysqli_query($conn, $sql3);
                $data = mysqli_fetch_assoc($result3);
                $sender_balance = $data['current_balance'];

                // compare the main balance with the transaction balance
                // I have use variable like sql2, sql3, result4 just for common variable purpose

                if ($sender_balance >= $balance) {

                    // we cannot send the money more than that we have. So, checking the same process here

                    $sql4 = "SELECT current_balance FROM intern where email = '$email2'";
                    $result4 = mysqli_query($conn, $sql4);
                    $data1 = mysqli_fetch_assoc($result4);
                    $receiver_balance = $data1['current_balance'];

                    // performing required calculation here

                    $receiver_balance = $receiver_balance + $balance;
                    $sender_balance = $sender_balance - $balance;

                    // updating the result in the database

                    $sender_final = "UPDATE `intern` SET `current_balance`='$sender_balance' WHERE email = '$email1'";
                    $query_sender = mysqli_query($conn, $sender_final);
                    $receiver_final = "UPDATE `intern` SET `current_balance`='$receiver_balance' WHERE email = '$email2'";
                    $query_receiver = mysqli_query($conn, $receiver_final);

                    // insertring the record in another table for the transaction history

                    $send = "INSERT INTO `records` (`sn`, `sender_email`, `receiver_email`, `transfer_amount`, `date`) VALUES (NULL, '$email1', '$email2', '$balance', current_timestamp());";
                    $query = mysqli_query($conn, $send);
    ?>
                    <script>
                        swal({
                            title: "Success!",
                            text: "Transaction done successfully...!",
                            icon: "success",
                            button: "OK!",
                        });
                    </script>
                    <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
                    <script src="transaction_success.js"></script>

                <?php
                } else {
                ?>
                    <script>
                        swal("Error...!", "Insufficient balance...!");
                    </script>
                    <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
                    <script src="insufficient_balance.js"></script>

            <?php
                }
            }
        }
        if ($num != 1 || $num2 != 1) {
            ?>

            <script>
                swal("Error...!", "Credentials did not match!");
            </script>
            <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
            <script src="info_notmatch.js"></script>

    <?php
        }
    }
    ?>

    <img class="backgroundtrans" src="images/transback_background.jpg" alt="Aleq">
    <h3>Welcome Back, Transaction process is done here...!</h3>
    <div class="container mt-4">
        <form method="post" autocomplete="off">

            <div class="mb-3">
                <label for="exampleInputEmail1" class="form-label">Sender Username</label>
                <input type="text" class="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" name="username" title="Sender Username" required>
            </div>

            <div class="mb-3">
                <label for="exampleInputEmail1" class="form-label">Sender Email Address</label>
                <input type="email" class="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" name="email1" title="Sender Email" required>
            </div>

            <div class="mb-3">
                <label for="exampleInputEmail1" class="form-label">Receiver Email Address</label>
                <input type="email" class="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" name="email2" title="Receiver Email" required>
            </div>

            <div class="mb-3">
                <label for="exampleInputEmail1" class="form-label">Transaction Amount</label>
                <input type="text" class="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" name="balance" title="Transaction Amount" required>
            </div>

            <button type="submit" class="btn btn-success" name="submit">Send</button>
        </form>
    </div>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js" integrity="sha384-w76AqPfDkMBDXo30jS1Sgez6pr3x5MlQ1ZAGC+nuZB+EYdgRZgiwxhTBTkF7CXvN" crossorigin="anonymous"></script>
</body>

</html>