# 🔵 LoadRunner Login Performance Test

This repository contains an example of a simple load test:  
1. Opening the main page  
2. Authorization using login and password  
3. Obtaining the profile page  

The scenario is parameterized — user data is taken from a CSV file.

---

## 📂 Project structure
```.

├── users.csv          
├── login_action.c     
└── README.md
```

---

## ⚙️ How to run

1. Open the project in VuGen.  
2. Connect `users.csv` via **Parameter List → File**.  
3. Run the script in VuGen or via Controller.  

---

## 🧩 CSV (users.csv)
```csv
username,password
testuser1,pass1
testuser2,pass2
testuser3,pass3
```

---

## 🎯 Purpose
- Demonstration of parameterization in LoadRunner.  
- A basic example to get started, which can be expanded for real-world scenarios.  
