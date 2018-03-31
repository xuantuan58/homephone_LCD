# homephone_LCD
- Thư viện LCD cho homephone / Gphone 
- Thư viện được port từ Repo của Nhatthanh228
- Đươc thêm vào LCD pin file
- Thêm example file


# Để sử dụng chỉ cần tải file zip về. 
* Trong Menu Arduino chọn Sketch -> Include Library -> Add Zip và chọn zip vừa download.
* Vào File -> Sample -> Homephone_LCD -> Basic

# Hướng dẫn nối pins
```
// Pin  |   Chuc nang       |   TIVA C
//------------------------------------------
// 1    |    GND            |   GND
// 2    |    RST            |   PE1
// 3    |    SCK            |   PD2
// 4    |    A0(C/D)        |   PD3
// 5    |    LED K+ (3.3V)  |   3.3V
// 6    |    LED A (GND)    |   GND
// 7    |    SDA            |   PD1
// 8    |    CS             |   PE2
// 9    |    VCC            |   3.3V
// 10   |    GND            |   GND
```
