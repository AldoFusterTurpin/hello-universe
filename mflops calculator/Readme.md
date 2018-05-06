Context: you have a txt file with the form

45.657  
44.1267  
50.6543  
  
whith as many lines as you want where the rows are different samples (execution time in miliseconds) 
and you want to calculate the average of that samples (after eliminating the max and min from the samples).
You also want to calculate the MFLOPS (milion floating point operations per second) of that program (the program where the   execution times comes from).  

So, given an input file  where evey row represents a different execution time obtained from executing a certain program, the mflops.py asks you for:  
-the name of the file from which read the different execution times  
-the number of floating point operations of the target program (is needed to calculate the MFLOPS)  
then the mflops.py:    
-prints on the screen the average of the execution time of the different samples (after eliminating the max and min from the samples)  
-prints on the screen the mflops of the program (program refers to the program where the samples comes from, not mflops.py).    
...........................................................  
Example escenario:  
-suppose that you have in your current working directory a executable file "program.exe" which is the program which prints on the screen(terminal) the miliseconds it takes to execute, the output of that program has the form 
      "number"
-you have the file "mflops.py" in your current working directory
    Step 1: Then you proceed in the following way in the command line :<br/><br/>
    ```
    $ ./program.exe >> mflops_out.txt  
    ```  
    as many times as you want(the more you repeat, the more precise it will be the final result)  
    (if you already have a txt file with the correct form (juist a number per line), you can skip Step1)<br/><br/>
    Step2 : And then you write in the command line:  
    ```  
    $ python3 mflops.py  
    ```  
    and  
     - enter the name of the input text file which contains de different samples of the time (in this case "mflops_out.txt")      and press enter  
     - enter the number of floating point operations of the program "program.exe"(you will need to study the source code)  
    and it will be printed on the screen(terminal):  
     -the average of the execution time of the samples from the input file (after deleting the min and max if it has more than 2 elements)    
     -the mflops of the program "program.exe"(in other words, the mflops of the program that produced the different samples of execution time)
     
Note: $ <----refers to the prompt of your command line(terminal, console, etc) and you should not write it. 
    
