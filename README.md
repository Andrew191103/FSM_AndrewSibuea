
# [Scientific Computing] FSM - Virtual Final Project (Automatic Recycling Vending Machine)
## Andrew Sebastian Sibuea ID2602169711

Here is an example of a real system that can be modelled using an FSM:

**1. The system: Automatic Recycling Vending Machine** 

**2. Model:**

FSM:  
* States: Idle, Item selection, Payment, Dispensing.  
* Transitions:
1. Idle -> Item selection: When a customer selects an item
2. Item Selection -> Payment: When the customer confirms the selection and preceeds to Payment
3. Payment -> Dispensing: When the payment is accepted and verified 
4. Dispensing -> Idle: When the item is dispensing and the transaction is complete

### FSM Diagram: 

![FSM Diagram](Images/fsmdiagram.png)

### State and Transition Table:

![State and Transition Table](Images/state&transtable.png)

### Karnaugh Map
- ##### Next State (s0') Karnaugh Map
![Karnaugh Map1](Images/karnaugh1.png)
- ##### Next State (s1') Karnaugh Map
![Karnaugh Map2](Images/karnaugh2.png)
- ##### Output (o0) Karnaugh Map
![Karnaugh Map3](Images/karnaugh1.png)
- ##### Output (o1) Karnaugh Map
![Karnaugh Map4](Images/karnaugh2.png)


## 3. Derive combinatorial boolean equations from K-map
- #### Next State (s0) Karnaugh Map
s0' = s̅0b  
- #### Next State (s1) Karnaugh Map
s1' = s̅0s1
- #### Output(o0) Karnaugh Map
o0 = s̅0b  
- #### Output(o1) Karnaugh Map
o1 = s̅0s1


**4. simulation in c:**

![Automatic Vending Machine](Images/Automatic%20vending%20machine.png)

**Decent visualization can be achieved using a graphical representation of the FSM, such as a state diagram, and using a user interface to simulate the system, such as a command line or a graphical user interface.**
 
