PÁGINA EM CONSTRUÇÃO

# rRocket-Monitor 🚀 

Sistema para testes em bancada de computador de bordo [rRocket](https://github.com/gbertoldo/rRocket). Composto por uma câmara de volume variável e instrumentada, permite submeter o altímetro a um ambiente de pressão controlada, enquanto se monitora a tensão nos termanais da bateria que o alimenta e nos terminais dos paraquedas auxiliar e principal. O sistema permite ainda acionar acionar ignitores externamente à câmara. Deste modo, é possível simular voo reais e verificar o funcionamento de _software_ e _hardware_ do computador de bordo.

# Versão
Versão 1.0.0

# Hardware

## Câmara
A câmara do rRocket-Monitor pode ser construída de diversas maneiras. No exemplo apresentado aqui (vide a figura abaixo), priorizou-se a utilização de materiais baratos e de fácil acesso. A câmara é formada por uma garrafa d'água e uma seringa de 60 mL. A seringa foi fixa na tampa da garrafa com cola quente. Através da tampa, passam os fios para instrumentação.

## Eletrônica
<center>
<picture>
<img src="https://github.com/user-attachments/assets/079dafb8-f03c-4934-8827-462ed0c98f62" width="300" />
</picture>

### Lista de componentes eletrônicos
--------------------------------
- Placa principal :todo:
- Arduino Nano
- Módulo BMP280
- R1 a R5: resistor 2200 ohms (1/4 W)
- R6 a R10: resistor 6800 ohms (1/4 W)
- Chave: chave gangorra (KCD11-101)
- Conector: conector clip para bateria 6LR61 (9V)

⚠️ Recomenda-se testar cada componente separadamente antes de realizar a soldagem na placa principal.

# Firmware

Procedimento de carregamento de _firmware_
------------------------------------------
1. Baixe e instale o [Visual Studio Code/VSCode](https://code.visualstudio.com/);
1. No VSCode, instale o _plugin_ PlatformIO;
1. Baixe e descompacte a [última versão](https://github.com/gbertoldo/rRocket/tags) do código-fonte;
1. Abra o diretório do código-fonte com o VSCode;
1. Compile o código e carregue o _firmware_ clicando em _PlatformIO_ :arrow_right: _nanoatmega328_ :arrow_right: _General_ :arrow_right: _Upload_;
1. Utilize o [rRocket-UI](https://github.com/gbertoldo/rRocket-UI) para carregar os parâmetros de voo pela primeira vez na memória permanente do microcontrolador.
   
