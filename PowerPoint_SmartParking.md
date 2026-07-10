# 📊 POWERPOINT BẢO VỆ ĐỒ ÁN
# HỆ THỐNG GIỮ XE THÔNG MINH

> **25 slides** — Mỗi slide gồm: 📋 **Nội dung slide** (ít chữ) + 🎤 **Script thuyết trình** (đầy đủ)
> Logic: Giới thiệu → Mục tiêu → **Yêu cầu hệ thống (Chức năng + Phi chức năng + Ràng buộc)** → Thiết kế (mới chọn linh kiện) → Kết quả → Kết luận

---

## SLIDE 1 — TRANG BÌA

### 📋 Nội dung slide:
```
HỆ THỐNG GIỮ XE THÔNG MINH

[LOGO TRƯỜNG]

Sinh viên thực hiện: [Tên bạn]
Giáo viên hướng dẫn: [Tên thầy/cô]
[Tên trường] — [Năm học]
```
> 🖼️ **Hình ảnh:** Ảnh mô hình thực tế làm background mờ, hoặc ảnh bãi xe hiện đại

---
### 🎤 Script:
*"Kính chào thầy cô và các bạn. Hôm nay em xin được trình bày đề tài đồ án: Hệ thống giữ xe thông minh. Đây là một hệ thống nhúng tự động hóa quá trình quản lý xe ra vào bãi giữ xe, từ nhận diện xe, kiểm soát cổng cho đến theo dõi tình trạng chỗ đậu. Kính mời thầy cô và các bạn theo dõi."*

---
---

## SLIDE 2 — MỤC LỤC

### 📋 Nội dung slide:
```
NỘI DUNG TRÌNH BÀY

  01  Giới thiệu đề tài
  02  Mục tiêu
  03  Yêu cầu hệ thống
  04  Thiết kế hệ thống
  05  Kết quả thực hiện
  06  Kết luận & Hướng phát triển
```
> 🖼️ **Hình ảnh:** 6 số tròn màu sắc dạng card hoặc timeline ngang

---
### 🎤 Script:
*"Bài trình bày của em gồm 6 phần. Đầu tiên là giới thiệu về bối cảnh và vấn đề thực tiễn. Tiếp theo là mục tiêu và yêu cầu của hệ thống. Phần trọng tâm là thiết kế hệ thống — bao gồm lựa chọn linh kiện và xây dựng phần mềm. Sau đó là kết quả thực hiện và kết luận."*

---
---

## ══════════ CHƯƠNG 1: GIỚI THIỆU ══════════

## SLIDE 3 — THỰC TRẠNG VẤN ĐỀ

### 📋 Nội dung slide:
```
VẤN ĐỀ THỰC TIỄN

🚗  Phương tiện cá nhân ngày càng tăng
📋  Quản lý bãi xe thủ công → Chậm, dễ sai sót
⏳  Thời gian chờ dài → Ùn tắc tại cổng
📊  Không có dữ liệu → Không kiểm soát được
    lượng xe vào/ra
```
> 🖼️ **Hình ảnh:** Ảnh bãi xe đông đúc, hoặc cảnh xếp hàng dài trước cổng (lấy từ internet)

---
### 🎤 Script:
*"Xuất phát từ thực tiễn, số lượng phương tiện cá nhân tại Việt Nam tăng rất nhanh những năm gần đây. Tuy nhiên hầu hết bãi xe quy mô nhỏ vẫn quản lý theo kiểu thủ công — nhân viên phát phiếu giấy, ghi chép tay, thu tiền trực tiếp. Điều này dẫn đến nhiều bất cập: xe phải chờ lâu, nhầm lẫn dễ xảy ra, không có dữ liệu để kiểm soát số xe ra vào. Đây là vấn đề mà đề tài của em muốn giải quyết."*

---
---

## SLIDE 4 — GIỚI THIỆU GIẢI PHÁP

### 📋 Nội dung slide:
```
GIẢI PHÁP ĐỀ XUẤT

HỆ THỐNG GIỮ XE THÔNG MINH

  ✅  Tự động nhận diện xe ra/vào
  ✅  Tự động điều khiển cổng
  ✅  Theo dõi chỗ đậu xe real-time
  ✅  Lưu trữ thông tin xe

  → Không cần nhân viên trực tiếp tại cổng
  → Không cần phiếu giấy
```
> 🖼️ **Hình ảnh:** Sơ đồ so sánh: Trước (thủ công) ↔ Sau (tự động), dạng 2 cột

---
### 🎤 Script:
*"Giải pháp em đề xuất là xây dựng hệ thống giữ xe thông minh tự động hóa toàn bộ quy trình. Hệ thống tự nhận diện xe khi đến cổng, tự mở đóng cổng mà không cần nhân viên can thiệp, đồng thời theo dõi liên tục tình trạng từng chỗ đậu và lưu lại thông tin xe. Mục tiêu là thay thế hoàn toàn phiếu giấy và giảm thiểu sự tham gia thủ công trong khâu kiểm soát cổng."*

