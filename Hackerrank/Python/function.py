def is_leap(year):
  
    
    # Write your logic here
   
   
    if year%4 == 0 and year%400 == 0  :
       return True
    elif year%4==0 and year%100 != 0:
        return True
    else :
        return False