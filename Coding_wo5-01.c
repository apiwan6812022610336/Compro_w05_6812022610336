#include <stdio.h>

int main() {
    
    // ประกาศตัวแปรเก็บอักษรแรกของชื่อเล่น
    char name = 'a';

    // ประกาศตัวแปรเก็บอายุ
    int age = 18;

    // ประกาศตัวแปรเก็บน้ำหนัก
    float weight = 90.5;

    // บรรทัดแรก
    printf("Student %c is %d years old.\n", name, age);

    //บรรทัดที่สอง
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}