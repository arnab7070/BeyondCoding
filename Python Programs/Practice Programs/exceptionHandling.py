def fun():
    try:
        a = int(input("Enter a number: "))
        if (a % 2 == 0):
            print("It's an even number")
            return 0  # returning the remainder
        else:
            print("It's an odd number")
            return 1
    except Exception as e:
        print(e)
        return 'NaN'
    # it's always running even after the function
    # returns from the function. That mean's it has
    # to be executed instead of returning from function
    # or not. It's the basic funda of try-except-finally
    finally:
        print("I am always executing")


a = fun()
print(a)
