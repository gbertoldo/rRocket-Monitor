PÁGINA EM CONSTRUÇÃO

# rRocket-Monitor 🚀 

Sistema para teste em bancada do computador de bordo [rRocket](https://github.com/gbertoldo/rRocket).

# Versão
Versão 1.0.0

# Hardware
Desenvolvido com o propósito de redução de custos, o hardware do rRocket é formado por componentes eletrônicos facilmente disponíveis no mercado. Em função disso, o computador de bordo pode ser montado por qualquer pessoa com conhecimento básico de soldagem. A figura abaixo ilustra a PCI (placa de circuito impresso) do rRocket modelo EZ, ou, simplesmente, rRocket-EZ, e a figura seguinte ilustra um rRocket-EZ montado. 

<center>
<picture>
<img src="https://github.com/user-attachments/assets/079dafb8-f03c-4934-8827-462ed0c98f62" width="300" />
</picture>

Lista de componentes eletrônicos
--------------------------------
- Placa principal :todo:
- Arduino Nano
- Módulo BMP280
- R1 a R5: resistor 2200 ohms (1/4 W)
- R6 a R10: resistor 6800 ohms (1/4 W)
- Chave: chave gangorra (KCD11)
- Conector: conector para bateria 6LR61 (9V)

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
   
