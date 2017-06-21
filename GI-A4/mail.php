<!DOCTYPE html>
<html>
<head>
	<title>E-Mail gesendet</title>
</head>
<body>
	<?php
		$subject = $_POST['subject'];
		$message = $_POST['message'];
		$inhalt = "Subject: " . $subject . "\n" . "Message: " . $message;
		$file = fopen("nachricht.csv","a");
		fwrite($file,$inhalt);
		fclose($file);
	
		echo "<p>Ihre Nachricht ist gesendet, vielen Dank!</p>";
	?>
</body>
</html>