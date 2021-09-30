<?php
	@session_start();
    $timeout = 1;
    $logout = "index.php";

    $timeout = $timeout * 1;
    if(isset($_SESSION['start_session'])){
		$elapsed_time = time()-$_SESSION['start_session'];
		if($elapsed_time >= $timeout){
			session_destroy();
			echo "<script type='text/javascript'>alert('Sesi telah berakhir');window.location='$logout'</script>";
		}
	}

    $_SESSION['start_session']=time();
	include '../controllers/connect.php';
	if(@$_SESSION['siswa']){
?>
<!DOCTYPE html>
<html>

<head>
    <title>siswa</title>
   
</head>

<body class="theme-red">
<?php
    $siswa=mysqli_query($db,"select*from pendaftar where id_pendaftar='$_SESSION[siswa]'");
    $da=mysqli_fetch_array($siswa);
?>
    Selamat datang <?php echo $da['nama'];?><br />
    Anda sekarang berada di Halaman siswa <br /><br />
    <a href="../controllers/logout.php?page=siswa" onclick="return confirm('Apakah anda ingin keluar dari halaman siswa?')">Log Out</a>
</body>

</html>

<?php
}
else
{
	header('location:../index.php');
}
?>