Context: you have a txt file with the form

execution time 1 = 45.657  
execution time 2 = 44.1267  
execution time 3 = 50.6543  
  
whith as many lines as you want where the rows are different samples (execution time in miliseconds) 
and you want to calculate the average of that samples (after eliminating the max and min from the samples).
You also want to calculate the MFLOPS (milion floating point operations per second) of that program (the program where the   execution time comes from).  

So, given an input file  where evey row represents a different execution time obtained from executing a certain program, the mflops.py asks you for:  
-the name of the file from which read the different execution times  
-the number of floating point operations of the target program (is needed to calculate the MFLOPS)  
then the mflops.py:    
-prints on the screen the average of the execution time of the different samples  
-prints on the screen the mflops of the program(program refers at the program where the samples comes from, not mflops.py).  
...........................................................  
Example escenario:  
-suppose that you have a executable file "program.exe" which is the program which prints on the screen(terminal) the miliseconds it takes to execute after it has executed, the output of that program has the form 
      " ... = number " 
      where '...' doesn't matter what is, the output of the program can be "execution time = 45.76" or "result = 35.87" or
      "this program takes time = 65.68944" **the only restriction for the mflops.py to work well is that the output must have
      the form "... = number" and after number, there is nothing more in that line❗️**  
    Examples of input files for mflops.py:  
      ✅(CORRECT)   
      execution time = 45.76565  
      execution time = 46.2565  
      execution time = 45.5  
      execution time = 34.443  
      execution time = 56.15  
      execution time = 45.76<br/><br/> 
      ❌(WRONG)  
                 execution time = 35.76435 seconds  
                 execution time = 33.21 seconds<br/><br/>
      ✅(CORRECT)   
                hello bla bla bla = 68<br/><br/>
      ❌(WRONG)     
                hello bla bla bla = 68 seconds<br/><br/>      
      ✅(CORRECT) 
                 time to execute=68<br/><br/>            
      ❌(WRONG)   
                  "68.6547645"<br/><br/>   
  IF YOU WANT THAT THE PROGRAM mflops.py WORKS WITH THE INPUT WITH THE FORM
         65.645  
         67.21  
         65.0  
         78.0  
where every line is just the execution time, check my "mflops calculator_v2" folder
  
-you have the file mflops.py in your current working directory
    Step 1: Then you proceed in the following way in the command line :<br/><br/>
    ```
    $ ./program.exe >> mflops_out.txt  
    ```  
    as many times as you want(the more you repeat, the more precise it will be the final result)  
    (if you already have a txt file with the correct form with the samples of the time, you can skip Step1)<br/><br/>
    Step2 : And then you do:  
    ```  
    $ python3 mflops.py  
    ```  
    and  
     - enter the name of the input text file which contains de different samples of the time (in this case "mflops_out.txt")      and press enter  
     - enter the number of floating point operations of the program "program.exe"(you will need to study the source code)  
    and it will be printed on the screen(terminal):  
     -the average of the execution time of the samples from the input file (after deleting the min and max for better mean)  
     -the mflops of the program "program.exe"(in toher words, the mflops of the program that produced the different samples of execution time)
     
Note: $ refers to the prompt of your command line(terminal, console, etc) and you should not write it. 
    
