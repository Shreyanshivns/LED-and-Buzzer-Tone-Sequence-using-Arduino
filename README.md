# 🎵 LED and Buzzer Tone Sequence using Arduino

This Arduino project lights up three LEDs sequentially while playing different tones from a buzzer for each LED. It demonstrates the use of digital pins, basic timing with `delay()`, and sound generation with the `tone()` function.

## 📂 Project Overview

- **Language**: C++
- **Platform**: Arduino (Tinkercad compatible)
- **Components Used**:
  - Arduino Uno
  - 3 LEDs
  - 3 Resistors (220Ω)
  - 1 Buzzer
  - Jumper Wires
  - Breadboard

## 🧠 How It Works

- Each LED (on pins 8, 7, and 6) lights up one after the other.
- When an LED is turned ON, the buzzer (on pin 9) plays a specific tone corresponding to that LED.
  - LED1: 750 Hz
  - LED2: 950 Hz
  - LED3: 1150 Hz
- Each LED-buzzer pair is active for 200 milliseconds before moving to the next.

🔗 Tinkercad Simulation
You can view and run the live simulation here:
👉 [**Tinkercad Link to the Project**](https://www.tinkercad.com/things/bAFn8FhDg5G-bodacious-albar-rottis)

📷 Circuit Diagram
<img width="705" height="431" alt="Screenshot 2025-08-02 013149" src="https://github.com/user-attachments/assets/9d7bcc30-730b-4f9d-9da3-de3480920567" />
