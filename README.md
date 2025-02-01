<h1> PROJECT UAS GRAPIK KOMPUTER : MEMBUAT OBJEK 3D CANDI CANGKUANG</h1>
<h2> IDENTITAS </h2>
<ul>
  <li>Nama : Alamahul Bayan </li>
  <li>NIM : 2306163 </li>
  <li>Kelas : Teknik Informatika E </li>
</ul>

<h2> Fungsi Keyboard </h2>
<ol>
  <li>Rotasi Objek</li>
    'q' → Rotasi bertambah (rot++).<br>
    'e' → Rotasi berkurang (rot--).<br>
  <li>Menggerakkan Kamera (Eye dan Look)</li>
    'd' → Geser ke kanan (eyeX++, lookX++).<br>
    'a' → Geser ke kiri (eyeX--, lookX--).<br>
    'w' → Geser ke atas (eyeY++, lookY++).<br>
    's' → Geser ke bawah (eyeY--, lookY--).<br>
    'z' → Geser ke depan (eyeZ++, lookZ++).<br>
    'x' → Geser ke belakang (eyeZ--, lookZ--).<br>
  <li>Menampilkan atau Menyembunyikan Kartesius</li>
      'k' → Mengubah status varKartesius antara true dan false.<br>
  <li>Menyalakan atau Mematikan Lampu</li>
      'l' → Mengubah status lampu antara true dan false.<br>
  <li>Membuka atau Menutup Pintu</li>
      'p' → Mengubah status bukaPintu antara true dan false.<br>
</ol>

<h2>Latar Belakang</h2>
<p>
  Dalam perkembangan teknologi grafika komputer, pembuatan objek tiga dimensi (3D) telah menjadi aspek yang sangat penting dalam berbagai bidang, seperti animasi, permainan video, arsitektur, dan simulasi. OpenGL (Open Graphics Library) adalah salah satu pustaka pemrograman yang banyak digunakan dalam pengembangan grafis 3D karena kemampuannya dalam menghasilkan visualisasi yang interaktif dan realistis.<br>
  Candi Cangkuang, yang terletak di Kabupaten Garut, Jawa Barat, merupakan salah satu candi peninggalan Hindu yang memiliki nilai sejarah tinggi. Candi ini menjadi salah satu warisan budaya yang penting bagi Indonesia, sehingga representasi digital dalam bentuk objek 3D dapat menjadi sarana edukatif sekaligus pelestarian budaya. Dengan memodelkan Candi Cangkuang dalam bentuk 3D menggunakan OpenGL, diharapkan dapat memberikan gambaran yang lebih menarik dan interaktif bagi masyarakat dalam memahami struktur serta keunikan arsitektur candi tersebut.<br>
  Proyek ini bertujuan untuk mengimplementasikan konsep dasar pemrograman grafis dalam membangun objek 3D yang menyerupai Candi Cangkuang. Dalam prosesnya, berbagai teknik seperti penggunaan primitif OpenGL, transformasi geometris, pencahayaan, dan teksturisasi akan diterapkan untuk meningkatkan realisme model yang dibuat. Selain itu, proyek ini juga menjadi langkah awal dalam memahami lebih dalam tentang pemrograman grafis dan teknologi render 3D yang lebih kompleks.<br>
  Dengan adanya penelitian dan implementasi ini, diharapkan dapat memberikan kontribusi dalam pengembangan teknologi grafis serta meningkatkan kesadaran akan pentingnya pelestarian warisan budaya melalui media digital. <br>
</p>


<h2>Kesimpulan</h2>
<p>
  Proyek ini bertujuan untuk memodelkan Candi Cangkuang dalam bentuk objek 3D menggunakan OpenGL sebagai bentuk representasi digital guna meningkatkan edukasi dan pelestarian budaya. Dalam pengembangannya, berbagai teknik pemrograman grafis diterapkan, termasuk penggunaan primitif OpenGL, transformasi geometris, pencahayaan, dan teksturisasi untuk meningkatkan realisme visual.<br>
  Struktur program terdiri dari berbagai fungsi utama, seperti makeObject() yang bertanggung jawab atas pembuatan objek dengan properti material tertentu. Berbagai bagian bangunan seperti lantai, dinding, atap, dan elemen dekoratif dibuat menggunakan kombinasi balok dan kerucut. Proses transformasi objek memanfaatkan glPushMatrix() dan glPopMatrix(), sementara pencahayaan diatur dengan glMaterialfv().<br>
  Selain itu, program ini memungkinkan interaksi pengguna melalui kontrol keyboard, seperti rotasi objek, pergerakan kamera, menampilkan sumbu kartesius, mengatur pencahayaan, serta membuka atau menutup pintu. Dengan adanya implementasi ini, diharapkan proyek dapat berkontribusi dalam pengembangan teknologi grafis sekaligus meningkatkan kesadaran akan pentingnya pelestarian warisan budaya melalui media digital.
</p>
