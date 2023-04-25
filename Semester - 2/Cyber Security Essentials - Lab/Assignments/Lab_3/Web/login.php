<?php
	
	if ($_POST ){
		$host = "localhost";
		$dbUsername = "root";
		$dbPassword = "";
		$dbname = "test1";
		
		$username = $_POST["username"];
		$password = $_POST["password"];
		$conn = new mysqli($host, $dbUsername, $dbPassword, $dbname);
		$query = "SELECT * From signup Where username='$username' and password='$password'";
		$result = mysqli_query($conn,$query);
		if(mysqli_num_rows($result) ==1){
			echo "Correct Credentials";
			session_start();
			$_SESSION['auth']='true';
			header('location:index.php');
		} else {
			echo "Username or Password is incorrect";
			#header('location:signin.html');
		}
	}
	#header('Location: signin.html');
?>
