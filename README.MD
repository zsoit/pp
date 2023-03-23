# PROGRAMOWANIE PK

I SEMESTR
    C
II SEMESTR
    C++ Obiektowy



# User Snippets in VsCode:

- !c - szablon C
- !cpp - szablon C++
- !class - szablon klasy C++



Open: ```cmd C:\Users\%USERNAME%\AppData\Roaming\Code\User\snippets ```

## add new file: cpp.json
```json
{
"PK Template of main.cpp":
{
  "prefix": "!cpp",
  "body": [
    "#include <iostream>",
    "#include <cstdlib>",
    "",
    "int main() {",
    "    system(\"cls\");",
    "",
    "    system(\"pause\");",
    "    return 0;",
    "}"
  ],
  "description": "PK Szablon main.cpp"
},
"Template of C++ Class": {
  "prefix": "!class",
  "body": [
    "#include <iostream>",
    "namespace Zadanie",
    "{",
    "    class MojaKlasa",
    "    {",
    "        private:",
    "            int a;",
    "        public:",
    "            MojaKlasa(){};",
    "            ~MojaKlasa(){};",
    "    }",
    "        ",
    "}",
    "",
    "",
    "",
    "",
    ""
  ],
  "description": "Szablon klasy C++"
}
}
```

## add new fil: c.json
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