---
---

## ══════════ CHƯƠNG 2: MỤC TIÊU ══════════

## SLIDE 5 — MỤC TIÊU

### 📋 Nội dung slide:
```
MỤC TIÊU ĐỀ TÀI

🎯  Xây dựng mô hình hệ thống giữ xe thông minh
    tự động hóa quy trình vào/ra bãi xe

    1. Nhận diện xe bằng thẻ từ
    2. Tự động mở/đóng cổng
    3. Giám sát chỗ đậu theo thời gian thực
    4. Lưu trữ thông tin xe
    5. Giao diện hiển thị & phản hồi người dùng
```
> 🖼️ **Hình ảnh:** Sơ đồ tổng quan chức năng dạng vòng tròn (5 tính năng quanh tâm "Bãi xe thông minh")

---
### 🎤 Script:
*"Mục tiêu đề tài là xây dựng một mô hình hệ thống giữ xe thông minh hoàn chỉnh với 5 chức năng cốt lõi. Một là nhận diện xe thông qua thẻ từ thay vì phiếu giấy. Hai là tự động mở đóng cổng vào và cổng ra. Ba là giám sát tình trạng từng chỗ đậu theo thời gian thực. Bốn là lưu trữ thông tin của từng xe trong bãi. Năm là có giao diện hiển thị để người dùng biết trạng thái hệ thống và phản hồi âm thanh cho mọi thao tác."*

---
---

## ══════════ CHƯƠNG 3: YÊU CẦU HỆ THỐNG ══════════

## SLIDE 6 — YÊU CẦU CHỨC NĂNG — VÀO BÃI

### 📋 Nội dung slide:
```
YÊU CẦU CHỨC NĂNG: XE VÀO BÃI

  Luồng bình thường:
  1. Nhận diện thẻ → Kiểm tra chỗ trống
  2. Nhập biển số xe qua bàn phím
  3. Xác nhận → Mở cổng vào
  4. IR phát hiện xe qua → Đóng cổng
  5. Lưu thông tin & cập nhật chỗ trống

  Xử lý ngoại lệ:
  🚫  Bãi đầy → Từ chối, thông báo
  🔄  Thẻ đã có trong bãi → Không cho vào
  ⏰  Timeout 15s / Cổng mở 10s → Tự reset
```
> 🖼️ **Hình ảnh:** Flowchart luồng VÀO (file .drawio đã vẽ) — xuất ảnh và chèn vào slide

---
### 🎤 Script:
*"Bắt đầu chương Yêu cầu hệ thống. Chương này gồm 3 phần: yêu cầu chức năng, yêu cầu phi chức năng và ràng buộc hệ thống. Trước tiên là yêu cầu chức năng cho luồng xe vào. Hệ thống nhận diện xe khi đến cổng qua thẻ từ. Nếu còn chỗ trống, cho phép nhập biển số — nhập từng ký tự, xóa được nếu nhầm. Sau khi xác nhận bằng phím #, cổng tự động mở. Cảm biến IR theo dõi và đóng cổng khi xe đã vào hẳn. Cuối cùng lưu thông tin và cập nhật màn hình. Về ngoại lệ: nếu bãi đầy thì từ chối ngay; nếu thẻ đã có trong bãi thì không cho vào lần hai; nếu timeout 15 giây không thao tác hoặc cổng mở quá 10 giây xe không qua thì tự reset."*

---
---

## SLIDE 7 — YÊU CẦU CHỨC NĂNG — RA BÃI

### 📋 Nội dung slide:
```
YÊU CẦU CHỨC NĂNG: XE RA BÃI

  Luồng bình thường:
  1. Nhận diện thẻ → Tìm trong hệ thống
  2. Hiển thị biển số đã lưu để xác nhận
  3. Nhấn # xác nhận → Mở cổng ra
  4. IR phát hiện xe qua → Đóng cổng
  5. Xóa thông tin & cập nhật chỗ trống

  Xử lý ngoại lệ:
  ❌  Thẻ không hợp lệ → Không mở cổng
  ⏰  Timeout 15s / Cổng mở 10s → Tự reset
```
> 🖼️ **Hình ảnh:** Flowchart luồng RA (file .drawio đã vẽ) — xuất ảnh và chèn vào slide

---
### 🎤 Script:
*"Yêu cầu chức năng cho luồng xe ra. Xe quẹt thẻ tại cổng ra, hệ thống tìm trong database và hiển thị biển số của xe đó để tài xế xác nhận đúng xe. Nhấn thăng, cổng ra mở. Cảm biến IR theo dõi xe đi qua và đóng cổng tự động. Sau khi xe ra hoàn toàn, thông tin bị xóa và chỗ đó được giải phóng. Về ngoại lệ: thẻ không tồn tại trong database thì không mở cổng; timeout 15 giây không thao tác hoặc cổng mở quá 10 giây thì tự reset về trạng thái chờ."*

---
---

## SLIDE 8 — YÊU CẦU PHI CHỨC NĂNG

