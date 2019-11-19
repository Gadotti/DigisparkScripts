 # Arduino Digispark
Scripts para serem usados com Arduino Digispark, dispositivo que emula a interface de um teclado permitindo automatizar qualquer ação que seria realizado através de um teclado normal, porém a uma velocidade e precisam incomparáveis com a de qualquer ação manual.
![alt text](https://github.com/Gadotti/DigisparkScripts/blob/master/Digispark.jpg "The DigiSpark")

# Why this?
Diferente de outros repositórios e scripts encontrados na rede, os scripts aqui armazenados utilizam uma bilbioteca intermediária mapeada pera o teclado modelo Pt-Br, referenciada nos scripts pela lib <DigiKeyboardPtBr>.
Não obtive sucesso utilizando outras soluções para o mapeamento, então a partir de um mapeamento realizado para o teclado alemão, desenvolvi sob demanda o mapeamento para o layout pt-BR.

# QuickStart
Guia passo-a-passo para montar o ambiente de desenvolvimento.
#### 1. Instalar os drivers do arduino
> https://github.com/digistump/DigistumpArduino/releases

2. Instalar a IDE do arduino
> https://www.arduino.cc/en/main/software

3. Once the Arduino IDE is downloaded then open it up and then, go to File -> Preferences. In the input field named “Additional Boards Manager URLs” enter the following URL.
http://digistump.com/package_digistump_index.json

4. Once, done with the following then, go to Tools -> Board -> Boards Manager. Here click on the Search Filter and type in Digistump AVR Boards the package will appear below and then click on install in the right corner.

5. This is the last step that you need to carry out before you begin to program, go to Tools -> Board. Scroll down till you see the option of Digispark (Default — 16.5mhz) and then click on it to select it.
This is the steps you need to carry out to properly set up your system to work accordingly as you code on the Arduino IDE. This setup might take a bit of time but it can be used to automate a lot of settings in an incredibly small amount of time saving a lot of precious time that you might not want to lose during a pen-test or something of that nature.

6. Tools > Programmer > USBtinyISP

> Originalmente em https://digistump.com/wiki/digispark/tutorials/connecting

# References and Credits
Links de autores e conteúdos utilizados como base para o desenvolvimento e estudos
> https://github.com/CedArctic/DigiSpark-Scripts/
> https://github.com/digistump/DigisparkArduinoIntegration
> https://github.com/christofersimbar/ArduinoDuckyScript
> https://github.com/jcldf
