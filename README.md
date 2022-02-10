# Parts Program | Invoice

A program that prompts user:

1.Part Number.

2.Quantity of Parts.

3.Price of the Part.

## Formatting the Output

The output gives you the following:

* Part Number Entered
* Quantity of Part Entered
* Price of the Part Entered
* Total Amount Calculated by multiplying the Price of the Part X Quantity of Part

<img width="620" alt="Screen Shot 2022-02-09 at 11 01 07 PM" src="https://user-images.githubusercontent.com/81205562/153354712-103671ac-8071-4ff5-b6a1-555424f2e1d4.png">

### Code that was used 

* setw() was key for spacing our output
* setfill('$') was key to fill the total space with $$$
* cout<<left was key to align our out put starting on the left
* cout<<right was key to align our output starting from the right
* fixed and setprecision() was key for the decimal spacing for the total amount              
