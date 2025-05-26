<p align="center">
<a href="https://www.uit.edu.vn/" title="Trường Đại học Công nghệ Thông tin" style="border: none;">
<img src="https://i.imgur.com/WmMnSRt.png" alt="Trường Đại học Công nghệ Thông tin | University of Information Technology">
</a>

</p>

<h1 align="center"><b>LẬP TRÌNH HƯỚNG ĐỐI TƯỢNG</b></h>

## THÔNG TIN

> Đây là nơi lưu lại các bài tập thực hành và tổng hợp lý thuyết về môn lập trình hướng đối tượng (OOP) tại UIT.

* **Người soạn:** Trần Phước Thanh Nhân
* **Ngành:** Khoa học máy tính
* **Khóa:** Khóa 2024 (K19)
* **Email**: 24521241@gm.uit.edu.vn

## MÔN HỌC

* **Tên môn học:** Lập trình hướng đối tượng
* **Mã môn học:** IT002
* **Mã lớp:** IT002.P212
* **Năm học:** HK2 (2024 - 2025)

## NỘI DUNG MÔN HỌC.

### Tuần 1: Ôn tập về Struct và các hàm trong C++

1. Cấu trúc Struct
   * Khai báo cấu trúc (Struct) lưu trữ thông tin của một đối tượng cụ thể, e.g. phân số, thông tin cá nhân, ngày tháng năm,...
   * Khai báo các phương thức xử lý trên đối tượng.
2. Ôn tập các hàm
   * Thư viện `bits/stdc++.h` và các hàm được cung cấp sẵn.

### Tuần 2:

1. Nạp chồng toán tử
   * Nạp chồng toán tử nhập xuất, các toán hạng trong 1 Class bằng `friend operator`
   * Khai báo Constructor khởi tạo Class, nạp chồng Constructor.
   * Sử dụng từ khóa `const` trong khai báo hàm để đánh dấu không thay đổi giá trị đối tượng đang xét trong hàm đó.
2. Chia file, tạo các file khác nhau để khai báo interface và nội dung method.

### Tuần 3: Phương thức get, set, hủy.

* Các phương thức get, set, hủy (Constructor) trong Class.
* Khai báo các phương thức để trả về hoặc thay đổi giá trị của thuộc tính đối tượng (không cho phép truy cập trực tiếp `private`)

### Tuần 4: Phương thức thiết lập sao chép, hàm hằng, tham chiếu hằng

* Xây dựng Constructor sao chép từ đối tượng khác. Eg. `DIEM(const DIEM&)`
* Hàm hằng: Là một method có khai báo bằng từ khóa `const` ở cuối, đảm bảo trong hàm không thay đổi đối tượng.
* Tham chiếu hằng: Sử dụng tham chiếu hằng `const cSoPhuc&` thay vì truyền tham trị `cSoPhuc` tránh tạo bản sao thừa.
