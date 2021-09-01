<html>
<head>
<title>Hasil Akhir</title>
</head>
<body>
<center><h1>Program Hitung Nilai Dengan PHP by Coding-Arena.id</h1></center>
<table width="300" border="1" align="center" bordercolor="#0033FF" bgcolor="#00A2E8">
  <tr>
    <td><?php
$a=$_POST['nim'];
$b=$_POST['nama'];
$c=$_POST['jurusan'];
$d=$_POST['absen'];
$e=$_POST['tugas'];
$f=$_POST['uts'];
$g=$_POST['uas'];
$h=(0.1*$d)+(0.2*$e)+(0.3*$f)+(0.4*$g);
if ($h>=85)
$j=("A") and $i=("LULUS");
else
if ($h>=80)
$j=("A-") and $i=("LULUS");
else
if ($h>=75)
$j=("B+") and $i=("LULUS");
else
if ($h>=70)
$j=("B") and $i=("LULUS");
else
if ($h>=65)
$j=("B-") and $i=("LULUS");
else
if ($h>=60)
$j=("C+") and $i=("LULUS");
else
if ($h>=55)
$j=("C") and $i=("LULUS");
else
if ($h>=40)
$j=("D") and $i=("TIDAK LULUS");
else
if ($h>=0)
$j=("E") and $i=("TIDAK LULUS");
else
if ($h>100)
$j=("") and $i=("NILAI SALAH");
else
$j=("D") and $i=("TIDAK LULUS");

echo"NIM : $a<br>";
echo"Nama Mahasiswa : $b<br>";
echo"Jurusan : $c<br>";
echo"Nilai Akhir : $h<br>";
echo"Grade : $j<br>";
echo"Keterangan : $i<br>";

?></td>
  </tr>
</table>
<center><span class="copy-text">Terima kasih PHP by Coding-Arena.id</span></center>
<center> <span class="copy-text">Dengan tutorial Copyright &copy; 2016 Coding-Arena - Faisal Reza Fahlevi</span></center>
</body>
</html>