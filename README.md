## MCPL

### Modules Commands Compliler:

This project is a try to facilitate the compiler processing in c++ modern modules,
using abstrations commands lines.
This project was built with study proposition. It is only amateur 


É uma tentativa de facilitar a compilação usando os modernos módulos em c++,
por meio de uma abstração das linhas comando utilizadas.  
Este projeto foi construído a fim de estudar os modulos em c++ e é apenas uma simplificação amadora.

### Tree:

.
├── build
│   └── modules
├── mcpl
├── README.md
└── src
    ├── main.cpp
    └── modules
        ├── frs.cppm
        └── snd.cppm


The directory structure is very simple, because this has only study proposition.
All source files stay in src/modules and the rest of fonts in src/
At the end, all compiled modules, will be in build/modules and the rest of files will be in buid/  

A estrutura de diretórios é bem simples, uma vez que é apenas um projeto de estudo.
Os fontes dos módulos ficam em src/modules e os demains em src/
Por fim, os arquivos compilados seguiram a mesma estrutura, porém no diretório build

### Important
All modules name must be add in ./mcpl 
MODULES[N]=file_name 


Todos os módulos precisam ser declarados em ./mcpl
Para fazer isso, basta adicionar no array MODULES
MODULES[N]=file_name 