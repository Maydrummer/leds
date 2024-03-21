# TP2: Pruebas unitarias
## Software requirements

```bash
sudo apt-get install ruby
sudo gem install ceedling
sudo apt install pre-commit
sudo apt install clang-format
sudo apt-get install cppcheck
sudo apt-get install doxygen
```

## Pasos para iniciar CEEDLING
Luego de tener en nuestro directorio del proyecto las carpetas **inc** y **src**, creamos una carpeta llamada **test** donde se guardaran todas las pruebas unitarias. Los pasos son:


- project.yml : este archivo contiene el enlace de los archivos fuentes, cabeceras y test, basicamente se configura las ubicaciones relativas al proyecto.

- ejecutar
```
ceedling init
ceedling new .
```
- cada vez que se vaya a realizar las pruebas unitarias se ejecuta
```
ceedling
```

Este repositorio tambien contiene las pruebas estaticas con *PRE-COMMIT* y *CPP-CHECK*.

Tambien se genero la documentacion con *DOXYGEN*.
