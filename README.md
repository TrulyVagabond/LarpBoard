[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![Unlicense License][license-shield]][license-url]

<br />
<div align="center">
  <a><img src="assets/Tenma.png" alt="logo" width="100" height="100">
  </a>
  <h3 align="center">LarpBoard</h3>

  <p align="center">
    A Keyboard for Larpers
    <br />
    <br />
    <a href="https://github.com/TrulyVagabond/LarpBoard/blob/main/JOURNAL.md">Journal</a>
    &middot;
    <a href="https://github.com/TrulyVagabond/LarpBoard/issues">Report Bug</a>
    &middot;
    <a href="https://github.com/TrulyVagabond/LarpBoard/issues">Request Feature</a>
  </p>
</div>

## What is LarpBoard?

<p align="center"><img src="assets/LarpBoard.png" /></p>


LarpBoard is a 65% Keyboard Designed for Professional Larpers. Keep in mind tho that you will not get ANY girls if you have this (More MEN attraction). Build and Use this at your own Risk. Well Lets Talk about why this Keyboard will be unique and better than other Low Level Keyboards. This Keyboard Includes Kailh Hot-Swap Sockets and RGB LEDs. A 0.9inch OLED Display for CMatrix. A rollable Volume Knob cuz why not, an NFC reader cuz why not, a solenoid for sound, 2 USB-C Ports, a USB Hub Chip and the Main MCU RP2040.

### Built With

* [![EasyEDA][EasyEDA]][EasyEDA-url]
* [![FreeCAD][FreeCAD]][FreeCAD-url]

## Getting Started

To get Your own LarpBoard, you need three things.

- PCB
- 3d-Printed Enclosure
- Money

### Ordering the PCB

1. Navigate to the Gerber Files in the **"Gerber"** Folder. 

2. Download the ".zip" File

3. Upload this '.zip' file to a custom PCB manufacturer (Like PCBWay, OSH Park or JLCPCB)

4. Standard Manufacturing Settings (1.6mm thickness, HASL finish) work Perfectly for this Board.


### 3D Printing the Enclosure

1. Navigate to the **"CAD"** folder.

2. Download any of the File Formats and Upload it into your Desired 3D slicing Software.

3. Use a durable, temperature-resistant filament like **PETG or ABS**. Set your wall thickness to at least 4 perimeters for high structural strength.

## Bills Of Materials (BOM)

| Qty | Component | Designator | Unit Cost | Total |
| :--- | :--- | :--- | :--- | :--- |
| 87 | 100nF Capacitor | 1C, 2C, 3C, 4C, 5C, 6C, 7C, 8C, 9C... | - | - |
| 1 | 330Ω Resistor | 1R | - | - |
| 7 | 1uF Capacitor | C1, C3, C11, C12, C22, C23, C26 | - | - |
| 4 | 20pF Capacitor | C15, C16, C99, C100 | - | - |
| 2 | 18pF Capacitor | C24, C25 | - | - |
| 1 | 27.12MHz Crystal | Crystal | - | - |
| 69 | 1N4148W-7-F Diode | D1, D2, D3, D4, D5, D6, D7, D8, D9... | - | - |
| 1 | 1N5819WS Diode | D69 | - | - |
| 68 | SK6812MINI-E LED | LED1, LED2, LED3, LED4, LED5, LED6... | - | - |
| 1 | PN5321A3HN/C106;55 | NFC | - | - |
| 1 | OLED 0.91" 128X32 I2C | OLED1 | - | - |
| 2 | TYPE-C-31-M-12 Port | P/UP-USB-C, S-USB-C | - | - |
| 1 | AO3400A MOSFET | Q1 | - | - |
| 4 | 10KΩ Resistor | R1, R2, R10, R13 | - | - |
| 1 | 1KΩ Resistor | R3 | - | - |
| 1 | 12KΩ Resistor | R4 | - | - |
| 2 | 100KΩ Resistor | R5, R6 | - | - |
| 2 | 56KΩ Resistor | R7, R8 | - | - |
| 2 | 4.7KΩ Resistor | R11, R12 | - | - |
| 1 | EC10E1220501 Encoder | SW69 | - | - |
| 2 | TS-1088-AR02016 Switch | SW71, SW72 | - | - |
| 1 | RP2040 Microcontroller | U1 | - | - |
| 1 | W25Q128JVSIQ Flash | U2 | - | - |
| 1 | AP2112K-3.3TRG1 LDO | U3 | - | - |
| 1 | USB2514B-AEZC-TR Hub | U4 | - | - |
| 68 | CPG135001S30 Socket | U6, U7, U8, U9, U10, U11, U12... | - | - |
| 6 | CHERRYMX STAB 2U | U62, U64, U65, U66, U67, U68 | - | - |
| 1 | STAB 6.25U | U63 | - | - |
| 2 | 5.1KΩ Resistor | U69, U140 | - | - |
| 1 | JST_XH CONNECTOR | U139 | - | - |
| 1 | X322512MLB4SI Crystal | X1 | - | - |
| 1 | Crystal/[24MHz,18pF] | X2 | - | - |
| **-** | **MANUFACTURING TOTAL** | **(JLCPCB Full Assembly + Shipping)** | **-** | **~$50.00** |

