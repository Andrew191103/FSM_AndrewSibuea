
# [Scientific Computing] FSM - Virtual Final Project (Automatic Recycling Vending Machine)
## Andrew Sebastian Sibuea ID2602169711

## Here is an example of a real system that can be modelled using an FSM:

The system: Automatic recycling vending machine


The code simulates the behavior of an automatic recycling vending machine. When the program is run, it repeatedly prompts the user to enter a button input of either 0 or 1. If the user enters 0, the machine's door remains closed and the program continues to prompt for input. If the user enters 1, the machine's door opens, and the program then simulates the insertion of an item into the machine. The machine then randomly decides to either accept or reject the item, and displays the corresponding message ("Machine accepts" or "Machine rejects"). After the item has been processed, the program prompts the user to repeat the process with new inputs. The whole process is designed for an automatic recycling vending machine project.



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


## 4. simulation in c:

I run the code using terminal and enter gcc -o vending_ machine main.c and . /vending machine
![howtorun](Images/howtorun.png)

After successfully running the code, i typed 1 for the input to open the door of the automatic recycling vending machine.
![run](Images/run.png)

Now that the door is open, i typed 1 again for the input to insert the item.
![dooropen](Images/dooropen.png)

The item have been inserted and accepted by the machine.
![inserted](Images/inserted.png)

And finally the machine will ask you to enter more items or to exit.
![again?](Images/runagain.png)

And if the item was rejected it ill ask you the same question again.
![error](Images/rejects.png)