### 📋 Nội dung slide:
```
YÊU CẦU PHI CHỨC NĂNG

⚡  HIỆU NĂNG
    Phản hồi màn hình tức thì sau mỗi thao tác
    Hệ thống không bị treo — luôn có lối thoát

🔒  ĐỘ TIN CẬY
    Dữ liệu KHÔNG mất khi cúp điện
    Mọi lỗi đều tự phục hồi về trạng thái IDLE

🔔  TÍNH THÂN THIỆN
    Âm thanh phản hồi phân biệt OK / Lỗi
    Hiển thị hướng dẫn rõ ràng trên LCD

🛠️  KHẢ NĂNG BẢO TRÌ
    Code module hóa, dễ sửa và mở rộng
```
> 🖼️ **Hình ảnh:** 4 icon lớn dạng card dọc hoặc 2×2

---
### 🎤 Script:
*"Phần thứ hai là yêu cầu phi chức năng — tức là hệ thống phải hoạt động như thế nào, không phải làm gì. Thứ nhất về hiệu năng: màn hình phải phản hồi tức thì, và hệ thống không được bị treo — nghĩa là mọi luồng đều phải có lối thoát về IDLE. Thứ hai về độ tin cậy: dữ liệu phải tồn tại sau khi mất điện và mọi tình huống lỗi đều phải tự phục hồi — không cần người can thiệp. Thứ ba về tính thân thiện: âm thanh phân biệt thành công và lỗi, LCD luôn có hướng dẫn rõ. Cuối cùng, code phải có cấu trúc module hóa để dễ bảo trì."*

---
---

## SLIDE 9 — RÀNG BUỘC HỆ THỐNG

### 📋 Nội dung slide:
```
RÀNG BUỘC HỆ THỐNG

🔧  CÔNG NGHỆ & KỸ THUẬT
    Nền tảng: Hệ thống nhúng (Embedded System)
    Ngôn ngữ lập trình: C/C++
    Hoạt động offline hoàn toàn (không Internet)

💰  TÀI NGUYÊN & CHI PHÍ
    Giới hạn khắt khe về tài nguyên (RAM, Flash)
    Chi phí linh kiện thấp, dễ tiếp cận
    Quy mô: Mô hình thu nhỏ (Prototype)

🌍  MÔI TRƯỜNG & VẬN HÀNH
    Nguồn điện thấp an toàn (5V DC)
    Giao tiếp qua các chuẩn phần cứng phổ thông
    Vận hành trong điều kiện nhiệt độ phòng
```
> 🖼️ **Hình ảnh:** Bảng 3 nhóm (Công nghệ, Tài nguyên, Môi trường) hoặc 3 card icon

---
### 🎤 Script:
*"Phần thứ ba là ràng buộc hệ thống — đây là những giới hạn chung về mặt tổ chức, kỹ thuật và chi phí mà dự án phải tuân thủ trước khi đi vào thiết kế chi tiết. Về công nghệ: hệ thống được phát triển trên nền tảng nhúng, sử dụng ngôn ngữ lập trình C/C++, và bắt buộc phải hoạt động độc lập (offline) để không bị phụ thuộc vào mạng. Về tài nguyên và chi phí: do tính chất là đồ án môn học, hệ thống phải hoạt động trong giới hạn bộ nhớ hẹp, ngân sách linh kiện thấp, dễ tìm kiếm trên thị trường, và xây dựng ở quy mô mô hình prototype. Cuối cùng về môi trường: yêu cầu sử dụng nguồn điện áp thấp an toàn và hoạt động trong điều kiện nhiệt độ phòng bình thường."*

---
---

## ══════════ CHƯƠNG 4: THIẾT KẾ HỆ THỐNG ══════════

## SLIDE 10 — LỰA CHỌN VI ĐIỀU KHIỂN

### 📋 Nội dung slide:
```
VI ĐIỀU KHIỂN: ESP32

[ẢNH ESP32 DevKit]

  ✅  32-bit dual-core, 240 MHz
  ✅  520 KB RAM — đủ cho ứng dụng nhúng phức tạp
  ✅  Flash NVS tích hợp — lưu dữ liệu không mất điện
  ✅  Nhiều GPIO — đủ kết nối tất cả thiết bị ngoại vi
  ✅  Hỗ trợ SPI, I2C sẵn — phù hợp RFID và LCD
  ✅  Chi phí thấp, phổ biến, có nhiều thư viện
```
> 🖼️ **Hình ảnh:** Ảnh ESP32 DevKit V1 thực tế bên trái, bảng thông số bên phải

---
### 🎤 Script:
*"Bây giờ chúng ta đi vào phần thiết kế — đây là nơi em quyết định dùng linh kiện và công nghệ gì. Về vi điều khiển trung tâm, em chọn ESP32 DevKit. Lý do: ESP32 có hiệu suất cao với CPU 32-bit dual-core 240 MHz, bộ nhớ RAM 520KB đủ để chạy logic phức tạp. Quan trọng nhất là ESP32 có vùng nhớ Flash NVS tích hợp, cho phép lưu dữ liệu mà không mất khi mất điện — đây là yêu cầu phi chức năng đã đề ra. Số lượng GPIO cũng đủ để kết nối toàn bộ thiết bị ngoại vi. Chi phí thấp và có nhiều thư viện hỗ trợ là điểm cộng về mặt thực tiễn."*

