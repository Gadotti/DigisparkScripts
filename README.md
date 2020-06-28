 # Arduino Digispark
Scripts para serem usados com Arduino Digispark, dispositivo que emula a interface de um teclado permitindo automatizar qualquer ação que seria realizado através de um teclado normal, porém a uma velocidade e precisão incomparáveis com a de qualquer ação manual.
![alt text](https://github.com/Gadotti/DigisparkScripts/blob/master/Digispark.jpg "The DigiSpark")

# Why this?
Diferente de outros repositórios e scripts encontrados na rede, os scripts aqui armazenados utilizam uma bilbioteca intermediária mapeada pera o teclado modelo Pt-Br, referenciada nos scripts pela lib <DigiKeyboardPtBr>.
Não obtive sucesso utilizando outras soluções para o mapeamento, então a partir de um mapeamento realizado para o teclado alemão, desenvolvi sob demanda o mapeamento para o layout pt-BR.

# QuickStart
Guia passo-a-passo para montar o ambiente de desenvolvimento.
1. Instalar os drivers do arduino
> https://github.com/digistump/DigistumpArduino/releases

2. Instalar a IDE do arduino
> https://www.arduino.cc/en/main/software

3. Abra a IDE e vá para o menu **File -> Preferences**. Insira a URL abaixo no campo **Additional Boards Manager URLs**
> http://digistump.com/package_digistump_index.json

4. Assim que concluído, vá para o menu **Board -> Boards Manager**. Clique no campo de pesquisa e digite **Digistump AVR Boards**. O pacote irá aparece abaixo e então clique no botão para instalar.

5. Antes de você iniciar qualquer programa é importante ir até o menu **Tools -> Board**. Navegue para baixo até que ver a opção **Digispark (Default — 16.5mhz)** e então a selecione.

6. Para precaução, vá até o menu **Tools > Programmer** e altere para a opação **USBtinyISP**

Passo-a-passo, originalmente em inglês, disponível no link abaixo:
> https://digistump.com/wiki/digispark/tutorials/connecting

# Scripts

###### LayoutKeyboardTest
1. Abre um notepad e testa o layout do teclado
2. Imprime o texto:
  ABCDEFGHIJKLMNOPQRSTUVWXYZ
  abcdefghijklmnopqrstuvwxyz
  1234567890
  !@#$%&*()_+=-
  []{}\\|;:',./<>?
  ççÇÇ
3. A versão atual imprime o Ç (maiusculo) como ç (minúsculo)

###### Create_Account
1. Abre um CMD com privilégios de administrador
2. Realiza a criação de um novo usuário no windows
3. Atribui o privilégio de administrador ao novo usuário

###### NC_ReverseShell
1. Abre o CMD e conecta via netcat entregando um shell reverso
2. Abre uma tela fake de windows update para esconder o shell

###### WiFi_Grabber_ToMail
1. Coleta os nomes e senhas wifi armazenadas na computador
2. Exporta os dados em um arquivo csv
3. Envia o arquivo csv por e-mail
4. Exclui o arquivo csv da máquina

# References and Credits
Links de autores e conteúdos utilizados como base para o desenvolvimento e estudos
###### https://github.com/CedArctic/DigiSpark-Scripts/
###### https://github.com/digistump/DigisparkArduinoIntegration
###### https://github.com/christofersimbar/ArduinoDuckyScript
###### https://github.com/jcldf

# Youtube
Demonstração do script para coleta de senhas Wifi exportas via csv e enviadas para o e-mail, no vídeo linkado abaixo:
> https://youtu.be/uzV_kIC-1_o
