# PassCraft
# 🔐 Password Generator in C

A simple command-line Password Generator written in **C** that creates strong random passwords using uppercase letters, lowercase letters, numbers, and special characters.

---

## 📸 Preview

```text
====== Password Generator ======

Enter password length: 16

Generated Password: A@8mK#2xQ!9Lp$7Z
```

---

## ✨ Features

- Generate passwords of any desired length
- Uses:
  - ✅ Uppercase letters (A-Z)
  - ✅ Lowercase letters (a-z)
  - ✅ Numbers (0-9)
  - ✅ Special symbols (!@#$%^&*...)
- Fast and lightweight
- Simple command-line interface
- Beginner-friendly C project

---

## 🛠 Technologies Used

- C Programming Language
- Standard C Library

---

## 📂 Project Structure

```
Password-Generator/
│
├── password_generator.c
└── README.md
```

---

## 🚀 How to Compile

### GCC

```bash
gcc password_generator.c -o password_generator
```

### Run

**Windows**

```bash
password_generator.exe
```

**Linux / macOS**

```bash
./password_generator
```

---

## 📖 How It Works

1. The user enters the desired password length.
2. The program stores uppercase letters, lowercase letters, numbers, and symbols in a character pool.
3. A random character is selected from the pool for each position in the password.
4. The generated password is displayed.

---

## 🧠 Concepts Used

- Arrays
- Strings
- Loops
- Random Number Generation (`rand()`)
- `srand()` with `time()`
- Character Arrays
- User Input
- String Termination (`'\0'`)

---

## 🔮 Future Improvements

- [ ] Choose which character types to include
- [ ] Password strength indicator
- [ ] Save generated passwords to a file
- [ ] Generate multiple passwords at once
- [ ] Copy password to clipboard
- [ ] Avoid ambiguous characters (O, 0, I, l)
- [ ] Colorful terminal interface
- [ ] Custom character sets

---

## 📌 Example Output

```text
====== Password Generator ======

Enter password length: 20

Generated Password:
#A7mQ!k2Lz@9P$xWr5Ht
```

---

## 👨‍💻 Author

Created by **Lobhas Tidke**

If you found this project useful, consider giving it a ⭐ on GitHub!
