# 🎮 Number Guessing Game in C

A simple and interactive Number Guessing Game developed using the C programming language.

## 📌 About the Project

The Number Guessing Game is a beginner-friendly command-line game developed using C.

In this game, the computer generates a random number within a predefined range, and the player has to guess the number. After each guess, the program provides a hint to help the player determine whether the guessed number is too high or too low.

The game continues until the player successfully guesses the correct number.

## ✨ Features

- 🎲 Generates a random number
- 🔢 Takes guesses from the player
- 💡 Provides hints after every guess
- ⬆️ Indicates if the guess is too high
- ⬇️ Indicates if the guess is too low
- 🎯 Detects the correct guess
- 🔢 Counts the number of attempts
- 💻 Simple command-line interface
- 🎮 Interactive gameplay

## 🛠️ Technologies Used

- C Programming Language
- Standard C Library
- GCC Compiler
- Command Line / Terminal

## ⚙️ Requirements

Before running this project, make sure you have:

- A C compiler such as GCC
- A terminal or command prompt
- Windows, Linux, or macOS

## 🚀 How to Run the Project

### 1. Clone the Repository

Open your terminal or command prompt and clone this repository:

    git clone https://github.com/AryaSannigrahi30/Number-Guessing-Game.git

### 2. Open the Project Folder

After cloning the repository, open the project folder:

    cd Number-Guessing-Game

### 3. Compile the Program

Using GCC, compile the C program:

    gcc Guess.c -o guess

### 4. Run the Program

On Windows:

    NumberGuessingGame.exe

On Linux or macOS:

    ./NumberGuessingGame

## 🎯 How the Game Works

1. The computer generates a random number.
2. The player is asked to enter a guess.
3. The program compares the player's guess with the generated number.
4. If the guess is lower than the generated number, the program tells the player that the guess is too low.
5. If the guess is higher than the generated number, the program tells the player that the guess is too high.
6. The player continues guessing based on the hints.
7. When the player guesses the correct number, the program displays a success message.
8. The total number of attempts is displayed.

## 🧠 Game Logic

The basic game logic is:

    Start
      ↓
    Generate a random number
      ↓
    Ask the player to enter a guess
      ↓
    Compare the guess with the random number
      ↓
    Is the guess correct?
      │
      ├── No
      │    ↓
      │   Check the guess
      │    ↓
      │   Guess too low → Give hint
      │    OR
      │   Guess too high → Give hint
      │    ↓
      │   Ask for another guess
      │
      └── Yes
           ↓
      Display success message
           ↓
      Display number of attempts
           ↓
          End

## 📚 C Programming Concepts Used

This project demonstrates several fundamental C programming concepts:

- Variables
- Data types
- printf()
- scanf()
- User input and output
- if and else statements
- Conditional statements
- Loops
- Comparison operators
- Random number generation
- rand()
- srand()
- time()
- Program control flow
- Basic problem-solving

## 🎓 Purpose

This project was created to strengthen my understanding of C programming fundamentals and gain practical experience by building a simple interactive game.

It is a beginner-level project developed as part of my journey to improve programming, logical thinking, and problem-solving skills.

## 🚀 Future Improvements

The project can be improved in the future by adding:

- Different difficulty levels
- Custom number ranges
- Limited number of attempts
- Score system
- Play Again option
- High-score tracking
- Multiplayer functionality
- Graphical user interface

## 📖 Learning Outcome

Through this project, I gained practical experience in:

- Writing and organizing a C program
- Taking input from users
- Using conditional statements
- Using loops
- Generating random numbers
- Implementing game logic
- Working with the C standard library
- Compiling and running C programs
- Improving logical thinking
- Improving problem-solving skills

## 👨‍💻 Author

**Arya Sannigrahi**

CSE Student

This project is part of my journey of learning programming and developing practical projects.

---

⭐ Thank you for checking out my project!
