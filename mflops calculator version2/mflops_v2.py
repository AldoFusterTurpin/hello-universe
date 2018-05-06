#!/usr/bin/env python3

# ALDO FUSTER TURPIN


def calculate_mflops(file_name):
    with open(file_name, "r") as f:
        print("The file name your provided: {}".format(file_name))
        op_cf = input(
            "Number of floating point operations of the program? ")
        op_cf = int(op_cf)
        my_list_results = []
        for line in f:
            try:
                index = line.find("=")
                if (index != -1):
                    # print(type(line[index+1:])) # debug info
                    number_str = line[index + 1:].strip()
                    number_float = float(number_str)
                    # print(number_str) # debug info
                    my_list_results.append(number_float)
            except ValueError:
                # print("Number not converted:->", number_str, "<-")#debug info
                pass

        # print(my_list_results) # debug info
        length = len(my_list_results)
        if (length > 2):
            min_value = min(my_list_results)
            max_value = max(my_list_results)
            my_list_results.remove(min_value)
            my_list_results.remove(max_value)
            try:
                mean_ms = sum(my_list_results)/len(my_list_results)
                mean_seconds = mean_ms * 10**-3
                print("The average of the execution time of {} samples\
(after deleting the min and max) is {} seconds".format(len(my_list_results),
                                                       mean_seconds))
            except ZeroDivisionError:
                print("ERROR: 0 samples collected")

            try:
                mflops = op_cf / ((10**6) * mean_seconds)
                print("MFLOPS: {}".format(mflops))
            except ZeroDivisionError:
                print("ERROR: Mean of the times is zero")

        else:
            try:
                mean_ms = sum(my_list_results) / len(my_list_results)
                mean_seconds = mean_ms * 10**-3
                print("The average of the execution time of {} samples\
    is {} seconds".format(length, mean_seconds))
                mflops = op_cf / ((10**6) * mean_seconds)
                print("MFLOPS: {}".format(mflops))
            except ZeroDivisionError:
                print("ERROR: 0 samples collected")
# ############################################################################


def main():
    try:
        file_name = input(
            "Name of the file from which to read the different numbers? ")
        calculate_mflops(file_name)
    except FileNotFoundError:
        print("ERROR. The filename you provided does not exist. Aborting...")
# ############################################################################


main()
