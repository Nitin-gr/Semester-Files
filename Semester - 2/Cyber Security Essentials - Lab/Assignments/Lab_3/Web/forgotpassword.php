<?php
	$username = $_POST["username"];
	$email = $_POST["email"];
	$password = $_POST["password"];
	if (!empty($username) || !empty($password) || !empty($gender) || !empty($email) ){
		$host = "localhost";
		$dbUsername = "root";
		$dbPassword = "";
		$dbname = "test1";
		
		$conn = new mysqli($host, $dbUsername, $dbPassword, $dbname);
		
		if(mysqli_connect_error()){
			die('Connect error ('.mysql_connect_error().')'.mysqli_connect_error());
		} else {
			$SELECT = "SELECT email From signup Where email=? Limit 1";
			$UPDATE = "UPDATE Into signup (username, password, email) values (?,?,?)"; 
			
			$stmt = $conn->prepare($SELECT);
			$stmt->bind_param("s", $email);
			$stmt->execute();
			$stmt->bind_result($email);
			$stmt->store_result();
			$rnum = $stmt->num_rows;
			
			if ($rnum == 0){
				$stmt->close();
				$stmt = $conn->prepare($UPDATE);
				$stmt->bind_param("ssss", $username, $email, $password,);
				$stmt->execute();
				echo " Record updated";
				header('Location: signin.html');
			}
			$stmt->close();
			$conn->close();
		}
	} else {
		echo "All fields are required";
		die();
	}
	
?>