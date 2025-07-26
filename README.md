# AeroCarbon Tracker 🛫🌍

## نبذة عن المشروع | Project Overview


**AeroCarbon Tracker** هو نظام لمحاكاة قياس الانبعاثات من الطائرات في المطارات. الجهاز يحاكي مستشعرات تُركب في مدرجات المطارات لقياس الغازات المنبعثة أثناء عمليات الإقلاع والهبوط.

**الهدف:** توفير محاكاة لبيانات الانبعاثات الجوية لدعم الجهود البيئية في قطاع الطيران.


**AeroCarbon Tracker** is a system for simulating aircraft emissions measurement at airports. The device simulates sensors installed on airport runways to measure gases emitted during takeoff and landing operations.

**Goal:** Provide simulation of aviation emissions data to support environmental efforts in the aviation sector.

---

## الكود الحالي | Current Code

### محاكي المستشعر | Sensor Simulator

**ملاحظة مهمة:** هذا الكود يحتوي على قيم عشوائية كمثال فقط. في التطبيق الفعلي، سيتم استبدال دالة `random.uniform()` بقراءات حقيقية من المستشعرات الفيزيائية.

**Important Note:** This code contains random values as examples only. In the actual application, the `random.uniform()` function will be replaced with real readings from physical sensors.

```python
import time
import random

def read_emissions():
    # TODO: استبدال هذه القيم العشوائية بقراءات حقيقية من المستشعرات
    # TODO: Replace these random values with real sensor readings
    co2 = round(random.uniform(400, 460), 2)   # ppm - سيتم استبداله بقراءة حقيقية
    nox = round(random.uniform(0.01, 0.07), 3) # ppm - سيتم استبداله بقراءة حقيقية
    return co2, nox

while True:
    co2, nox = read_emissions()
    print(f"[جهاز AeroCarbon] ⏱ قراءة جديدة:")
    print(f"🔸 CO₂: {co2} ppm | 🔹 NOx: {nox} ppm\n")
    time.sleep(3)  # ينتظر 3 ثواني قبل القياس الجديد
```

---

## الميزات | Features

- 🔍 **محاكاة القراءات:** يولد قيم عشوائية لـ CO₂ و NOx (مؤقتاً - سيتم استبدالها بقراءات حقيقية)
- ⏱️ **قراءات دورية:** قراءة جديدة كل 3 ثواني
- 📊 **عرض البيانات:** يطبع القراءات على الشاشة
- 🌿 **غازات بيئية:** يراقب ثاني أكسيد الكربون وأكاسيد النيتروجين
- 🔧 **جاهز للتطوير:** البنية معدة لاستقبال بيانات المستشعرات الحقيقية

- 🔍 **Reading Simulation:** Generates random values for CO₂ and NOx (temporarily - will be replaced with real readings)
- ⏱️ **Periodic Readings:** New reading every 3 seconds
- 📊 **Data Display:** Prints readings to screen
- 🌿 **Environmental Gases:** Monitors carbon dioxide and nitrogen oxides
- 🔧 **Development Ready:** Structure prepared to receive real sensor data

---

## المواصفات التقنية | Technical Specifications

### الغازات المُراقبة | Monitored Gases
- **CO₂** (ثاني أكسيد الكربون): 400-460 ppm *(قيم محاكاة - سيتم استبدالها)*
- **NOx** (أكاسيد النيتروجين): 0.01-0.07 ppm *(قيم محاكاة - سيتم استبدالها)*

*ملاحظة: النطاقات المذكورة هي للمحاكاة فقط. القيم الحقيقية ستعتمد على المستشعرات المستخدمة وظروف القياس الفعلية.*

### التحديث الزمني | Update Frequency
- قراءة جديدة كل 3 ثواني | New reading every 3 seconds

---

## كيفية التشغيل | How to Run

### 1. حفظ الكود | Save the Code
احفظ الكود في ملف باسم `sensor_simulator.py`
Save the code in a file named `sensor_simulator.py`

### 2. تشغيل الكود | Run the Code
```bash
python sensor_simulator.py
```

### 3. النتيجة المتوقعة | Expected Output
```
[جهاز AeroCarbon] ⏱ قراءة جديدة:
🔸 CO₂: 442.15 ppm | 🔹 NOx: 0.034 ppm

[جهاز AeroCarbon] ⏱ قراءة جديدة:
🔸 CO₂: 451.87 ppm | 🔹 NOx: 0.056 ppm

[جهاز AeroCarbon] ⏱ قراءة جديدة:
🔸 CO₂: 438.92 ppm | 🔹 NOx: 0.021 ppm
```

---

## المتطلبات | Requirements

### متطلبات البرمجيات | Software Requirements
- Python 3.6 أو أحدث | Python 3.6 or newer
- لا توجد مكتبات خارجية مطلوبة | No external libraries required

### المكتبات المستخدمة | Used Libraries
- `time` - للتحكم في التوقيت | For timing control
- `random` - لتوليد القيم العشوائية | For generating random values

---

## التطوير المستقبلي | Future Development

### المراحل القادمة | Next Steps
1. **استبدال المحاكاة:** ربط المستشعرات الحقيقية بدلاً من القيم العشوائية
2. **واجهة مرئية:** إنشاء dashboard بـ Streamlit
3. **حفظ البيانات:** تخزين القراءات في ملف CSV أو قاعدة بيانات
4. **الرسوم البيانية:** عرض البيانات بصرياً مع الترندات
5. **الأمان:** إضافة تشفير للبيانات
6. **الشبكة:** إرسال البيانات للسحابة أو الخوادم المحلية
7. **الإنذارات:** تنبيهات عند تجاوز الحدود البيئية المسموحة

### Future Phases | المراحل المستقبلية
1. **Replace Simulation:** Connect real sensors instead of random values
2. **Visual Interface:** Create Streamlit dashboard
3. **Data Storage:** Store readings in CSV file or database
4. **Charts:** Visual data representation with trends
5. **Security:** Add data encryption
6. **Networking:** Send data to cloud or local servers
7. **Alerts:** Notifications when exceeding environmental limits
