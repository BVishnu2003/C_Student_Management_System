# 🎓 Student Management System (C)

A console-based **Student Management System** developed in **C** using a **Singly Linked List** and **File Handling**. The application provides a menu-driven interface to perform student record management operations.

## 📌 Features

- Add New Student Record
- Display Student Records
- Delete Record (by Roll Number or Name)
- Modify Student Record
- Sort Records (by Name or Percentage)
- Save Records to File
- Exit with or without Saving

## 🛠 Technologies Used

- C Programming
- Singly Linked List
- Dynamic Memory Allocation
- File Handling
- GCC Compiler
- Makefile
- Linux (Ubuntu)

## 📂 Project Structure

```
Student-Management-System/
│── student.h
│── main.c
│── stud_add.c
│── stud_show.c
│── stud_del.c
│── stud_mod.c
│── stud_sort.c
│── stud_save.c
│── stud_exit.c
│── Makefile
│── README.md
```

## 🚀 Compilation

Using Makefile:

```bash
make
```

Or compile manually:

```bash
gcc main.c stud_add.c stud_show.c stud_del.c stud_mod.c stud_save.c stud_sort.c stud_exit.c -o student
```

## ▶️ Run the Program

```bash
./student
```

## 📋 Menu

```
******** STUDENT RECORD MENU ********

A/a : Add New Record
D/d : Delete Record
S/s : Show Records
M/m : Modify Record
V/v : Save Records
T/t : Sort Records
E/e : Exit
```

## 📚 Concepts Used

- Structures
- Pointers
- Singly Linked List
- Dynamic Memory Allocation
- File Handling
- Modular Programming
- Functions
- Makefile

## 🎯 Learning Outcomes

- Developed a menu-driven application in C.
- Implemented CRUD operations using linked lists.
- Learned dynamic memory allocation.
- Used file handling to save student records.
- Organized code using multiple source files and a Makefile.

## 👨‍💻 Author

**B. Vishnu**
