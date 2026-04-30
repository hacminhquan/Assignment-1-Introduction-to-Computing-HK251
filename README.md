# Assignment-1-Introduction-to-Computing-HK251
Infinity Castle Battle (Game Mechanism Simulation)

<p align="center">
  <img src="https://img.shields.io/badge/C++-17-blue?logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen" />
  <img src="https://img.shields.io/badge/Course-CO1005-lightgrey" />
</p>

---

## Overview

This project is a C++ program that simulates a multi-stage battle scenario inspired by the *Infinity Castle* setting.
The program applies conditional logic, arithmetic modeling, and structured programming to evaluate outcomes across four sequential scenes.

It is designed to demonstrate:

* Conditional branching (if-else, nested logic)
* Input processing and validation
* Mathematical computation
* Structured program flow

The assignment specification defines four core scenes and required outputs. 

---

## Program Structure

The simulation is divided into four scenes:

### Scene 1 – Power Classification

Compute the power index:

```text
power = slayerLevel * 10 + hp / 10 + breathingMastery * 50
```

Classification:

* power ≥ 120 → Hashira
* 80 ≤ power < 120 → Elite
* power < 80 → Novice

---

### Scene 2 – Infinity Castle Gate

Decision logic:

* No talisman → Denied
* Invalid time → Warning
* Night + demon present → Open silently
* Otherwise → Open cautiously

---

### Scene 3 – Battle Strategy

```text
adv = (101 - demonRank * 15) + swordSharpness * 0.4 + allyCount * 5
```

Strategy:

* adv ≥ 100 → Engage head-on
* 60 ≤ adv < 100 → Harass and probe
* adv < 60 → Retreat and regroup

---

### Scene 4 – Final Outcome

```text
finalHP = bossHP - totalDamage
```

Result:

* finalHP ≤ 0 → Boss defeated
* finalHP ≤ 50 and special move ready → Finish with special move
* Otherwise → Withdraw to heal

---

## Features

* Single-line structured input (12 parameters)
* Floating-point formatting using `setprecision(1)`
* Cross-platform system calls (Windows / macOS / Linux)
* Timed delay using `<thread>` and `<chrono>`
* External link trigger (YouTube soundtrack)
* Clean formatted output for each scene

The code also demonstrates platform-specific execution using preprocessor directives. 

---

## Requirements

* C++17 compatible compiler
* Standard libraries:

  * `<iostream>`
  * `<iomanip>`
  * `<thread>`
  * `<chrono>`
  * `<string>`

---

## How to Run

### Compile

```bash
g++ -std=c++17 hmq_infinitycastlebattle.cpp -o main
```

### Run

```bash
./main
```

---

## Input Format

Single line input (12 values):

```text
slayerLevel hp breathingMastery hasTalisman timeOfDay demonPresence demonRank swordSharpness allyCount bossHP totalDamage specialMoveReady
```

Example:

```text
8 950 0.8 1 N 1 3 72.5 2 420 380 1
```

---

## Example Output

```text
[Scene 1] Rank: Hashira (power = 215.0)
[Scene 2] Open silently.
[Scene 3] Harass and probe (adv = 95.0)
[Scene 4] Use special move to finish! (finalHP = 40)
```

This matches the expected behavior defined in the specification and validated test cases. 

---

## Project Structure

```text
.
├── hmq_infinitycastlebattle.cpp
├── report/
│   └── InfinityCastleBattle_Assg1.pdf
├── spec/
│   └── 251_NMDT_Ass1_EN_v1.pdf
└── README.md
```

---

## Key Concepts Demonstrated

* Conditional logic and nested branching
* Mathematical modeling in programming
* Input validation and error handling
* Cross-platform system interaction
* Structured output formatting

---

## Limitations

* Console-based only (no GUI)
* No input validation for numeric ranges
* Uses system() which may be restricted in some environments
* Simulation is deterministic (no randomness)

---

## Author

Hắc Minh Quân
Student ID: 2550201 

---

## License

This project is for academic and educational use.
