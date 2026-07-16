# sgpa_calculator_c
# 🎓 SGPA Calculator in C

A simple console-based **Semester Grade Point Average (SGPA) Calculator** developed in **C Programming Language**. The program calculates the SGPA based on students' marks, course credits, and the BAUET grading system.


##  Overview

This project was developed as an academic project to automate semester GPA calculation.

The program takes marks for all first-year first-semester courses, determines the corresponding letter grades and grade points, and calculates the final SGPA using the credit-based grading system.


##  Features

- Console-based application
- Calculates SGPA automatically
- Determines letter grades from marks
- Assigns grade points according to the grading policy
- Uses course credits for SGPA calculation
- Displays each course with its grade and grade point


## 🛠 Technologies Used

- C Programming Language
- Standard C Library
- GCC Compiler


##  Courses Included

- ICE 1111 – Fundamental of ICT
- ICE 1112 – ICT Lab
- EEE 1121 – Basic Electrical and Circuit Analysis
- EEE 1122 – Electrical Lab
- MATH 1141 – Differential and Integral Calculus
- PHY 1131 – Engineering Physics
- PHY 1132 – Physics Lab
- ENG 1151 – Technical Writing and Presentation
- ENG 1152 – Writing Lab
- HUM 1153 – Bangladesh Studies

**Total Credits:** 21


##  Grading System

| Marks | Grade | Grade Point |
|------:|:-----:|-----------:|
| 80–100 | A+ | 4.00 |
| 75–79 | A | 3.75 |
| 70–74 | A- | 3.50 |
| 65–69 | B+ | 3.25 |
| 60–64 | B | 3.00 |
| 55–59 | B- | 2.75 |
| 50–54 | C+ | 2.50 |
| 45–49 | C | 2.25 |
| 40–44 | D | 2.00 |
| Below 40 | F | 0.00 |


##  How to Run

Compile the program using GCC:

```bash
gcc main.c -o sgpa
```

Run the executable:

### Windows

```bash
sgpa.exe
```

### Linux/macOS

```bash
./sgpa
```

---

## 📸 Sample Output

```text
SGPA CALCULATION

Enter marks of all courses:

ICE 1111 - Fundamental of ICT: 82
ICE 1112 - ICT Lab: 90
...

1st Year 1st Semester Result

ICE 1111 - Fundamental of ICT
Grade: A+
Grade Point: 4.00

...

Total SGPA = 3.82
```

---

## 📁 Project Structure

```
SGPA-Calculator-C/
│
├── main.c
├── README.md
└── LICENSE
```


## 👩‍💻 Author

**Mst. Sabrina Yasmin**

Department of Information and Communication Engineering (ICE)

Bangladesh Army University of Engineering & Technology (BAUET)

---

## 📄 License

This project is licensed under the MIT License.
