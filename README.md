![Bruce Main Menu](./media/bruce_banner.png)

# Bruce

Bruce is meant to be a versatile ESP32 firmware that supports a ton of offensive features focusing to facilitate on Red Team operations.
It also supports m5stack products and works great with Cardputer and Sticks.

# What is this extended version ?

**Bruce is not my work** : I just made a fork in order to add some features and fix some stuff.  
You can see the new features added in the list above (in bold).

## Screnshots

![Bruce Main Menu](./media/pic4.png)

# How to install

## For M5StickC Plus 2

```sh
pio run -e m5stack-cplus2 
esptool.py --chip esp32 merge_bin --output Bruce3_cplus2.bin 0x1000 .pio/build/m5stack-cplus2/bootloader.bin 0x8000 .pio/build/m5stack-cplus2/partitions.bin 0x10000 .pio/build/m5stack-cplus2/firmware.bin
esptool.py --port /dev/ttyACM0 write_flash 0x00000 Bruce.bin
```

# Wiki
For more information on each function supported by Bruce, [read our wiki here](https://github.com/pr3y/Bruce/wiki).

# List of Features

## Clock
- [x] **Display clock by default**

## WiFi
- [x] Connect to WiFi **Connect to default AP with stored pwd**
- [x] WiFi AP
- [x] Disconnect WiFi
- [X] WiFi Atks
    - [x] Beacon Spam
    - [x] Target Atk
        - [x] Information
        - [X] Target Deauth
        - [X] EvilPortal + Deauth
    - [ ] Deauth Flood (More than one target)
- [X] TelNet
- [X] SSH
- [x] RAW Sniffer
- [x] DPWO-ESP32
- [x] Evil Portal (SPIFFS and SDCard)
- [X] Scan Hosts
- [x] Wireguard Tun

## BLE
- [x] **BLE Connect**
- [x] **BLE Recon**
- [X] AppleJuice
- [X] SwiftPair
- [X] Android Spam
- [X] Samsung
- [X] SourApple
- [X] BT Maelstrom

## IR
- [x] TV-B-Gone **[Feature moved here]**
- [x] Custom IR (SPIFFS and SDCard) **[Feature moved here]**

## RF
- [x] Jammer Full - @incursiohack
- [x] Jammer Intermittent - @incursiohack
- [x] Spectrum - @incursiohack
- [ ] Scan/Copy
- [ ] Replay

## RFID
- [x] Read and Write - @incursiohack

## FM
- [ ] **Broadcast music**
- [ ] **Reserved frequencies**
- [ ] **Hijack traffic alerts**

## Palnagotchi
- [ ] **Palnagotchi companion** - @viniciusbo

## Others

- [x] **QR Codes**
- [x] **Mic test**
- [x] SD Card Mngr
- [x] SPIFFS Mngr
- [x] WebUI
    - [x] Server Structure
    - [x] Html
    - [x] SDCard Mngr
    - [x] Spiffs Mngr
- [x] Megalodon
- [x] BADUsb (SPIFFS and SDCard)
- [X] Openhaystack

## Settings
- [x] Brightness
- [x] Orientation
- [x] Clock
- [x] Restart

## Minor fixes
- [x] **UI bugs (WiFi information display for exemple)**
- [x] **Clock with adequat value**
- [x] **Return to main menu working in all submenu**
- [x] **Better shutdown**
- [x] **Default brightness to 25% for much better battery life**

# Acknowledgements

+ [@bmorcelli](https://github.com/bmorcelli) for new core and a bunch of new features.
+ [@IncursioHack](https://github.com/IncursioHack) for adding RF and RFID modules features.
+ [@Luidiblu](https://github.com/Luidiblu) for logo and UI design assistance.
+ [@N0xa](https://github.com/n0xa/m5stick-nemo).
+ [@Viniciusbo](https://github.com/viniciusbo/m5-palnagotchi).
+ [@LyndLabs](https://github.com/LyndLabs/ESP32-BLE-Recon).
+ [@M5Stack](https://github.com/m5stack/M5StickCPlus2-UserDemo).
 
# Disclaimer

Bruce is a tool for cyber offensive and red team operations, distributed under the terms of the Affero General Public License (AGPL). It is intended for legal and authorized security testing purposes only. Use of this software for any malicious or unauthorized activities is strictly prohibited. By downloading, installing, or using Bruce, you agree to comply with all applicable laws and regulations. This software is provided free of charge, and we do not accept payments for copies or modifications. The developers of Bruce assume no liability for any misuse of the software. Use at your own risk.
