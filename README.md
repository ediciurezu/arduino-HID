# Arduino HID Keyboard
ATmega16U2-ul de pe **ARDUINO UNO** poate fi programat direct utilizand protocolul USB numit **Device Firmware Update** (DFU).

In folderul **firmware** se gaseste binarul **Arduino-keyboard-0.3** pe care il vom incarca cu ajutorul software-ului **Atmel Flip**.

Proiectul isi propune realizarea unui keypad cu 3 butoane. Fiecare pushbutton are una din urmatoarele functionalitati: **Copy**, **Cut**, **Paste**.

Diagrama circuitului:
![image](https://user-images.githubusercontent.com/52796726/117294915-e3251200-ae7b-11eb-8642-a0fab192cb58.png)

Componente:
- Arduino Uno
- 3x Rezistenta 10Kohmi
- 3x Pushbutton
- Fire
