PÁGINA EM CONSTRUÇÃO

# rRocket-Monitor 🚀 

Sistema para testes em bancada de computador de bordo [rRocket](https://github.com/gbertoldo/rRocket). Composto por uma câmara de volume variável e instrumentada, permite submeter o altímetro a um ambiente de pressão controlada, enquanto se monitora a tensão nos termanais da bateria que alimenta o altímetro e nos terminais dos paraquedas auxiliar e principal. O sistema permite, ainda, acionar ignitores externos à câmara. Deste modo, é possível simular voo reais e verificar o funcionamento de _software_ e _hardware_ do computador de bordo. Para facilitar a visualização e análise dos dados, o sistema é acompanhado pela interface gráfica [rRocket-Monitor-UI](https://github.com/gbertoldo/rRocket-Monitor-UI). Vídeos deste sistema estão disponíveis no YouTube TODO.

# Versão
Versão 1.0.0

# Hardware

## Câmara
A câmara do rRocket-Monitor pode ser construída de diversas maneiras. No exemplo apresentado aqui (vide a figura abaixo), priorizou-se a utilização de materiais baratos e de fácil acesso. A câmara é formada por uma garrafa d'água hermética e uma seringa de 60 mL. Há dois orifícios na tampa da garrafa para a passagem da ponta da seringa e dos fios de instrumentação. Utiliza-se cola quente para vedar os orifícios. Próximo à tampa, encontra-se o sensor BMP280 para registro de pressão (e altura, consequentemente). Os dados coletados por este sensor são usados para posterior comparação com os dados do rRocket. Além disso, há três pares de fios que são ligados ao rRocket: (a) um par para alimentação de energia, (b) outro par para o terminal de paraquedas auxiliar e (c) o último par para o terminal de paraquedas principal.

## Eletrônica
Os 10 fios de instrumentação da câmara são ligados à placa de circuito impresso (PCI) ilustrada abaixo
<center>
<picture>
<img src="https://github.com/user-attachments/assets/079dafb8-f03c-4934-8827-462ed0c98f62" width="300" />
</picture>
   
Os quatro fios do sensor BMP280 são soldados aos respectivos orifícios da placa. O par de fios para alimentar o rRocket é ligado aos orifícios GND e B (positivo) da placa. O par de fios do paraquedas auxiliar deve ser ligado aos orifícios D+ e D- da placa. O par de fios do paraquedas principal deve ser ligado aos orifícios P+ e P- da placa. A ordem da ligação de D+ e D- não é relevante. O mesmo se aplica para P+ e P-. Além dos fios oriundos da câmara, também são ligados na PCI uma chave do tipo gangorra para ligar/desligar o rRocket, um conector tipo clip para a bateria de 9V, resistores de 2200 ohms (R1 a R5) e 6800 ohms (R6 a R10) e um Arduino Nano.

O projeto elétrico do circuito está disponível no site da EasyEDA TODO. A partir deste site é possível comprar a placa (sem os componentes montados) ou baixar gratuitamente os arquivos Gerber e produzi-la de outra forma.

⚠️ Os autores não tem qualquer relação comercial com a EasyEDA. Os usuários devem se sentir livres para escolher a forma que melhor lhes convir para a produção da PCI.


### Lista de componentes eletrônicos
--------------------------------
- Placa principal TODO
- Arduino Nano
- Módulo BMP280
- R1 a R5: resistor 2200 ohms (1/4 W)
- R6 a R10: resistor 6800 ohms (1/4 W)
- Chave: chave gangorra (KCD11-101)
- Conector: conector clip para bateria 6LR61 (9V)

⚠️ Recomenda-se testar cada componente separadamente antes de realizar a soldagem na placa principal.

## Caixa de proteção

É recomendável proteger o circuito em uma caixa plástica. Neste [link](https://github.com/gbertoldo/rRocket-Monitor/tree/master/src) TODO é possível encontrar os arquivos STL para impressão 3D da caixa de proteção utilizada neste projeto. 

# Firmware

Procedimento de carregamento de _firmware_
------------------------------------------
1. Baixe e instale o [Visual Studio Code/VSCode](https://code.visualstudio.com/);
1. No VSCode, instale o _plugin_ PlatformIO;
1. Baixe e descompacte a [última versão](https://github.com/gbertoldo/rRocket/tags) TODO do código-fonte;
1. Abra o diretório do código-fonte com o VSCode;
1. Compile o código e carregue o _firmware_ clicando em _PlatformIO_ :arrow_right: _nanoatmega328_ :arrow_right: _General_ :arrow_right: _Upload_;

# Modo de uso
Para aquisição, visualização e análise de dados coletados com o rRocket-Monitor, utilize a interface gráfica [rRocket-Monitor-UI](https://github.com/gbertoldo/rRocket-Monitor-UI).
