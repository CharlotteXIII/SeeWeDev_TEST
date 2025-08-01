<h1 align="center">**Please READ / โปรดอ่าน !!!**</h1>

I forked this repo from **https://github.com/pbunnun/SeeWeDev.git** to learn and trying to port NodeEditor **V3** from **https://github.com/paceholder/nodeeditor.git** **[ branch v3 ]**

---------------------------------------------------------------------------------------------------------------------------------------------------
# **INTERNSHIP 2025 (4 มิถุนายน 2568 - 1 สิงหาคม 2568)**

## Goals:
1. Porting NodeEditor v3 into CVDEV
2. Change Cmake to 3.10
3. Insert Icon Images

## เป้าหมายเพิ่มเติม(Optional)
1. Upgrade UI/UX (Buttons & Icons)
2. Try to use Logo icon (ใช้โลโก้ใน linux)
3. Dark theme mode/ Change Color
4. Create Text Requirements

**>>> ตอนนี้ทำแค่ข้อ 1 กับ 2 <<<**
**>>> แนะนำว่าให้ดูเทียบกับ CVDev จาก https://github.com/pbunnun/SeeWeDev.git<<<**
**ทั้งหมดทำใน LINUX นะ**

# **Table of Contents**
- [CompileCVDev](#CompileCVDev)
- [สิ่งที่ได้ทำลงไปบ้าง](#สิ่งที่ได้ทำลงไปบ้าง)
  
# CompileCVDev
### **!!! เตือนก่อนว่าอันนี้คือการ compile CVDev ที่ยังใช้ NodeEditor v2 อยู่ (สำหรับอยากลองเล่นดู)**
จาก https://github.com/pbunnun/SeeWeDev.git

เริ่มจากการ Clone โดยใช้ web URL จาก github ด้านบน

<p align="center">
<img width="380" height="170" alt="image" src="https://github.com/user-attachments/assets/22358ab7-f6da-4b00-9b33-bef9c3989b59" />
</p>

ต่อมาเปิด terminal (Ctrl + Alt + T) และพิมพ์คำสั่งตามนี้

``` git clone https://github.com/pbunnun/SeeWeDev.git ```
<br /><br />

### **ก่อนจะ Compile เราจะมาแก้บางอย่างในไฟล์หน่อยนึงก่อน 2 อย่าง**

**1.แก้ไฟล์ PBImageDisplayWidget.hpp**

- เข้าไปใน folder SeeWeDev ผ่าน files เปิดหา SeeWeDev/Plugins/BasicNodes
- เข้าไป comment //

```// #include <QtVersionChecks>```

```// #if (QT_VERSION < QT_VERSION_CHECK(6, 0, 0) )```

- ใส่โค้ดใหม่แทนลงไป

```#include <QtGlobal>```

```#if (QT_VERSION < QT_VERSION_CHECK(6,7,0))```
<br /><br />

**2. Install Qt6 (หากเกิดปัญหา Error ) แบบว่าเราไม่มี qt อยู่ในเครื่องเลย ถ้าไม่มีปัญหาก็ไม่ต้องโหลด**

ถ้าจะโหลดก็ ```sudo apt install qt6-base-dev qt6-base-dev-tools``` 

<br />
จากนั้นจะมี folder ชื่อ SeeWeDev ขึ้นมา ให้พิมพ์คำสั่งต่อใน terminal เพื่อเข้าไปใน folder นั้น

``` cd SeeWeDev/ ```

จากนั้นสร้าง folder ชื่อ build และเข้าไปใน folder มาเราจะทำการ compile ใน folder นี้

``` mkdir build && cd build ```

จากนั้นรันคำสั่ง Cmake ใน terminal

``` cmake .. ```

จากนั้นสร้างโปรเจคโดยพิมพ์คำสั่ง make

``` make ```

เมื่อทำทุกอย่างเสร็จจะพบว่ามี folder ใหม่เพิ่มขึ้นใน folder SeeWeDev ซึ่งใน build ก็จะมีไฟล์มากมายเช่นกัน

**ถ้ากดเข้าไปใน build ก็จะเจอ folder CVDev และก็จะเจอไฟล์ .EXE ชื่อ CVDev กดเข้าไปก็จะเป็นโปรแกรม CVDev ขึ้นมาให้เล่นเลย**
<br /><br />

# สิ่งที่ได้ทำลงไปบ้าง
- [CompileCVDev](#CompileCVDev)
- [สิ่งที่ได้ทำลงไปบ้าง](#สิ่งที่ได้ทำลงไปบ้าง)


