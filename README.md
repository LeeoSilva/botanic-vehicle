# Botanic Vehicle

Trabalho implementado na instituição de ensino UNIVEM (Centro Universitário Eurípides de Marília) cursando Bacharel em Ciência da Computação.

### Requisitos

#### Windows 
 - [Arduino software](https://www.arduino.cc/en/Guide/Windows)

#### Linux 
 - [Arduino software](https://www.arduino.cc/en/Guide/Linux)
 - [Arduino-Makefile](https://github.com/sudar/Arduino-Makefile)

## Contribuição

#### Desenvolvimento em plataformas Linux 

Caso esteja em um ambiente linux a compilação do projeto será orquestrada pelo arquivo `build/Makefile`.
A configuração deste arquivo depende das variáveis ali contidas e alterações são necessárias.

```make 
	TARGET - Nome do executável a ser gerado
	BOARD_TAG - Placa arduino utilizada no projeto
	PORT - Formato Usual: /dev/ttyUSBx onde x é a port USB serial onde seu arduino está inserido
```

Após a configuração do arquivo a compilação está pronta para ser realizada utilizando os comandos: 

No diretório `build/Makefile` compile a sketch:

```sh
	$ make
```

No diretório `build/Makefile` faça upload da sketch para o arduino: 

```sh
	$ make upload
```

No diretório `build/Makefile` limpe os arquivos contidos no arduino: 

```sh
	$ make reset
```

No diretório `build/Makefile` limpe os arquivos do seu sistema gerados pela compilação da skectch: 

```sh 
	$ make clean
```

No diretório `build/Makefile` é possível utilizar multiplos comandos disponibilizados pela Makefile como no exemplo abaixo onde
o comando irá compilar a sketch, enviar ao Arduino e limpar os arquivos de compilação respectivamente: 

```sh
	$ make upload clean
```

Para mais informações leia a [documentação](https://wiki.archlinux.org/index.php/Arduino#Makefile) fornecida pela ArchWiki para compilação de sketchs Arduino utilizando Makefile ou a [README](https://github.com/sudar/Arduino-Makefile/blob/master/README.md) do pacote arduino-makefile.
