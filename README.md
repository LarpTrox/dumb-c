# The Dumb C Project
Ok,**GUYS**, I just made C a lil dumber and easier, so, let me show you around:
## installation
ok, now how to ~~install~~, you just drag and drop the .h into your folder with your .c files or into the include folder in your MinGW folder or /usr/local/include or whatever, it's just that simple.
## features
* instead of `int` for numbers, you use `num`.
* instead of `char`, you use `str`.
* instead of `float`, you use `dec`.
* `donestr()` and `donemem()` are just unmodified `free`.
* `readyforinput()` is just `malloc(100 * sizeof(char)` and is meant to be used with `char` or in this case, `str`.
* `done()` is just `return 0`.
* `donecustom()` is just `return`.
* `func` is just `void`.
* `say()` is just `printf()`.
* `wait()` is just `Sleep()` but in seconds instead of miliseconds.
* and finally, the syntax for input is `input("prompt", variable)`.
## example code (doesnt use everything)
```
#include "dumbc-win.h"

start() {
    num age;
    dec height;
    str name = readyforinput();

    input("Enter your name: ", name);
    input("Enter your age: ", &age);
    input("Enter your height (in meters): ", &height);

    say("Your details are:");
    say(name);
    say(age);
    say(height);
    str mes = readyforinput();
    input("ayo :", mes);
    say(mes);

    donestr(name);
    donestr(mes);
    done();
}
```
