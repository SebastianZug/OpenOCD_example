# Openocd for the STM32 Board

Das verwendete Board ist ein [B-L475E-IOT01A](https://os.mbed.com/platforms/ST-Discovery-L475E-IOT01A/), das mit dem internen ST-Link V2 / JTAG Debugger untersucht werden soll. Es geht also nicht darum eigenen Code zu verfassen, sondern die auf dem Controller bereits laufende Software zu untersuchen.

Mögliche Aufgaben:

+ Auslesen des passworts für das WLAN
+ Boudnary Scan um Pin Belegungen zu identifizieren (die noch anzupassen sind)
+ Algorithmus einer "geheimen Funktionen" identifizieren 

> Dabei würde könnte man diskutieren, dass das Debugging einmal mit und einmal ohne elf File durchgeführt wird.

## Code 

Ein mögliches Codefragment liegt im src Ordner. Die Datei `secretfunction.cpp` bekämen die Studierenden nicht, sondern müssten sie selbst identifizieren.

## Open OCD Aufruf

```bash
openocd -f interface/stlink.cfg -f target/stm32f4x.cfg -c init -c "reset init"
```

```bash
telnet localhost 4444
```

## Open OCD

https://www.youtube.com/watch?v=_1u7IOnivnM

https://www.youtube.com/watch?v=8YUWH7W8H3w
