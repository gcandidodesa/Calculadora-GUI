# Calculadora GUI

Uma simples calculadora com interface gráfica desenvolvida com Qt e C++.

## Pré-requisitos

Para compilar e executar este projeto, você precisará ter o seguinte instalado:

* *Qt:* Versão 6.9.0 ou superior.
    * Você pode baixar o Qt em [qt.io/download](https://www.qt.io/download).
    * Certifique-se de instalar os módulos Qt necessários.
* *Compilador C++:*
    * *Linux:* GCC/G++ ou Clang
    * *Windows:* MinGW (geralmente vem com a instalação do Qt para Windows) ou MSVC (Visual Studio).
    * *macOS:* Clang (Xcode Command Line Tools).

## Compilação

Este projeto utiliza qmake (ferramenta de build do Qt) e make (ou equivalentes).

1.  *Clone o repositório:*
    bash
    git clone https://github.com/gcandidodesa/Calculadora-GUI.git
    cd NOME_DO_SEU_REPOSITORIO
    

2.  **Execute qmake para gerar o Makefile:**
    Abra um terminal (ou o "Qt Command Prompt" no Windows se você não adicionou o qmake ao PATH) na raiz do projeto e execute:
    bash
    qmake CalculadoraGUI.pro
    
    Observação: Se você tiver múltiplas versões do Qt instaladas, pode ser necessário usar o qmake específico da versão desejada (ex: qmake-qt5 ou o caminho completo para o qmake).

3.  *Compile o projeto:*
    * *No Linux ou macOS:*
        bash
        make
        
    * *No Windows com MinGW:*
        bash
        mingw32-make
        
        (O comando pode ser apenas make se o mingw32-make estiver no seu PATH como make).
    * *No Windows com MSVC (Visual Studio):*
        bash
        nmake
        
        (Você precisará estar em um "Developer Command Prompt for VS").

    Isso irá compilar o projeto e criar o executável.

## Execução

Após a compilação bem-sucedida:

* *Linux/macOS:*
    O executável CalculadoraGUI.exe estará geralmente na pasta raiz do projeto ou em uma subpasta como debug ou release (dependendo da sua configuração de build padrão, mas para qmake direto geralmente é na raiz ou na pasta onde o Makefile foi gerado).
    bash
    ./CalculadoraGUI
    
    Ou se estiver em uma subpasta:
    bash
    ./debug/CalculadoraGUI
    # ou
    ./release/CalculadoraGUI
    

* *Windows:*
    O executável CalculadoraGUI.exe estará na pasta de build (geralmente debug ou release dentro da pasta de onde você executou qmake e nmake/mingw32-make).
    bash
    debug\CalculadoraGUI.exe
    # ou
    release\CalculadoraGUI.exe
    
    *Importante (Windows):* Para que o executável funcione fora do ambiente do Qt Creator, as DLLs do Qt (como Qt5Core.dll, Qt5Gui.dll, Qt5Widgets.dll, etc.) precisam estar no mesmo diretório do executável ou o diretório bin da sua instalação do Qt (ex: C:\Qt\5.15.2\mingw81_64\bin) precisa estar no PATH do sistema. A forma mais simples para distribuição é usar a ferramenta windeployqt fornecida pelo Qt (veja a documentação do Qt para mais detalhes sobre deploy).

## Usando o Qt Creator (Alternativa)

Você também pode abrir este projeto diretamente com o [Qt Creator](https://www.qt.io/product/development-tools):

1.  Abra o Qt Creator.
2.  Selecione File > Open File or Project...
3.  Navegue até a pasta do projeto e selecione o arquivo CalculadoraGUI.pro.
4.  Configure o kit de compilação, se necessário.
5.  Clique no botão "Build" (martelo) e depois no botão "Run" (play).