---
---

## SLIDE 11 — LỰA CHỌN MODULE NHẬN DIỆN & ĐẦU VÀO

### 📋 Nội dung slide:
```
MODULE NHẬN DIỆN XE & NHẬP LIỆU

RFID RC522                      Keypad 4x4
──────────────                  ──────────────
[ẢNH RC522 + THẺ]              [ẢNH KEYPAD 4x4]

Đọc thẻ Mifare 13.56MHz         16 phím bấm
Giao tiếp SPI — tốc độ cao      Nhập biển số xe
UID duy nhất cho mỗi thẻ        Xác nhận / Hủy thao tác
Tầm đọc ~3–5cm
```
> 🖼️ **Hình ảnh:** 2 ảnh linh kiện đặt cạnh nhau, bố cục 2 cột

---
### 🎤 Script:
*"Để nhận diện xe, em chọn module RFID RC522 sử dụng sóng 13.56 MHz, đọc thẻ Mifare — mỗi thẻ có một UID duy nhất, giao tiếp qua chuẩn SPI cho tốc độ nhanh. Tầm đọc khoảng 3 đến 5 centimeter, phù hợp cho cổng xe. Để nhập biển số, em dùng bàn phím ma trận 4x4 với 16 phím — đủ để nhập số, chữ, đồng thời phím sao dùng để xóa và phím thăng để xác nhận. Đây là cách đơn giản và rẻ tiền thay cho màn hình cảm ứng."*

---
---

## SLIDE 12 — LỰA CHỌN CẢM BIẾN & HIỂN THỊ

### 📋 Nội dung slide:
```
CẢM BIẾN & HIỂN THỊ

Cảm biến hồng ngoại IR         LCD 16x2 I2C
───────────────────             ────────────────
[ẢNH IR SENSOR]                [ẢNH LCD 16x2]

Phát hiện vật cản              Hiển thị 2 hàng × 16 ký tự
Phân biệt xe đi qua            Giao tiếp I2C (chỉ 2 dây)
Theo dõi chỗ đậu               Thông báo trạng thái hệ thống
Giá rẻ, độ bền cao             Dễ đọc trong điều kiện thường
```
> 🖼️ **Hình ảnh:** 2 ảnh linh kiện, bố cục 2 cột

---
### 🎤 Script:
*"Để phát hiện xe đi qua cổng và giám sát chỗ đậu, em dùng cảm biến hồng ngoại IR — loại phổ biến, giá rẻ, hoạt động ổn định, phân biệt có hay không có vật cản qua tín hiệu HIGH LOW. Tổng cộng có 5 cảm biến — 2 cái ở cổng và 3 cái ở các ô đậu. Màn hình hiển thị em chọn LCD 16x2 giao tiếp I2C — chỉ cần 2 dây kết nối là SDA và SCL, tiết kiệm GPIO. Màn hình đủ để hiển thị số chỗ trống, trạng thái từng ô và hướng dẫn thao tác cho người dùng."*

---
---

## SLIDE 13 — LỰA CHỌN CỔNG & PHẢN HỒI ÂM THANH

### 📋 Nội dung slide:
```
ĐIỀU KHIỂN CỔNG & ÂM THANH

Servo SG90                      Buzzer
──────────────                  ──────────
[ẢNH SERVO SG90]               [ẢNH BUZZER]

Điều khiển cổng vào & ra        Phản hồi âm thanh
Góc quay 0–180°                 1 tiếng → Thành công
Mở:  0°  | Đóng: 90°           3 tiếng → Lỗi / Cảnh báo
Nhỏ gọn, đủ lực cho mô hình    Không chặn xử lý chính
```
> 🖼️ **Hình ảnh:** 2 ảnh linh kiện, bố cục 2 cột

---
### 🎤 Script:
*"Để điều khiển cổng, em dùng servo SG90 — loại servo nhỏ phổ biến, điều khiển góc quay từ 0 đến 180 độ. Trong hệ thống, góc 0 độ tương ứng cổng mở, 90 độ là cổng đóng. Có 2 servo: một cho cổng vào, một cho cổng ra. Về âm thanh, em thêm buzzer để phản hồi ngay lập tức — 1 tiếng beep khi thành công, 3 tiếng khi có lỗi. Quan trọng là buzzer được lập trình theo cơ chế non-blocking — nghĩa là phát âm thanh mà không làm chậm hay dừng các xử lý khác của hệ thống."*

---
---

## SLIDE 14 — SƠ ĐỒ KHỐI PHẦN CỨNG

