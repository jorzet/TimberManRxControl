﻿# TimberManRxControl

 It is a source corde that allows to recives control commands from transmisor

<br>
  <img height="300" src="https://github.com/jorzet/TimberManRxControl/blob/master/images/Captura%20de%20pantalla%202018-04-23%20a%20la(s)%2023.21.37.png">
</br>

<strong>Note 1:</strong> this project is a compilation of 3 projects:

  * TimberManAllegro
    - from: https://github.com/jorzet/TimberManAllegro.git
  * TimberManTxControl
    - from: https://github.com/jorzet/TimberManTxControl.git
  * TimberManRxControl
    - from: https://github.com/jorzet/TimberManRxControl.git
    
<strong>Note 2:</strong> you need to download VirtualWire.h librarie. you can download it in the following link:
  * https://www.resistorpark.com/arduino-virtualwire-library-download/
  
  Put your librarie in Documents/Arduino/libraries (you can test running an example)


<strong>Note 3:</strong> You need the following materials to build the receptor control circuit:

  > (if you don't want to build all the circuit you can use a conventional Arduino)
  
  * 1 ATMega328p
  * 1 oscillator 16MHz
  * 2 capacitor of 22pF
  * 1 button(for RESET)
  * 10 kohms resistor
  * 220 ohms resistor (oprional)
  * 1 led (optional)
  * A USB-DMX converter (or any other conventional programmer or also configure another your Arduino as ISP programmer to upload the sketch to ATMega328p)
  
  > <strong color="#940000">Important: if your ATMega328p doesn't have the bootloader you need to upload it. With your programmer go to "Tools->Burn Bootloader" or you can check how to do this on internet, there are a lot of tutorials of this</strong>
  
  
  <br>
  <img height="300" src="https://github.com/jorzet/TimberManRxControl/blob/master/images/Captura%20de%20pantalla%202018-04-23%20a%20la(s)%2023.21.49.png">
</br>
  
  
