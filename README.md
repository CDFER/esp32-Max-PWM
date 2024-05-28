# esp32-Max-PWM
Just a small test script to verify the max pwm frequency at each resolution.

## ESP32
```
Board Model: NodeMCU-32S
Chip Model: ESP32-D0WDQ6
Chip Revision: 1
Number of Cores: 2
CPU Frequency: 240 MHz
SDK Version: v4.4.7-dirty

Max frequencies:
1bits = 0hz
2bits = 0hz
3bits = 0hz
4bits = 5.01mhz
5bits = 2.50mhz
6bits = 1.25mhz
7bits = 626.20khz
8bits = 313.10khz
9bits = 156.50khz
10bits = 78.20khz
11bits = 39.10khz
12bits = 19.50khz
13bits = 9.70khz
14bits = 4.80khz
15bits = 2.40khz
16bits = 1.20khz
```

```
Platform espressif32 @ 6.7.0 (required: espressif32)
├── framework-arduinoespressif32 @ 3.20016.0 (required: platformio/framework-arduinoespressif32 @ ~3.20016.0)
├── tool-esptoolpy @ 1.40501.0 (required: platformio/tool-esptoolpy @ ~1.40501.0)
├── tool-mkfatfs @ 2.0.1 (required: platformio/tool-mkfatfs @ ~2.0.0)
├── tool-mklittlefs @ 1.203.210628 (required: platformio/tool-mklittlefs @ ~1.203.0)
├── tool-mkspiffs @ 2.230.0 (required: platformio/tool-mkspiffs @ ~2.230.0)
├── tool-openocd-esp32 @ 2.1100.20220706 (required: platformio/tool-openocd-esp32 @ ~2.1100.0)
├── toolchain-riscv32-esp @ 8.4.0+2021r2-patch5 (required: espressif/toolchain-riscv32-esp @ 8.4.0+2021r2-patch5)
└── toolchain-xtensa-esp32 @ 8.4.0+2021r2-patch5 (required: espressif/toolchain-xtensa-esp32 @ 8.4.0+2021r2-patch5)
```


## ESP32S3
```
Board Model: Espressif ESP32-S3-DevKitM-1
Chip Model: ESP32-S3
Chip Revision: 0
Number of Cores: 2
CPU Frequency: 240 MHz
SDK Version: v4.4.7-dirty

Max frequencies:
1bits = 0hz
2bits = 0hz
3bits = 0hz
4bits = 0hz
5bits = 0hz
6bits = 0hz
7bits = 0hz
8bits = 0hz
9bits = 78.20khz
10bits = 39.10khz
11bits = 19.50khz
12bits = 9.70khz
13bits = 4.80khz
14bits = 2.40khz
15bits = 0hz
16bits = 0hz
```

```
Platform espressif32 @ 6.7.0 (required: espressif32)
├── framework-arduinoespressif32 @ 3.20016.0 (required: platformio/framework-arduinoespressif32 @ ~3.20016.0)
├── tool-esptoolpy @ 1.40501.0 (required: platformio/tool-esptoolpy @ ~1.40501.0)
├── tool-mkfatfs @ 2.0.1 (required: platformio/tool-mkfatfs @ ~2.0.0)
├── tool-mklittlefs @ 1.203.210628 (required: platformio/tool-mklittlefs @ ~1.203.0)
├── tool-mkspiffs @ 2.230.0 (required: platformio/tool-mkspiffs @ ~2.230.0)
├── tool-openocd-esp32 @ 2.1100.20220706 (required: platformio/tool-openocd-esp32 @ ~2.1100.0)
├── toolchain-riscv32-esp @ 8.4.0+2021r2-patch5 (required: espressif/toolchain-riscv32-esp @ 8.4.0+2021r2-patch5)
└── toolchain-xtensa-esp32s3 @ 8.4.0+2021r2-patch5 (required: espressif/toolchain-xtensa-esp32s3 @ 8.4.0+2021r2-patch5)
```