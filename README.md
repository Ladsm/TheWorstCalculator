# WorstCalculator

### Program Structure:
```sh
Key:
<text>   = namespace
<text>() = function
<text>.  = struct/class
H.       = Obfuscated String (Compile-time encrypted)
R.       = Registry-linked (Virtual Memory lookup)

Main
 ┃
 ┣Memory
 ┃  ┗Registry
 ┃     ┣values
 ┃     ┃  ┗R.TheGreatPoolOfNumbers
 ┃     ┗functions
 ┃        ┣InitializeRegistry()
 ┃        ┗FetchNumber<T>()
 ┃
 ┣TheCalculations
 ┃  ┣simple
 ┃  ┃  ┣Add
 ┃  ┃  ┃  ┣Stepper.
 ┃  ┃  ┃  ┗Add()
 ┃  ┃  ┗Subtract
 ┃  ┃     ┣MemoryWalker.
 ┃  ┃     ┗Subtract()
 ┃  ┗hard
 ┃     ┣Multiplication
 ┃     ┃  ┣MatrixCruncher.
 ┃     ┃  ┗Multiplication()
 ┃     ┗Divide
 ┃        ┣Searcher.
 ┃        ┗Divide()
 ┃
 ┣loop
 ┃  ┣userinput
 ┃  ┃  ┗Wrapper
 ┃  ┃     ┣doubleinputWrapper()
 ┃  ┃     ┗charinputWrapper()
 ┃  ┣output
 ┃  ┃  ┗outWrapper()
 ┃  ┣checks
 ┃  ┃  ┣simple
 ┃  ┃  ┃  ┣Add()
 ┃  ┃  ┃  ┗Subtract()
 ┃  ┃  ┣hard
 ┃  ┃  ┃  ┣Multiplication()
 ┃  ┃  ┃  ┗Divide()
 ┃  ┃  ┗what
 ┃  ┃     ┗How()
 ┃  ┗therealloop
 ┃     ┗realMain()
 ┃
 ┣obf
 ┃  ┣xor_key (0x5A)
 ┃  ┣shift (3)
 ┃  ┣enc_char()
 ┃  ┗ObfString<N>.
 ┃
 ┣doubleZ
 ┃  ┣one
 ┃  ┃  ┗doubleThatsNumberOne.
 ┃  ┗two
 ┃     ┗doubleThatsNumberTwo.
 ┃
 ┗Oh
    ┗you
      ┗want
        ┗to
          ┗use
            ┗a
              ┗chaar
                ┣Real
                ┃  ┣sorts
                ┃  ┃  ┣bubblesort()
                ┃  ┃  ┗gnomeSort()
                ┃  ┗oh
                ┃    ┗FAKELOLOLOLOLOLOLOLOL
                ┃       ┗orIs
                ┃         ┗it
                ┃           ┗H.yes
                ┗slashN
                   ┗Fine
                     ┗here
                       ┗it
                         ┗is
                           ┗charthatyouNEEEDIMSURE.
```
