# banking_info_1

# 💳 Simple Banking System (C++)

A beginner-friendly console-based banking application written in C++. This program simulates basic banking operations including checking your balance, depositing money, and withdrawing funds — all through an interactive menu loop.

---

## 📋 Features

- View current account balance
- Deposit money with input validation
- Withdraw money with overdraft and negative-input protection
- Clean menu-driven interface using a `do-while` loop
- Formatted currency output using `<iomanip>`

---

## 🛠️ How It Works

The program runs a loop presenting a menu to the user:

```
**********************
enter your choice
**********************
1.show balance
2.deposit money
3.withdraw money
4.Exit
```

Each option calls a dedicated function:

| Function | Description |
|---|---|
| `showbalance(double balance)` | Displays the current balance formatted to 2 decimal places |
| `deposit()` | Prompts for a deposit amount and validates it is positive |
| `withdraw(double balance)` | Prompts for a withdrawal amount and checks for sufficient funds and valid input |

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler (e.g., `g++`, `clang++`)
- A terminal or IDE (VS Code, Code::Blocks, etc.)

### Compile & Run

```bash
# Compile
g++ -o banking main.cpp

# Run
./banking
```

On Windows:
```bash
g++ -o banking.exe main.cpp
banking.exe
```

---

## 📁 Project Structure

```
simple-banking-cpp/
│
├── main.cpp       # All source code
└── README.md      # Project documentation
```

---

## 🔍 Code Highlights

### Input Buffer Handling

After reading user input, the program clears any error flags and flushes the input buffer to prevent leftover characters from breaking subsequent reads:

```cpp
std::cin.clear();
fflush(stdin);
```

### Withdrawal Validation

The `withdraw()` function guards against two invalid scenarios — trying to withdraw more than the available balance, and entering a negative amount:

```cpp
if (amount > balance) {
    std::cout << "insufficient funds\n";
    return 0;
} else if (amount < 0) {
    std::cout << "thats not a valid ammount\n";
    return 0;
}
```

### Formatted Output

Balance is always printed with exactly 2 decimal places using `<iomanip>`:

```cpp
std::cout << std::fixed << std::setprecision(2) << balance;
```



## ⚠️ Known Limitations

- Balance is not saved between sessions (no file I/O or database)
- Starting balance is hardcoded to `$123.04`
- Single account only — no login or multi-user support
- `fflush(stdin)` is technically undefined behavior in standard C++; behavior may vary across compilers



## 🌱 Possible Improvements

- [ ] Save and load balance from a file
- [ ] Add a PIN/password login system
- [ ] Support multiple accounts
- [ ] Add a transaction history log
- [ ] Replace `fflush(stdin)` with `std::cin.ignore()`



## 🧑‍💻 Concepts Practiced

- Functions with parameters and return values
- `do-while` loops and `switch` statements
- Input validation with `if-else`
- Formatted I/O with `<iomanip>`
- Scope of variables in loops


PROFILE 
https://github.com/icecold293
