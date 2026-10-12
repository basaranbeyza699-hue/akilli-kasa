# Türk Lirası Para Üstü ve Kupür Dağılım Hesaplayıcı

Bu proje, bir alışveriş işleminde girilen ürün tutarı ile ödenen para arasındaki farkı hesaplayarak en büyük kupürden en küçük madeni paraya kadar detaylı bir dağılım dökümü sunan bir C konsol uygulamasıdır.

## 📋 Proje Amacı ve Çalışma Mantığı

1. **Girdi Alımı:** Kullanıcıdan ürünün toplam tutarı ve kasaya verilen para TL cinsinden `float` olarak istenir.
2. **Kuruş Dönüşümü:** Kayan noktalı (floating-point) sayıların bellekte tutulmasından kaynaklanan hassasiyet kayıplarını engellemek amacıyla tutar tamamen kuruş cinsine (`int`) dönüştürülür ve matematiksel yuvarlama uygulanır.
3. **Kupür Hesaplamaları:** Matris veya döngü yerine ardışık tamsayı bölmesi (`/`) ve mod (`%`) işlemleri kullanılarak sırasıyla şu birimler hesaplanır:
   * **Banknotlar:** 200 TL, 100 TL, 50 TL, 20 TL, 10 TL, 5 TL
   * **Madeni Paralar:** 1 TL, 50 Kuruş, 25 Kuruş, 10 Kuruş, 5 Kuruş, 1 Kuruş
4. **Özet Çıktı:** İşlem sonucunda hangi kupürden kaçar adet verileceği ve toplam verilen para/banknot adedi ekrana yazdırılır.

## 🛠️ Kullanılan Teknolojiler

* **Programlama Dili:** C (C99 veya üzeri)
* **Kütüphaneler:** `<stdio.h>` (Standart Girdi/Çıktı kütüphanesi)

## 💻 Kurulum ve Çalıştırma

Projeyi bilgisayarınızda derleyip çalıştırmak için aşağıdaki adımları takip edebilirsiniz:

1. Depoyu klonlayın veya `main.c` dosyasını bilgisayarınıza indirin.
2. Terminal veya komut istemcisini açarak dosyanın bulunduğu dizine gidin.
3. GCC kullanarak derleyin:
   ```bash
   gcc main.c -o para_hesaplama

---

## 📌 Teslim Bilgisi
Bu repository, üniversite yazılım mühendisliği dersi kapsamında hazırlanan Akıllı Kasa ödevinin kaynak kodlarını içermekte olup, Teams üzerinden bağlantı (link) yoluyla teslim edilmiştir.
