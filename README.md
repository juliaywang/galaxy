# Design Goals and Description
A simple galaxy art installation on a LILYGO T-Display ESP32 using Arduino and the TFT_eSPI library.

This project creates a galaxy-like background featuring colorful stars and three larger white stars that continuously grow and shrink.

The animation includes:
- 100 randomly positioned pink, blue, and purple background stars
- Three white stars that grow and shrink repeatedly between 2 and 10 pixels
- Randomized animation delays between 50 and 150 milliseconds to create more natural movement
- A black background to resemble outer space

## Follow the Project!

1. Download the .ino file from this repository.
2. Open the file in Arduino IDE.
3. Connect the LilyGO T-Display ESP32 to your computer using a USB data cable.
4. In Arduino IDE, go to Tools → Board → esp32 → ESP32 Dev Module.
5. Go to Tools → Port and select the port connected to your LilyGO (on Mac, this may appear as /dev/cu.usbserial-...).
6. Make sure the TFT_eSPI library is installed and configured for the LilyGO T-Display.
7. Click the Upload button in Arduino IDE.
8. Wait until the IDE displays "Hard resetting via RTS pin..." or confirms that the upload is complete.
9. Your animation is uploaded!

<img width="480" height="480" alt="galaxy gif" src="https://github.com/user-attachments/assets/0cbbce4e-ae18-4a6e-9f9a-f9cda5cdd14d" />
