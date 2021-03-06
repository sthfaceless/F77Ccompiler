# F77Ccompiler
## Compiler from Fortran-77 to C language
### Build requirements
- flex=2.6.4
- bison=3.5.1
- g++=9.3.0
- gcc=9.3.0
- cmake=3.16.3
- `f77lexer.l`, `f77parser.y`, all contens of src/*
### Runtime requirements
- `f77.h` file at working directory
- don't forget to link math library during compilation `-lm`
### Usage
- `bash scripts/build.sh` or 3 following commands
  - `bison -o "${PROJECT_DIR}/src/f77parser.c" "${PROJECT_DIR}/f77parser.y" -d `
  - `flex -o "${PROJECT_DIR}/src/f77lexer.c" "${PROJECT_DIR}/f77lexer.l"`
  - `g++ -o lexer src/classes.cpp src/classes.h src/defs.h src/f77parser.h src/f77lexer.c src/f77parser.c src/utils.h src/utils.cpp src/debug.h src/global.h -lm`
- `bash scripts/translate.sh <input_file> <output_file>` by default it translates example.f to example.c
- or you could directly ran executable `"${PROJECT_DIR}/cmake-build-debug/lexer"` using `stdin` for Fortran77 and `stdout` for C
- running executable file with `-d` flag outputs fortran code tokenization to `stderr`
### Supported statements
- declaration and assignments for basic types `logical`, `integer`, `real`, `character*n`, `double precision`, `complex`
- constants of types described above
- arithmetical operators  `+`, `-`, `*`, `/`, `**`, `()`
- comparison operators `.eq.`, `.ne.`, `.lt.`, `.le.`, `.gt.`, `.ge.`
- binary operators `.eqv.`, `.neqv.`, `.or.`, `.not.`, `.and.`, `.xor.`
- simple if statement `if (<expression>) then ... else if (<expression>) then ... endif`
- simple do statement
  - `do var=<l>, <r> [, <step>] ... enddo` 
  - `do while(expression) ... enddo`
- function definition 
  - `[<type>] function ([varlist]) ... end`
  - `subroutine ([varlist]) ... end`
- `stop`
- `pause <number>`
- `open(<unit>, file=<filename>)`
- `close(<unit>)`
- `print *, [iolist]`
- write statements
  - `write (<unit>, *) [iolist]`
  - `write (<unit>) [iolist]`
- read statements (empty iolists are not allowed)
  - `read *, [iolist]`
  - `read (<unit>) [iolist]`
  - `read (<unit>, *) [iolist]`
- label statements `<number> stmt`
- `goto <label>`
