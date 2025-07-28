#include <stdio.h> // ไลบารี่
#include <string.h>  // ไลบารี่

int main() {

    // ประกาศตัวแปรสำหรับข้อมูลส่วนบุคคล
    char name[31];   // ชื่อ (string, ขนาด 30 ตัวอักษร + 1 สำหรับ null terminator)
    int age;         // อายุ (integer)
    float height;    // ส่วนสูง (float)

    printf("ป้อนชื่อ อายุ ส่วนสูง (เช่น John 18 167.5): "); // เเสดงข้อความแนะนำให้ป้อนข้อมูล
    
    scanf("%30s %d %f", name, &age, &height); // scanf จะอ่านชื่อ, อายุ, และส่วนสูง

    // ประกาศตัวแปรสำหรับข้อมูลผลการเรียน
    char subject_name[31]; // ชื่อวิชา (string)
    float grade_value;     // เกรดที่ได้ (float)
    char grade_symbol;     // ตัวอักษรแทนเกรด (char)

    // บรรทัดที่ 2: รับข้อมูลผลการเรียน
    printf("ป้อนชื่อวิชา เกรดที่ได้ และตัวอักษรแทนเกรด (เช่น Math 3.50 A): "); // แสดงข้อความแนะนำให้ป้อนข้อมูล

    scanf("%30s %f %c", subject_name, &grade_value, &grade_symbol); // scanf จะอ่านชื่อวิชา, เกรดที่ได้, และตัวอักษรแทนเกรด


    printf("%c is %d years old and %.1f centimeters tall.\n", name[0], age, height); 
    // แสดงตัวอักษรพิมพ์ใหญ่ตัวเเรก, อายุ, ส่วนสูง
    // %c สำหรับตัวอักษร, %d สำหรับ integer, %.1f สำหรับ float ทศนิยม 1 ตำแหน่ง

    printf("In subject %c, %c got %.2f which is symbolized as '%c'.\n",
           subject_name[0], name[0], grade_value, grade_symbol);   
    // แสดงชื่อวิชา, ตัวอักษรพิมพ์ใหญ่ตัวแรกของชื่อเล่น, เกรดที่ได้, และตัวอักษรแทนเกรด
    // %c สำหรับตัวอักษร, %.2f สำหรับ float ทศนิยม 2 ตำแหน่ง


    return 0; // บอกว่าโปรแกรมทำงานเสร็จสมบูรณ์
}