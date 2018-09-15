#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>

// '&' chỉ tới vị trí ô nhớ.
// '*' chỉ tới giá trị của ô nhớ.

int test(){
    int *pointer; //khai báo biến con trỏ.
    int a = 10;

    pointer = &a;// trỏ con trỏ tới địa chỉ ô nhớ của biến a.
    printf("Gía trị của con trỏ là : %d", *pointer); // in ra giá trị của con trỏ ở ô nhớ biến a.

    *pointer=20; // Thay đổi giá trị của con trỏ a.

    int arrInt[5] = {20, 50, 70, 10, 25}; // Khai báo 1 mảng các số có kiểu dữ liệu int.

    p = &arrInt[0]; // Trỏ con trỏ tới vị trí ô nhớ đầu tiên trong mảng.

    *pointer = 100; // Thay đổi giá trị ô nhớ đầu tiên bằng 100.

    p++; // Tăng vị trí con trỏ lên 1.

    *p = 200; // Thay giá trị con trỏ tại vị trí ô nhớ thứ 2 bằng 200.
    printf("Gía trị phần tử 2 là: %d", arrInt[1]); // In ra giá trị con trỏ tại vị trí thứ 2.


}


int main() {
// Nhập vào 10 phần tử của nảng và in ra

     int *p;
    int arrayInt[10];
    p = &arrayInt[0];  // =arrayInt  -> tên của mảng là con trỏ trỏ tới phần tử đầu tiên.
    // p++ trỏ con trỏ xuống vị trí bộ nhớ ngay sau đó.
    for (int i = 0; i < 10; i++) {
        printf("Nhập giá trị phần tử thứ %d :", i+1);
        scanf("%d", p); // ko dùng & vì con trỏ p đang trỏ tớ vị trí ô nhớ đó r.
        p++;
    }

    // in mang theo index
    for (int j = 0; j < 10; j++) {
        printf("%d - ", arrayInt[j]);
    }

    //in theo con trỏ
    p--;
    for (int k = 0; k < 10; ++k) {
        printf("%d; ", *p);
        p--;
    }

    return 0;
}