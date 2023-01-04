# FSM_AndrewSibuea


Here is an example of a real system that can be modelled using an FSM:
- The system: Automatic vending machine




- Model:
FSM:
1. States: Idle, Item selection, Payment, Dispensing
2. Transitions:
- Idle -> Item selection: When a customer selects an item
- Item selection -> Payment: When the customer confirms the selection and proceeds to payment
- Payment -> Dispensing: When the payment is accepted and verified
- Dispensing -> Idle: When the item is dispensed and the transaction is complete

