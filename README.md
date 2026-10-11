# Akıllı Kasa (Smart Cashier) - C Programlama Ödevi

Bu proje, C dilinde geliştirilmiş kapsamlı bir **Akıllı Kasa** simülasyonudur. Müşterinin ödediği tutar ile ürünün fiyatı arasındaki para üstünü, en az sayıda banknot ve madeni para (küpür) kullanarak optimize edilmiş bir şekilde hesaplar.

---

## 📋 Projenin Amacı ve Kapsamı
* **Amaç:** Bir perakende satış noktasında, kasiyere verilecek para üstünün en verimli (en az parça sayısıyla) şekilde dağıtılmasını otomatikleştirmektir.
* **Kapsam:** Program; ürün tutarı ve ödenen para girdilerini alır, hatalı durumları yakalar ve kalan tutarı kuruş bazında tam sayıya çevirerek en büyük banknottan en küçük madeni paraya kadar dağılım yapar.

---

## 🛠️ Geliştirme Sürecinde Kullanılan Araçlar ve Yararlanma Yöntemleri
* **Programlama Dili (C):** Temel girdi/çıktı, koşullu yapılar ve matematiksel operatörler için ana dil olarak kullanılmıştır.
* **Geliştirme Ortamı (Dev-C++ / VS Code):** Kodların yazılması, derlenmesi, hata ayıklama (debugging) ve test süreçleri için tercih edilmiştir.
* **Versiyon Kontrol (Git & GitHub):** Proje kodlarının versiyonlanması ve uzaktan depoda saklanması için kullanılmıştır.
* **Gemini (Yapay Zeka Asistanı):** Geliştirme sürecinde; bilgisayar mimarisinden kaynaklanan ondalık kayıp hatalarının (`float` hassasiyet problemleri) önlenmesi, kuruş dönüşüm algoritmasının optimize edilmesi ve projenin teknik dokümantasyonunun hazırlanması aşamalarında aktif olarak destek alınmıştır.

---

## 🧠 Algoritma Detayları ve Adımları
1. **Girdi Alma:** Kullanıcıdan ürün tutarı (`float`) ve ödenen para (`float`) bilgileri istenir.
2. **Hata Kontrolü:** Ödenen paranın ürün tutarından az olup olmadığı kontrol edilir.
3. **Ondalık Hassasiyet Optimizasyonu:** `float` türündeki ondalıklı sayıların ikili taban dönüşüm hatalarını engellemek için tutar 100 ile çarpılıp matematiksel yuvarlama (`+ 0.5`) yapılarak tam sayıya (`int`) dönüştürülür.
4. **Küpür Dağılımı:** Elde edilen toplam kuruş değeri sırasıyla şu basamaklara göre mod ve bölme işlemlerine tabi tutulur:
   * **Banknotlar:** 200 TL, 100 TL, 50 TL, 20 TL, 10 TL, 5 TL
   * **Madeni Paralar:** 1 TL, 50 Kr, 25 Kr, 10 Kr, 5 Kr, 1 Kr
5. **Raporlama:** Her bir küpürden kaçar adet verileceği ve kullanılan **toplam küpür/madeni para adedi** ekrana yazdırılır.

---

## 🚀 Proje Nasıl Çalıştırılır?
1. Depodaki `akilli_kasa.c` dosyasını indirin.
2. Dev-C++ veya herhangi bir C derleyicisinde açın.
3. Kodu derleyip çalıştırın (`F11` tuşu).
4. İstenen tutarları girerek sonuçları test edin.

---

## 📌 Teslim Bilgisi
Bu repository, üniversite yazılım mühendisliği dersi kapsamında hazırlanan Akıllı Kasa ödevinin kaynak kodlarını içermekte olup, Teams üzerinden bağlantı (link) yoluyla teslim edilmiştir.
