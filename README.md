# Calculator
This is a very shitty calculator I made because I was bored and learning C, feedback is much appreciated :)

### Building
```sh
$ git clone https://github.com/tomanw/calculator-app.git
$ cd calculator-app
$ make
```
### Installing
```sh
$ sudo make install
```
### Uninstalling
```sh
$ sudo make uninstall
```
### Arguments:
- `-s` / `--subtract`
- `-a` / `--add`
- `-m` / `--multiply`
- `-d` / `--divide`
### Examples:
`./dist/main --subtract 10 5` -> returns `5`\
`./dist/main --add 10 5` -> returns `15`\
`./dist/main --multiply 10 5` -> returns `50`\
`./dist/main --divide 10 5` -> returns `2` (i think? i failed maths)
