====================================================
============       CS 723  : README      ===========
====================================================

This README is for a Cruise Controller written in Esterel. This is a submission for Assignment 2 of COMPSYS 723 at the University of Auckland, Semester 1 2018.

During the design we have made an assumption that an input signal's value is valid even if the signal is not present. For example; if the brake is pressed (signal presence is true) and the value is 30, if in the next tick the signal is not present we assume the value remains 30.

Authors:
- Nilesh Magan (UPI: nmag404)
- Kathryn Jaggar (UPI: kjag214)


The following files should be in the same directory as the README:
- cruiseregulation.strl
- cruiseregulation_data.c
- cruiseregulation.h
- report_group_22.pdf


To run the cruise controller:
- In a bash terminal, navigate to the same directory as the README
- To compile the code, run this command "make cruiseregulation.xes" 
- To run the code, run this command "./cruiseregulation.xes" 
- The Esterel GUI should open and can be used to test the Cruise Controller  

For further information regarding this assignment please refer to the report PDF supplied.

