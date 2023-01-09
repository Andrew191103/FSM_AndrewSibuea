
# [Scientific Computing] FSM - Virtual Final Project (Automatic Vending Machine)

Here is an example of a real system that can be modelled using an FSM:

**1. The system: Automatic Vending** 

**2. Model:**

FSM:  
* States: Idle, Item selection, Payment, Dispensing.  
* Transitions:
1. Idle -> Item selection: When a customer selects an item
2. Item Selection -> Payment: When the customer confirms the selection and preceeds to Payment
3. Payment -> Dispensing: When the payment is accepted and verified 
4. Dispensing -> Idle: When the item is dispensing and the transaction is complete

State and Transition Table: 

![State and Transition Table](Images/State%20and%20transition%20Table.png)

Karnaugh Map:

![Karnaugh Map](Images/Karnaugh%20map.png)

**3. Combinatorial Boolean equations from K-map:**
- F = x'y'z + x'yz'

 
