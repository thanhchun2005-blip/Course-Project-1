# Mini_Parking - Hệ Thống Đỗ Xe Thông Minh ESP32

## Giới thiệu
Dự án **Mini_Parking** là hệ thống bãi đỗ xe thông minh sử dụng vi điều khiển **ESP32**, tích hợp các công nghệ:
- 📡 **RFID** – Nhận diện thẻ xe ra/vào
- 🔢 **Keypad** – Nhập mã PIN xác thực
- 📟 **LCD I2C** – Hiển thị thông tin trạng thái
- 🚗 **Cảm biến siêu âm** – Phát hiện xe tại vị trí đỗ
- 🔒 **Servo Gate** – Điều khiển barrier tự động
- 💾 **Flash (Preferences)** – Lưu trữ dữ liệu không mất khi mất điện

---

## Cấu trúc dự án
```
Mini_Parking/
├── Smart_Parking_ESP32/
│   ├── Smart_Parking_ESP32.ino   # File chính
│   ├── Config.h                  # Cấu hình chân GPIO và hằng số
│   ├── Database.h                # Lưu trữ dữ liệu thẻ (Flash)
│   ├── System_Logic.h            # Logic điều phối hệ thống
│   ├── RFID_Scanner.h            # Quét và xử lý thẻ RFID
│   ├── Display.h                 # Điều khiển LCD
│   ├── Gates.h                   # Điều khiển barrier/servo
│   ├── Keypad_Input.h            # Đọc bàn phím số
│   └── Sensors.h                 # Đọc cảm biến siêu âm
├── flowchart_yeu_cau_he_thong.drawio  # Sơ đồ luồng hệ thống
├── PowerPoint_SmartParking.md         # Tài liệu thuyết trình
└── .gitignore
```

---

## Yêu cầu phần cứng
| Linh kiện | Số lượng |
|---|---|
| ESP32 DevKit | 1 |
| Module RFID MFRC522 | 1 |
| Thẻ RFID / Key fob | Tùy ý |
| LCD 16x2 I2C | 1 |
| Keypad 4x4 | 1 |
| Cảm biến siêu âm HC-SR04 | 2+ |
| Servo SG90 | 2 |
| LED chỉ thị | Tùy ý |

---

## Thư viện cần cài (Arduino IDE)
- `MFRC522` – RFID reader
- `LiquidCrystal_I2C` – LCD I2C
- `Keypad` – Bàn phím ma trận
- `Preferences` – Flash storage (built-in ESP32)
- `ESP32Servo` – Điều khiển servo

---

## Cách nạp firmware
1. Mở **Arduino IDE**, cài board **ESP32** qua Board Manager
2. Cài các thư viện trên
3. Mở file `Smart_Parking_ESP32/Smart_Parking_ESP32.ino`
4. Chọn board: `ESP32 Dev Module`
5. Nạp code vào board

---

## Tác giả
Dự án học tập – Đồ án 1
