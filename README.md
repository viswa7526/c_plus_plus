# 🧮 C++ Binomial Coefficient

A small, self-contained C++ program that calculates the binomial coefficient
`C(n, r)` (also written as “n choose r”) using factorials.

## ✨ What it does

The program reads two integers, `n` and `r`, then prints:

```text
C(n, r) = n! / (r! * (n - r)!)
```

The source also defines a `sumOfDigits` helper, but the current program does
not call it.

## 🛠️ Requirements

- A C++ compiler such as GCC, Clang, or MSVC
- C++11 or newer

## 🚀 Build and run

### 🪟 Windows (GCC / MinGW)

From this directory in PowerShell:

```powershell
g++ -std=c++11 -Wall -Wextra -pedantic .\file.cpp -o .\binomial.exe
.\binomial.exe
```

### 🐧 Linux or macOS

```sh
g++ -std=c++11 -Wall -Wextra -pedantic file.cpp -o binomial
./binomial
```

## 💡 Example

```text
enter two n and r5 2
10
```

For `n = 5` and `r = 2`, the result is `C(5, 2) = 10`.

## ⚠️ Input and limitations

- Enter `n` and `r` as integers with `n >= r >= 0`.
- The program uses `int` for factorials and results, so larger inputs can
  overflow and produce an incorrect result.
- Input is not validated; invalid or out-of-range values are outside the
  program's supported input.
