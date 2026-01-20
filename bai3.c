/******************************************************************************
 * Họ và tên: [Trương Đức Vũ]
 * MSSV:      [PS49293]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    int soDien;
    float tienDien;
    int donGia = 3000;
    printf("Nhập số tiền điện tiêu thụ hàng tháng: ");
    scanf("%d", &soDien);
    if(soDien <0)
    printf("số điện không hợp lệ");
    else
    tienDien = soDien * donGia;
    printf("Số tiền cần phải đóng là: %.3fvnd\n", tienDien);    
    return 0; 

}