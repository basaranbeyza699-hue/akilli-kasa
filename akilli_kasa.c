#include <stdio.h>

int main() {
    float urunTutari, odenenPara;
    int paraUstuKurus;
    int toplamKupurSayisi = 0;
    int adet;

    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &urunTutari);
    
    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenenPara);
    
    paraUstuKurus = (int)(((odenenPara - urunTutari) * 100) + 0.5);
    
    if (paraUstuKurus < 0) {
        printf("Hata: Odenen para urun tutarindan kucuk olamaz!\n");
        return 0;
    }
    
    printf("\nVerilecek Para Ustu: %d kurus\n\n", paraUstuKurus);
    printf("--- KUPUR VE MADENI PARA DAGILIMI ---\n");
    
    if (paraUstuKurus >= 20000) {
        adet = paraUstuKurus / 20000;
        paraUstuKurus = paraUstuKurus % 20000;
        toplamKupurSayisi += adet;
        printf("%d adet 200 TL Banknot\n", adet);
    }
    if (paraUstuKurus >= 10000) {
        adet = paraUstuKurus / 10000;
        paraUstuKurus = paraUstuKurus % 10000;
        toplamKupurSayisi += adet;
        printf("%d adet 100 TL Banknot\n", adet);
    }
    if (paraUstuKurus >= 5000) {
        adet = paraUstuKurus / 5000;
        paraUstuKurus = paraUstuKurus % 5000;
        toplamKupurSayisi += adet;
        printf("%d adet 50 TL Banknot\n", adet);
    }
    if (paraUstuKurus >= 2000) {
        adet = paraUstuKurus / 2000;
        paraUstuKurus = paraUstuKurus % 2000;
        toplamKupurSayisi += adet;
        printf("%d adet 20 TL Banknot\n", adet);
    }
    if (paraUstuKurus >= 1000) {
        adet = paraUstuKurus / 1000;
        paraUstuKurus = paraUstuKurus % 1000;
        toplamKupurSayisi += adet;
        printf("%d adet 10 TL Banknot\n", adet);
    }
    if (paraUstuKurus >= 500) {
        adet = paraUstuKurus / 500;
        paraUstuKurus = paraUstuKurus % 500;
        toplamKupurSayisi += adet;
        printf("%d adet 5 TL Banknot\n", adet);
    }
    if (paraUstuKurus >= 100) {
        adet = paraUstuKurus / 100;
        paraUstuKurus = paraUstuKurus % 100;
        toplamKupurSayisi += adet;
        printf("%d adet 1 TL Madeni Para\n", adet);
    }
    if (paraUstuKurus >= 50) {
        adet = paraUstuKurus / 50;
        paraUstuKurus = paraUstuKurus % 50;
        toplamKupurSayisi += adet;
        printf("%d adet 50 Kurus\n", adet);
    }
    if (paraUstuKurus >= 25) {
        adet = paraUstuKurus / 25;
        paraUstuKurus = paraUstuKurus % 25;
        toplamKupurSayisi += adet;
        printf("%d adet 25 Kurus\n", adet);
    }
    if (paraUstuKurus >= 10) {
        adet = paraUstuKurus / 10;
        paraUstuKurus = paraUstuKurus % 10;
        toplamKupurSayisi += adet;
        printf("%d adet 10 Kurus\n", adet);
    }
    if (paraUstuKurus >= 5) {
        adet = paraUstuKurus / 5;
        paraUstuKurus = paraUstuKurus % 5;
        toplamKupurSayisi += adet;
        printf("%d adet 5 Kurus\n", adet);
    }
    if (paraUstuKurus >= 1) {
        adet = paraUstuKurus / 1;
        paraUstuKurus = paraUstuKurus % 1;
        toplamKupurSayisi += adet;
        printf("%d adet 1 Kurus\n", adet);
    }
    
    printf("\nVerilen Toplam Kupur ve Madeni Para Sayisi: %d\n", toplamKupurSayisi);
    
    return 0;
}
