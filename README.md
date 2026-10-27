# 💻 C++ Code Samples

Small C++ programs I wrote in 2022 while learning programming fundamentals: pointers, dynamic memory, arrays, loops and a couple of mini projects.

## 📁 Contents

| Folder | File | What it does |
|---|---|---|
| `pointers/` | [`max_value.cpp`](pointers/max_value.cpp) | Reads a list of numbers and finds the maximum using pointers |
| | [`dynamic_array_odd_sum.cpp`](pointers/dynamic_array_odd_sum.cpp) | Builds a dynamic array with `new` and sums the elements at odd positions |
| | [`weekly_total_price.cpp`](pointers/weekly_total_price.cpp) | Uses dynamic arrays (with a `typedef` pointer type) to calculate a week's total cost of cups × price |
| `arrays/` | [`array_sum_avg_min_max.cpp`](arrays/array_sum_avg_min_max.cpp) | Reads numbers into an array and prints the sum, average, max and min |
| | [`student_course_grades.cpp`](arrays/student_course_grades.cpp) | Prints a 2D table of students' grades and calculates how many credit hours a student has completed |
| `games/` | [`number_guessing_game.cpp`](games/number_guessing_game.cpp) | Two-player game: player 1 picks two numbers and player 2 tries to include them in their guesses |
| `projects/` | [`phone_billing_system.cpp`](projects/phone_billing_system.cpp) | A small phone-company billing system: call minutes, tax, currency conversion and internet plan upgrades |

## ▶️ How to run

Compile any file with `g++` and run it, for example:

```bash
g++ projects/phone_billing_system.cpp -o phone_billing
./phone_billing
```

## 🧠 Concepts practiced

Pointers · dynamic memory (`new` / `delete`) · `typedef` · 1D & 2D arrays · functions · loops (`for`, `do-while`) · conditionals · strings & `getline` · input/output formatting
