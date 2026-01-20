/******************************************************************************
 * Họ và tên: [Trương Đức Vũ]
 * MSSV:      [PS49293]
 * Lớp:       [COM108]
 *****************************************************************************/

#include <stdio.h>

int main(){
        float diem;
    printf("Nhập điểm số: ");
    scanf("%f", &diem);
    if(diem<0 || diem>10)
    printf("không có kết quả");
    else if(diem>=9)
    printf("Học lực xuất sắc");
   else if(diem>=9)
    printf("Học lực xuất sắc");
  else if(diem>=8)
    printf("Học lực giỏi");
      else if(diem>=6.5)
    printf("Học lực khá");
      else if(diem>=5)
    printf("Học lực trung bình");
      else if(diem>=3.5)
    printf("Học lực yếu");
    else
    printf("Học lực kém");

    return 0;
}