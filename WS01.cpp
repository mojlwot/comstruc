#include<stdio.h>
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;

    functionM();
    /* ถูก
    functionM ไม่รับพารามิเตอร์ เรียกได้ แต่ไม่ได้รับค่า return มาใช้งาน */

    a = functionM();
    /* ไม่ผิด ทางsyntax
    functionM คืนค่า double แต่ a เป็น int ค่าทศนิยมจะถูกตัดทิ้ง */

    b = functionN(a, b);
    /* ผิด
    functionN ต้องการ (int, double) แต่ b เป็น int ไม่ใช่ double */

    r = functionO(r, a, s, b);
    /* ถูก
    ชนิดข้อมูลพารามิเตอร์ตรงทั้งหมด functionO คืนค่า double เก็บใน r ได้ */

    s = functionP(a, b, c, d, e);
    /* ผิด 
    functionP รับพารามิเตอร์ 4 ตัว แต่ส่งมา 5 ตัว */

    u = functionM();
    /* ถูก 
    functionM คืนค่า double u เป็น double */

    c = d + functionN(r, s);
    /* ผิด 
    functionN ต้องการพารามิเตอร์ตัวแรกเป็น int แต่ r เป็น double */

    t = s * functionO(r, a, r, a);
    /* ถูก 
    functionO รับ (double, int, double, int) ผลลัพธ์เป็น double คูณกับ s (double) เก็บใน t (double) */

    a = v + functionP(r, s, t, t);
    /* ผิด
    functionP ต้องการ int ทั้งหมดแต่ r, s, t เป็น double และผลลัพธ์เป็น double แต่เก็บใส่ int a */

    functionP(functionN(a, a), s, t, t+r);
    /* ผิด
    functionN(a, a) พารามิเตอร์ตัวที่สองควรเป็น double functionP ต้องการ int แต่ s, t, t+r เป็น double
    และไม่รับค่า return */

    v = functionP(functionN(a, a), s, t, t+r);
    /* ผิด
    functionN(a, a) พารามิเตอร์ตัวที่สองควรเป็น double functionP ต้องการ int แต่ s, t, t+r เป็น double
    และไม่รับค่า return แม้ v จะเป็น double แต่พารามิเตอร์ไม่ถูกต้อง */

    return 0;
}