### 📋 Nội dung slide:
```
SƠ ĐỒ KHỐI HỆ THỐNG

  ┌─────────────┐    ┌────────────────────┐
  │  RFID RC522 │    │                    │─── LCD 16x2
  │  Keypad 4x4 │───►│                    │
  │  IR Cổng V  │    │      ESP32         │─── Servo Vào
  │  IR Cổng R  │    │  (Xử lý trung tâm) │─── Servo Ra
  │  IR Slot×3  │    │                    │
  └─────────────┘    │                    │─── Buzzer
      (Đầu vào)      └────────────────────┘
                            (Đầu ra)
```
> 🖼️ **Hình ảnh:** Sơ đồ khối vẽ PowerPoint — nhóm Đầu vào (màu xanh) → ESP32 (màu vàng) → Đầu ra (màu đỏ)

---
### 🎤 Script:
*"Tổng hợp lại, đây là sơ đồ khối của toàn bộ hệ thống. ESP32 đóng vai trò xử lý trung tâm, kết nối với hai nhóm thiết bị. Nhóm đầu vào gồm: RFID đọc thẻ xe, keypad nhận thao tác người dùng, và 5 cảm biến IR giám sát cổng và chỗ đậu. Nhóm đầu ra gồm: LCD hiển thị thông tin, 2 servo điều khiển cổng và buzzer phát âm thanh phản hồi. Mọi logic điều phối đều nằm trong ESP32."*

---
---

## SLIDE 15 — SƠ ĐỒ KẾT NỐI CHÂN

### 📋 Nội dung slide:
```
KẾT NỐI PHẦN CỨNG

Module            Chân ESP32     Giao tiếp
──────────────    ──────────     ─────────
RFID RC522        GPIO 5,18,19,23    SPI
LCD 16x2          GPIO 21, 22        I2C
Keypad 4x4        GPIO 13,12,14,27   GPIO
                  GPIO 26,25,33,32
IR Cổng Vào       GPIO 34            Digital
IR Cổng Ra        GPIO 35            Digital
IR Slot 1,2,3     GPIO 4, 3, 1       Digital
Servo Vào         GPIO 15            PWM
Servo Ra          GPIO 17            PWM
Buzzer            GPIO 16            Digital
```
> 🖼️ **Hình ảnh:** Sơ đồ mạch thực tế (Fritzing) hoặc ảnh chụp thực tế bảng mạch kết nối

---
### 🎤 Script:
*"Đây là bảng kết nối cụ thể. RFID dùng 4 chân giao tiếp SPI. LCD chỉ cần 2 chân SDA và SCL cho I2C, địa chỉ 0x27. Keypad dùng 8 GPIO — 4 cho hàng và 4 cho cột. Các cảm biến IR đều là tín hiệu digital đơn giản. Servo dùng PWM. Lưu ý GPIO 34 và 35 là chân analog-only của ESP32, chỉ đọc được, không ghi được, đây là điểm cần chú ý khi kết nối cảm biến IR cổng."*

---
---

## SLIDE 16 — THIẾT KẾ PHẦN MỀM — MODULE HÓA

### 📋 Nội dung slide:
```
KIẾN TRÚC PHẦN MỀM — 9 MODULE

Smart_Parking_ESP32.ino    ← Khởi động & vòng lặp
├── Config.h               ← Cấu hình & hằng số
├── Database.h             ← Lưu/đọc dữ liệu
├── Display.h              ← Màn hình LCD
├── RFID_Scanner.h         ← Đọc thẻ
├── Keypad_Input.h         ← Bàn phím
├── Gates.h                ← Điều khiển cổng
├── Sensors.h              ← Cảm biến & Buzzer
└── System_Logic.h         ← Logic trung tâm
```
> 🖼️ **Hình ảnh:** Sơ đồ cây file dạng dendrogram, tô màu theo nhóm (Input/Output/Core)

---
### 🎤 Script:
*"Về phần mềm, em thiết kế theo nguyên tắc module hóa — toàn bộ code chia thành 9 file với trách nhiệm rõ ràng. Config.h chứa mọi định nghĩa chân và hằng số — muốn thay đổi cấu hình chỉ cần sửa file này. Mỗi module phần cứng có một file header riêng: Database, Display, RFID, Keypad, Gates, Sensors. File System_Logic chứa toàn bộ logic điều phối máy trạng thái. File .ino chỉ làm nhiệm vụ khởi tạo và gọi vào vòng lặp chính. Ưu điểm lớn của thiết kế này là dễ bảo trì và mở rộng."*

---
---

## SLIDE 17 — MÁY TRẠNG THÁI

### 📋 Nội dung slide:
```
MÁY TRẠNG THÁI — 5 TRẠNG THÁI

              [STATE_IDLE]
             /             \
   Thẻ MỚI + còn chỗ    Thẻ ĐÃ CÓ trong DB
            ↓                      ↓
  ENTRANCE_WAIT_KEYPAD    EXIT_WAIT_CONFIRM
            ↓                      ↓
  ENTRANCE_GATE_OPEN      EXIT_GATE_OPEN
            ↓                      ↓
         [IDLE] ←──────────── [IDLE]

  Mọi timeout/lỗi → về IDLE ngay lập tức
```
> 🖼️ **Hình ảnh:** Sơ đồ state machine vẽ PowerPoint, diamond cho decision, box cho state, arrow cho transition

