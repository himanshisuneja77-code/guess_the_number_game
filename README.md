# 🎯 Number Guessing Game (C++)

A simple console-based **Number Guessing Game** written in **C++**. The program generates a random number and challenges the player to guess it, giving hints until the correct number is found.

---

## 📌 Features

* Random number generation using `rand()`
* Menu-driven interface (Play / Exit)
* User-friendly prompts
* Counts number of attempts
* Uses basic C++ concepts (loops, conditionals, functions)

---

## 🛠️ Technologies Used

* **Language:** C++
* **Compiler:** GCC / MinGW / any standard C++ compiler
* **Header Files:**

  * `<iostream>`
  * `<cstdlib>`
  * `<ctime>`

---

## ▶️ How the Game Works

1. The program displays a menu:

   * **1. Play**
   * **2. Exit**
2. When you choose **Play**:

   * A random number is generated.
   * You are asked to guess the number.
   * The program tells you whether your guess is **too high** or **too low**.
3. The game continues until you guess the correct number.
4. The total number of attempts is displayed.
5. You can choose to play again or exit.

---

## 🚀 How to Run the Program

### Step 1: Compile

```bash
g++ guess_number.cpp -o guess_number
```

### Step 2: Execute

```bash
./guess_number
```

(For Windows: `guess_number.exe`)

---

## 📂 Project Structure

```
Number-Guessing-Game/
│
├── guess_number.cpp
└── README.md
```

---

## 🧠 Concepts Covered

* `do-while` loop
* `switch-case`
* Random number generation
* Input/output handling
* Basic game logic

---

## 📈 Possible Improvements

* Add difficulty levels (Easy / Medium / Hard)
* Limit number of attempts
* Store high scores
* Add better UI formatting

---

## 👩‍💻 Author

Created as a beginner-friendly C++ project to practice basic programming concepts.

---

⭐ If you like this project, feel free to improve or extend it!
