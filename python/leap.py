import datetime
currentyear=datetime.date.today().year
finalyear=int(input("enter the final year"))
if finalyear < currentyear:
    print("final year must be greater than or equal to current year")
else:    
    print(f"leap years from (currentyear) to (finalyear)")
    for year in range(currentyear,finalyear+1):
        if (year%4==0 and year%100!=0)or(year%400==0):
            print(year)