## Assembling LarpBoard

- **PCB Assembly:**

   1. You can Either Order the PCB pre-soldered from Manufacturers. or you can Solder on your own. See the PCB layout for Soldering. 

  3. After Doing all that, Your PCB would finally be ready.

- **Case Assembly:**

  1. 3D Print the Enclosure with the Specified Settings Above.

  2. You Must 3D print the Front and Back Shell Separately. The Front Shell Contains the Holes for the Buttons and E-ink Display. The Back Shell Contains a Space for the Battery Sled to go in and a Hole For Smooth Connection between the Battery and the Connector on the PCB (JST connector)

  3. Put the Antenna Through the Hole in the Enclosure.

  4. Add the buttons in the Desired hole Created in the Enclosure Before Closing it shut.

  5. Use **M3 Screws** to Screw in everything, The Front Shell and Back Shell. 

  6. Your **LarpBoard** is Ready to Use.


#### <p align="center">Note: This Repo Does Not Contain the Firmware. Add the Firmware On Your Own.</p>


## Contributing:

You can Contribute by Writing the Firmware for me HAHA. or Making Awesome Changes to the Case.

## Special Thanks:

- **FreeCAD** for the Amazing 3D Modeling Free Software.

- **EasyEDA** for the Amazing PCB Designing Free Software.

- **Hack Club** for making me Motivated enough to make this haha.

## License

This Project is Distributed Under MIT License. Check License.txt for More Information.

<!-- MARKDOWN LINKS & IMAGES -->
[contributors-shield]: https://img.shields.io/github/contributors/TrulyVagabond/Vashtastic.svg?style=for-the-badge
[contributors-url]: https://github.com/TrulyVagabond/Vashtastic/graphs/contributors

[forks-shield]: https://img.shields.io/github/forks/TrulyVagabond/Vashtastic.svg?style=for-the-badge
[forks-url]: https://github.com/TrulyVagabond/Vashtastic/network/members

[stars-shield]: https://img.shields.io/github/stars/TrulyVagabond/Vashtastic.svg?style=for-the-badge
[stars-url]: https://github.com/TrulyVagabond/Vashtastic/stargazers

[issues-shield]: https://img.shields.io/github/issues/TrulyVagabond/Vashtastic.svg?style=for-the-badge
[issues-url]: https://github.com/TrulyVagabond/Vashtastic/issues

[license-shield]: https://img.shields.io/github/license/TrulyVagabond/Vashtastic.svg?style=for-the-badge
[license-url]: https://github.com/TrulyVagabond/Vashtastic/blob/main/LICENSE

[EasyEDA]: https://img.shields.io/badge/EasyEDA-0177D7?style=for-the-badge
[EasyEDA-url]: https://easyeda.com/

[FreeCAD]: https://img.shields.io/badge/FreeCAD-2D9CDB?style=for-the-badge&logo=freecad&logoColor=white
[FreeCAD-url]: https://www.freecad.org/

<br>

###### Note: A.I was only used for Research Purposes.
