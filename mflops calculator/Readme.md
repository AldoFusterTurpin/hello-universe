
Context: you have a txt file with the form  

execution time 1 = 45.657  
execution time 2 = 44.1267  
execution time 3 = 50.6543  
  
whith as many lines as you want where the rows are different samples (execution time in miliseconds) 
and you want to calculate the average of that samples (after eliminating the max and min from the samples) 
and want to calculate the MFLOPS (milion floating point operations per second) of that program (the program where the   execution time comes from).  

So, given an input file  where evey row represents a different execution time obtained  
from executing a certain program, the mflops.py asks you for:  
    -the name of the file from which read the different execution times  
    -the number of floating point operations of the target program(is needed to calculate the MFLOPS)  
    
then the mflops.py:  
    ->prints on the screen the average of the execution time of the different samples in the file you   
    provided(after eliminating the min and max of the samples)  
    ->prints on the screen the mflops of the program(program refers at the program where the samples comes from).  
    
Example escenario:  
    -you have the file "program.exe" which is the program which prints on the screen(terminal) the miliseconds it 
    takes to execute after it has executed, the output has the form 
      " ... = number" 
      where '...' doesn't matter what is, the output of the program can be "execution time = 45.76" or "result = 35.87" or
      "this program takes time = 65.68944" **the only restriction for the mflops.py to work well is that the output must have
      the form "... = number" and after number, there is nothing more in that line❗️**  
    Examples of input files:  
      ✅(CORRECT)   
      execution time = 45.76565  
      execution time = 46.2565  
      execution time = 45.5  
      execution time = 34.443  
      execution time = 56.15  
      execution time = 45.76            
      ❌(WRONG)  
                 execution time = 35.76435 seconds  
                 execution time = 33.21 seconds
      ✅(CORRECT)   
                hello bla bla bla = 68  
      ❌(WRONG)     
                hello bla bla bla = 68 seconds      
      ✅(CORRECT) 
                 time to execute=68            
      ❌(WRONG)   
                  "68.6547645"   
      IF YOU WANT THAT THE PROGRAM mflops.py WORKS WITH THE INPUT WITH THE FORM  
         65.645  
         67.21  
         65.0  
         63.534  
         70.543543  
         68.4356  
     where every line is just the execution time, check my "mflops calculator_v2" folder                                                          
    -you have the file mflops.py in your current working directory
    Step 1: Then you proceed in the following way:
    ```
    $ ./program.exe >> mflops_out.txt  
    $ ./program.exe >> mflops_out.txt  
    $ ./program.exe >> mflops_out.txt  
    $ ./program.exe >> mflops_out.txt  
    $ ./program.exe >> mflops_out.txt  
    ```  
    as many times as you want(the more you repeat, the more precise it will be the final result)  
    (if you already have a txt file with the correct form with the samples of the time, you can skip the Step1)  
    Step2 : And then you do:  
    ```  
    $ python3 mflops.py  
    ```  
    and  
     - enter the name of the input text file (in this case "mflops_out.txt") and press enter  
     - enter the number of floating point operations of the program "program.exe"(you will need to study the source code)  
    and it will be printed on the screen(terminal)  
     -the average of the execution time of the samples from the input file (after deleting the min and max)  
     -the mflops of the program "program.exe"  
     
Note: $ refers to the prompt of your command line(terminal, console, etc)
    