---
### 🎤 Script:
*"Logic điều phối sử dụng mô hình máy trạng thái với 5 trạng thái. Mọi thứ bắt đầu từ IDLE — trạng thái chờ mặc định. Khi phát hiện thẻ RFID, hệ thống kiểm tra thẻ trong database. Nếu thẻ mới và còn chỗ, chuyển sang ENTRANCE_WAIT_KEYPAD để chờ nhập biển số, rồi ENTRANCE_GATE_OPEN khi mở cổng. Nếu thẻ đã có trong database — tức xe này đang trong bãi — chuyển sang EXIT_WAIT_CONFIRM rồi EXIT_GATE_OPEN khi xác nhận ra. Điểm quan trọng: mọi tình huống lỗi hoặc timeout đều kết thúc bằng cách quay về IDLE — hệ thống luôn có lối thoát an toàn."*

---
---

## SLIDE 18 — LƯU TRỮ DỮ LIỆU

### 📋 Nội dung slide:
```
LƯU TRỮ DỮ LIỆU — FLASH NVS

Thư viện: ESP32 Preferences
Vùng nhớ: NVS Flash (không mất khi mất điện)

  KEY         GIÁ TRỊ
  ────────    ──────────────────────────
  count       Số xe hiện tại trong bãi
  t0, t1, t2  UID thẻ RFID của xe 1, 2, 3
  p0, p1, p2  Biển số xe 1, 2, 3

→ Khi khởi động lại: tự đọc lại dữ liệu cũ
```
> 🖼️ **Hình ảnh:** Bảng minh họa dữ liệu lưu thực tế (ví dụ: t0=A3F2BC01, p0=59A-12345)

---
### 🎤 Script:
*"Về lưu trữ dữ liệu, em sử dụng thư viện Preferences của ESP32 để ghi vào vùng NVS Flash — đây là vùng nhớ không bị xóa khi cúp điện, đáp ứng yêu cầu đã đề ra từ đầu. Cấu trúc lưu trữ đơn giản: một trường count biết có bao nhiêu xe, rồi cặp tag-plate cho từng xe. Khi ESP32 khởi động lại sau mất điện, hệ thống tự đọc lại toàn bộ dữ liệu đã lưu, đảm bảo không mất thông tin xe đang trong bãi."*

---
---

## ══════════ CHƯƠNG 5: KẾT QUẢ ══════════

## SLIDE 19 — MÔ HÌNH THỰC TẾ

### 📋 Nội dung slide:
```
     MÔ HÌNH THỰC TẾ




          [ ẢNH MÔ HÌNH TOÀN CẢNH ]




```
> 🖼️ **Hình ảnh:** Ảnh mô hình toàn cảnh CHIẾM TOÀN BỘ SLIDE — chỉ để tên slide nhỏ phía trên

---
### 🎤 Script:
*"Đây là mô hình thực tế mà em đã thi công. Các bạn có thể thấy toàn bộ hệ thống: ESP32 đặt ở giữa làm não điều khiển, hai cổng vào ra với thanh chắn servo, ba ô đậu xe với cảm biến IR ở mỗi ô, màn hình LCD và module RFID gắn tại vị trí cổng, bàn phím bên cạnh để nhập biển số."*

---
---

## SLIDE 20 — DEMO: XE VÀO BÃI

### 📋 Nội dung slide:
```
DEMO — XE VÀO BÃI

  [ẢNH 1: Quẹt thẻ]        [ẢNH 2: Nhập biển số]



  [ẢNH 3: Cổng mở]         [ẢNH 4: LCD cập nhật]

```
> 🖼️ **Hình ảnh:** 4 ảnh bố cục 2×2 theo từng bước, thêm số thứ tự 1-2-3-4 góc mỗi ảnh

---
### 🎤 Script:
*"Em xin demo theo từng bước. Ảnh một: tài xế quẹt thẻ RFID tại cổng vào, LCD hiển thị 'Nhập biển số'. Ảnh hai: người dùng bấm từng phím trên keypad, ký tự hiện lên màn hình real-time, nhấn sao để xóa nếu nhầm. Ảnh ba: nhấn thăng xác nhận, cổng vào mở ra — servo xoay về 0 độ. Ảnh bốn: sau khi xe đi qua cảm biến IR, cổng tự đóng và LCD cập nhật — số chỗ trống giảm xuống, ô vừa có xe đổi thành X."*

---
---

## SLIDE 21 — DEMO: XE RA BÃI

### 📋 Nội dung slide:
```
DEMO — XE RA BÃI

  [ẢNH 1: Quẹt thẻ cổng ra]   [ẢNH 2: LCD hiển thị biển số]



  [ẢNH 3: Cổng ra mở]          [ẢNH 4: LCD về IDLE — chỗ trống tăng]

```
> 🖼️ **Hình ảnh:** 4 ảnh bố cục 2×2 theo từng bước

