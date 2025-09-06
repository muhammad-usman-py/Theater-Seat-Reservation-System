# 🎭 Theater Seat Reservation System (C++)

A simple **C++ console program** that simulates a small theater's seat booking system.  
It allows users to book seats, prevents duplicate reservations, and calculates the total bill.

---

## 📸 Features
- Displays available seats (25 seats arranged in 5 rows × 5 columns).
- Shows seat **price list** per row.
- Allows booking of up to **5 seats per user**.
- Prevents **duplicate seat booking**.
- Generates an **invoice** with the total cost.

---

## 🖥️ How It Works
1. The seating plan (1–25) is displayed.
2. The user enters the seat numbers they want to reserve.
3. The system validates:
   - Seat numbers are between `1–25`.
   - No seat is booked twice.
   - Maximum of **5 seats per user**.
4. Displays the seats booked and the **total bill**.

---

## 💰 Price List
| Row | Seats        | Price |
|-----|--------------|-------|
| R1  | 1 – 5        | $40   |
| R2  | 6 – 10       | $35   |
| R3  | 11 – 15      | $30   |
| R4  | 16 – 20      | $30   |
| R5  | 21 – 25      | $25   |

---

## 🚀 Run the Program
1. Clone the repository:
   ```bash
   git clone https://github.com/muhammad-usman-py/theater-seat-reservation-system.git
