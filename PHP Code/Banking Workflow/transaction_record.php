<?php
require "connection.php";
require "navbar.php";
$sql = "SELECT * from records";
$result = mysqli_query($conn, $sql);
?>

<!doctype html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="shortcut icon" href="images/history_favicon.jpg">
    <title>Transaction History - Banking System</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-GLhlTQ8iRABdZLl6O3oVMWSktQOp6b7In1Zl3/Jr59b6EGGoI1aFkw7cmDA6j6gD" crossorigin="anonymous">
    <link rel="stylesheet" href="viewdata.css">

    <!-- adding jquery features using databales.net to fetch data from the database and for clear visibility -->

    <link href="//cdn.datatables.net/1.10.25/css/jquery.dataTables.min.css" rel="stylesheet">
</head>

<body>
    <h3>Here's the transaction history, fetching from the database...!</h3>
    <h5>(Date & Time shown here is in <span>UTC</span> format, So convert to your zone accordingly...)</h5>
    <div class="container" style="margin-top:50px;">

        <!-- creating table and fetching the data accordingly in a loop -->

        <table class="table table-striped">
            <thead>
                <tr>
                    <th>SN</th>
                    <th>Sender Username</th>
                    <th>Receiver Username</th>
                    <th>Transferred Amount</th>
                    <th>Date of Transaction</th>
                </tr>
            </thead>
            <tbody>
                <?php while ($row = mysqli_fetch_assoc($result)) { ?>
                    <tr>
                        <td><?php echo $row['sn'] ?></td>
                        <td><?php echo $row['sender_email'] ?></td>
                        <td><?php echo $row['receiver_email'] ?></td>
                        <td><?php echo $row['transfer_amount'] ?></td>
                        <td><?php echo $row['date'] ?></td>
                    </tr>
                <?php } ?>
                </thead>
        </table>
    </div>

    <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.0/dist/js/bootstrap.min.js"></script>

    <!-- script code for jquery table -->

    <script src="//cdn.datatables.net/1.10.25/js/jquery.dataTables.min.js"></script>
    <script>
        $(document).ready(function() {
            $('.table').DataTable();
        });
    </script>
</body>

<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js" integrity="sha384-w76AqPfDkMBDXo30jS1Sgez6pr3x5MlQ1ZAGC+nuZB+EYdgRZgiwxhTBTkF7CXvN" crossorigin="anonymous"></script>
</body>
</html>