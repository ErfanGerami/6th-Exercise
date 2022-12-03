
#include <stdio.h>

void PrintImage(int img[][256], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", img[i][j]);
        }
        printf("\n");

    }

}
void Convert2Negative(int img[][256], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            img[i][j] = 255 - img[i][j];
        }
    }

}


 int main(void)
{
     int img[256][256];
     int size;
     scanf("%d", &size);
     for (int i = 0; i < size; i++) {
         for (int j = 0; j < size; j++) {
             scanf("%d", &img[i][j]);
         }
     }
     Convert2Negative(img, size);
     PrintImage(img, size);
    return 0;
}

