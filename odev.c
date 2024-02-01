#include <stdio.h>
#include <math.h>

int main(void)
{
    // Kullanıcıdan 4 sayıyı alma
    double num1, num2, num3, num4;
    printf("Lutfen 4 sayi girin:\n");
    scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);

    // Aritmetik Ortalama Hesaplama
    double aritmetikOrtalama = (num1 + num2 + num3 + num4) / 4;

    // Geometrik Ortalama Hesaplama
    double geometrikOrtalama = pow((num1 * num2 * num3 * num4), 0.25);

    // Harmonik Ortalama Hesaplama
    double harmonikOrtalama = 4 / ((1/num1) + (1/num2) + (1/num3) + (1/num4));

    // Sonuçları ekrana yazdırma
    printf("Aritmetik Ortalama: %lf\n", aritmetikOrtalama);
    printf("Geometrik Ortalama: %lf\n", geometrikOrtalama);
    printf("Harmonik Ortalama: %lf\n", harmonikOrtalama);

    return 0;
}