---
### 🎤 Script:
*"Luồng ra bãi: tài xế quẹt thẻ tại cổng ra, hệ thống tìm trong database và hiển thị biển số của xe — ví dụ 59A-12345 — để tài xế xác nhận đúng xe mình. Nhấn thăng, cổng ra mở. Xe đi ra qua cảm biến IR, cổng tự đóng, dữ liệu xe bị xóa và LCD cập nhật số chỗ trống tăng lên."*

---
---

## SLIDE 22 — CÁC TRẠNG THÁI LCD

### 📋 Nội dung slide:
```
HIỂN THỊ LCD THEO TỪNG TRẠNG THÁI

  ┌────────────────┐    ┌────────────────┐
  │ Cho TRONG: 2   │    │ Bai Da Day!    │
  │ TrangThai:X 0 0│    │ TrangThai:X X X│
  └── Bình thường ─┘    └──── Bãi đầy ──┘

  ┌────────────────┐    ┌────────────────┐
  │ Nhap bien so:  │    │ BS: 59A-12345  │
  │ 59A-123        │    │ Bam # de mo c. │
  └─── Nhập BS ───┘    └─── Xác nhận ra ┘
```
> 🖼️ **Hình ảnh:** Thay bằng 4 ảnh CHỤP THỰC TẾ màn hình LCD ở 4 trạng thái, bố cục 2×2

---
### 🎤 Script:
*"Màn hình LCD 16x2 là giao diện chính với người dùng. Ở trạng thái bình thường, dòng trên hiển thị số chỗ còn trống, dòng dưới hiển thị trạng thái từng ô — X là có xe, 0 là trống. Khi bãi đầy, dòng trên đổi thành thông báo đầy. Khi đang nhập biển số, LCD hiển thị từng ký tự người dùng vừa bấm. Khi xe ra, hiển thị biển số đã lưu để xác nhận. Mỗi trạng thái có nội dung riêng, rõ ràng, người dùng luôn biết hệ thống đang làm gì."*

---
---

## SLIDE 23 — ĐÁNH GIÁ KẾT QUẢ

### 📋 Nội dung slide:
```
ĐÁNH GIÁ KẾT QUẢ

Chức năng                    Kết quả
───────────────────────      ─────────
Nhận diện thẻ RFID           ✅ Ổn định
Nhập & hiển thị biển số      ✅ Chính xác
Mở/đóng cổng tự động         ✅ Đúng thời điểm
Theo dõi chỗ đậu real-time   ✅ Chính xác
Lưu trữ qua mất điện         ✅ Không mất dữ liệu
Timeout & Failsafe            ✅ Tự reset đúng
Xử lý bãi đầy                ✅ Báo lỗi đúng
Chống đọc thẻ lặp            ✅ Hoạt động tốt
```
> 🖼️ **Hình ảnh:** Bảng đánh giá dạng đẹp, cột trạng thái màu xanh lá tất cả ✅

---
### 🎤 Script:
*"Tổng hợp kết quả kiểm thử, toàn bộ 8 chức năng chính đều đạt yêu cầu. Đọc thẻ RFID ổn định, nhập biển số chính xác có hỗ trợ xóa ký tự, cổng mở đóng đúng thời điểm theo IR, chỗ đậu cập nhật real-time, dữ liệu không mất sau mất điện, cơ chế timeout hoạt động đúng, trường hợp bãi đầy được xử lý rõ ràng và có cơ chế chống đọc thẻ lặp lại."*

---
---

## ══════════ CHƯƠNG 6: KẾT LUẬN ══════════

## SLIDE 24 — KẾT LUẬN & HƯỚNG PHÁT TRIỂN

### 📋 Nội dung slide:
```
KẾT LUẬN

✅  Xây dựng thành công hệ thống giữ xe thông minh
✅  Đáp ứng đầy đủ yêu cầu chức năng đề ra
✅  Code module hóa, dễ bảo trì & mở rộng

HƯỚNG PHÁT TRIỂN

→  Tăng quy mô bãi xe (lưu trữ ngoài)
→  Thêm giao diện Web Dashboard qua WiFi
→  Tích hợp Camera nhận diện biển số tự động
→  Thêm tính năng tính phí gửi xe
```
> 🖼️ **Hình ảnh:** Roadmap hướng phát triển dạng timeline, phần kết luận dạng checklist xanh

---
### 🎤 Script:
*"Qua đề tài này, em đã xây dựng thành công mô hình hệ thống giữ xe thông minh, đáp ứng đầy đủ các yêu cầu chức năng và phi chức năng đã đề ra từ đầu. Kiến trúc code module hóa tạo nền tảng tốt để mở rộng sau này. Về hướng phát triển, có thể mở rộng quy mô bằng cách thêm thẻ nhớ ngoài, tận dụng WiFi sẵn có của ESP32 để xây dựng Web Dashboard quản lý từ xa, tích hợp camera AI để nhận diện biển số tự động thay vì nhập tay, và thêm tính năng tính phí để thành hệ thống thương mại hoàn chỉnh hơn."*

