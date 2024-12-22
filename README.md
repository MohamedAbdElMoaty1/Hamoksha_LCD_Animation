# Hamoksha_LCD_Animation

Hamoksha_LCD_Animation is a creative LCD animation project built with the ATmega32 microcontroller. It features "Hamoksha," a charming character who engages in a series of animated actions such as running, playing football, dancing, and a climactic dramatic ending. The animations are brought to life on a 16x2 character LCD using custom-defined patterns.

## Features

### Custom Character Animations
- **Hamoksha in Action**: Watch Hamoksha perform actions like running, dancing, and more.
- **Dynamic Elements**: Includes objects like a football, a gun, and a bullet for storytelling.

### Dynamic LCD Updates
- Smooth transitions and movements for seamless animations.

### Interactive Storytelling
- Animations and messages narrate Hamoksha’s journey in an engaging manner.

## Hardware Requirements
- **Microcontroller**: ATmega32.
- **LCD Module**: 16x2 character LCD.
- **Power Supply**: 5V DC for the microcontroller and peripherals.

## Software Requirements
- **Compiler**: AVR GCC .
- **Programming Tools**: AVRDUDE or Atmel ICE for uploading the compiled hex file.
- **Driver Files**:
  - `DIO_interface.h`: For digital I/O control.
  - `CLCD_interface.h`: For LCD operations.

## Code Description

### Key Files
- **`main.c`**:
  - Contains the animation sequence logic.
  - Defines custom characters and manages LCD updates.
- **Driver Files**:
  - `DIO_interface.h`: Handles microcontroller I/O pins.
  - `CLCD_interface.h`: Manages LCD initialization, character display, and custom character rendering.

### Animation Sequences
- **Running Animation**: Hamoksha runs from right to left across the screen.
- **Football Animation**: Hamoksha plays football, scores a goal, and celebrates.
- **Dancing Animation**: Hamoksha performs a dance with alternating poses.
- **Dramatic Death Animation**: Features a gun and bullet for a dramatic conclusion.

### Custom Characters
- Various poses of Hamoksha.
- Supporting elements like a football, gun, and bullet.

### LCD Operations
- **Cursor Movement**: `CLCD_voidGoToXY(uint8 x, uint8 y)` positions the cursor.
- **Custom Characters**: `CLCD_u8SendSpecialCharacter(uint8 location, uint8* pattern, uint8 x, uint8 y)` defines and displays characters.
- **String Display**: `CLCD_u8SendString(const char* str)` sends text messages to the LCD.

## How to Run

### Step 1: Setup Hardware
1. Connect the 16x2 LCD to the ATmega32 microcontroller.
2. Ensure a proper 5V power supply for the microcontroller and LCD module.

### Step 2: Compile the Code
1. Use AVR GCC or Atmel Studio to compile the `main.c` file.

### Step 3: Upload the Code
1. Use a programmer (e.g., AVRDUDE, Atmel ICE) to flash the compiled `.hex` file to the ATmega32 microcontroller.

### Step 4: Watch the Animations
1. Power up the system.
2. Observe Hamoksha’s adventures on the 16x2 LCD.

## Repository

The source code and related files are hosted in this repository: [Hamoksha_LCD_Animation](https://github.com/MohamedAbdElMoaty1/Hamoksha_LCD_Animation).

---

Contributions, suggestions, and feedback are welcome! Feel free to fork the repository, report issues, or submit pull requests.
