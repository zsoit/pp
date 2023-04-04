# PROGRAMOWANIE PK

I SEMESTR
    C
II SEMESTR
    C++ Obiektowy

## Spis treści
1. [INSTALACJA KOMPLILATORA](#instalacja-kompilatora)
2. [User snippets in VSCODE](#user-snippets-in-vscode)


# INSTALACJA KOMPILATORA
## gcc - komplilator C/C++ dla Visual Studio Code
1. Link: https://nuwen.net/mingw.html (Google: MinGW Distro)
2. Pobierz plik : mingw-18.0-without-git.exe (49.3 MB)
3. Zainstaluj na Dysku C: (Extract to: )
4. Dodaj zmienną środowiskową PATH C:\MinGW\bin
(Windows + R = sysdm.cpl)
5. Zaawansowane->Zmienne środowiskowe->Path

6. (Opcjonalnie) Zainstaluj dodatki : (Ctrl+Shift+X)
Better C++ Syntax
C/C++
## Jak uruchomic?

W Visual Studio Code naciśnij : Ctrl+Shift+~
(lub: Terminal->New Split/Terminal->Nowe okno)
Polecenie: **g++ nazwa_pliku.c; ./a**


# User Snippets in VsCode:

- !c - szablon C
- !cpp - szablon C++
- !class - szablon klasy C++


Otwórz: ``` C:\Users\%USERNAME%\AppData\Roaming\Code\User\snippets ```

## nowy plik: cpp.json
```json
{
"PK Template of main.cpp":
{
  "prefix": "!cpp",
  "body": [
    "#include <iostream>",
    "#include <cstdlib>",
	"using std::cout;",
	"using std::cin;>",
	"using std::endl;",
	"using std::string;",
    "",
    "int main() {",
    "    system(\"cls\");",
    "",
    "    system(\"pause\");",
    "    return 0;",
    "}"
  ],
  "description": "PK Template of main.cpp"
},
"Template of C++ Class": {
  "prefix": "!cppclass",
  "body": [
	"#ifndef MYCLASS_H",
	"#define MYCLASS_H",
	"",
    "#include <iostream>",
    "namespace Task",
    "{",
    "    class MyClass",
    "    {",
    "        private:",
    "            int a;",
    "        public:",
    "            MyClass(){};",
    "            ~MyClass(){};",
    "    };",
    "",
    "}",
	"",
    "#endif //MYCLASS_H_HPP",
    "",
    "",
    "",
    ""
  ],
  "description": "Template of C++ Class"
}
}
```

## nowy plik: c.json
```json
{
"PK Template of main.c": {
  "prefix": "!c",
  "body": [
    "#include <stdio.h>",
    "#include <stdlib.h>",
    "",
    "#include <math.h>",
    "#include <time.h>",
    "#define PI 3.14",
    "",
    "int main() {",
    "    system(\"cls\");",
    "",
    "    printf(\"\\n\");",
    "    system(\"pause\");",
    "    return 0;",
    "}"
  ],
  "description": "PK Szablon main.c"
}
}

```