---
---

## SLIDE 25 — CẢM ƠN & HỎI ĐÁP

### 📋 Nội dung slide:
```


      CẢM ƠN THẦY CÔ & CÁC BẠN
         ĐÃ LẮNG NGHE

      🙋  XIN MỜI ĐẶT CÂU HỎI


      [Tên] — [MSSV] — [Email]
```
> 🖼️ **Hình ảnh:** Ảnh mô hình thực tế đẹp làm background mờ, chữ nổi trên nền + màu gradient nhẹ

---
### 🎤 Script:
*"Em xin trân trọng cảm ơn thầy cô và các bạn đã dành thời gian lắng nghe phần trình bày. Đây là kết quả của quá trình học tập và thực hiện, còn nhiều điểm cần hoàn thiện, em rất mong nhận được ý kiến góp ý từ hội đồng. Kính mời thầy cô đặt câu hỏi."*

---
---

# 📌 BẢNG TỔNG HỢP 25 SLIDES

| # | Tên Slide | Loại | Thời gian |
|---|-----------|------|-----------|
| 1 | Trang bìa | Ảnh full | 30 giây |
| 2 | Mục lục | Danh sách | 30 giây |
| **—** | **GIỚI THIỆU** | | |
| 3 | Thực trạng vấn đề | Bullet + ảnh thực tế | 1 phút |
| 4 | Giải pháp đề xuất | Bullet + so sánh | 1.5 phút |
| **—** | **MỤC TIÊU** | | |
| 5 | Mục tiêu đề tài | Danh sách chức năng | 1 phút |
| **—** | **YÊU CẦU HỆ THỐNG** | | |
| 6 | YC chức năng: Vào bãi (+ ngoại lệ) | Flowchart + bullet | 2 phút |
| 7 | YC chức năng: Ra bãi (+ ngoại lệ) | Flowchart + bullet | 2 phút |
| 8 | YC phi chức năng | Card icon 2×2 | 1.5 phút |
| 9 | Ràng buộc hệ thống | Bảng 3 nhóm | 1.5 phút |
| **—** | **THIẾT KẾ HỆ THỐNG** | | |
| 10 | Chọn vi điều khiển ESP32 | Ảnh + bảng thông số | 2 phút |
| 11 | Chọn RFID & Keypad | Ảnh 2 cột | 1.5 phút |
| 12 | Chọn IR & LCD | Ảnh 2 cột | 1.5 phút |
| 13 | Chọn Servo & Buzzer | Ảnh 2 cột | 1.5 phút |
| 14 | Sơ đồ khối phần cứng | Sơ đồ | 2 phút |
| 15 | Sơ đồ kết nối chân | Bảng + ảnh Fritzing | 1.5 phút |
| 16 | Kiến trúc phần mềm | Sơ đồ cây | 1.5 phút |
| 17 | Máy trạng thái | Sơ đồ state machine | 2 phút |
| 18 | Lưu trữ dữ liệu | Bảng | 1.5 phút |
| **—** | **KẾT QUẢ** | | |
| 19 | Mô hình thực tế | Ảnh toàn cảnh full | 1 phút |
| 20 | Demo xe vào | 4 ảnh 2×2 | 1.5 phút |
| 21 | Demo xe ra | 4 ảnh 2×2 | 1.5 phút |
| 22 | Trạng thái LCD | 4 ảnh LCD 2×2 | 1.5 phút |
| 23 | Đánh giá kết quả | Bảng checklist ✅ | 1.5 phút |
| **—** | **KẾT LUẬN** | | |
| 24 | Kết luận & Hướng PT | Bullet + roadmap | 2 phút |
| 25 | Cảm ơn & Q&A | Ảnh background | — |

**⏱ Tổng thời gian ước tính: ~30–35 phút**

---

# 🖼️ CHECKLIST HÌNH ẢNH CẦN CHUẨN BỊ

**Ảnh thực tế cần chụp:**
- [ ] Mô hình toàn cảnh (nhiều góc, ánh sáng tốt)
- [ ] Từng linh kiện riêng lẻ: ESP32, RFID+thẻ, Servo, IR, LCD, Keypad, Buzzer
- [ ] Cổng đang mở / đang đóng
- [ ] LCD ở 4–5 trạng thái khác nhau
- [ ] Cận cảnh tay quẹt thẻ RFID
- [ ] Tay đang bấm keypad nhập biển số

**Sơ đồ cần vẽ trong PowerPoint:**
- [ ] Slide 4: So sánh Trước/Sau (2 cột)
- [ ] Slide 5: Vòng tròn 5 chức năng
- [ ] Slide 6–7: Flowchart vào/ra bãi
- [ ] Slide 14: Sơ đồ khối Input→ESP32→Output
- [ ] Slide 16: Sơ đồ cây 9 file code
- [ ] Slide 17: Sơ đồ State Machine 5 trạng thái

**Ảnh từ internet (cho slide thực trạng):**
- [ ] Slide 3: Ảnh bãi xe đông đúc hoặc hàng chờ dài
