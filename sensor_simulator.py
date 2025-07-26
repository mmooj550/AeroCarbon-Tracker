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
