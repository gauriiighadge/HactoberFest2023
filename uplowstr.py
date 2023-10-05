#Defining a function to convert a string to upper case and lower case with special characters
def count_chars(str):
     upper_ctr, lower_ctr, number_ctr, special_ctr = 0, 0, 0, 0
     for i in range(len(str)):
          if str[i] >= 'A' and str[i] <= 'Z': upper_ctr += 1
          elif str[i] >= 'a' and str[i] <= 'z': lower_ctr += 1
          elif str[i] >= '0' and str[i] <= '9': number_ctr += 1
          else: special_ctr += 1
     return upper_ctr, lower_ctr, number_ctr, special_ctr

#Taking input from the user           
str = input("\nEnter a string: ")

#printing the user input
print("Original Substrings: ",str)
u, l, n, s = count_chars(str)

#Printing the result
print('\nUpper case characters: ',u)
print('Lower case characters: ',l)
print('Number case: ',n)
print('Special case characters: ',s)