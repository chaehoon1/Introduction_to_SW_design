def divide(dividend, divisor) :
    dividend = int(dividend)
    divisor = int(divisor)
    return dividend//divisor, dividend%divisor

dividend = input()
divisor = input()

quotient, remainder = divide(dividend, divisor)

print("Q: ", quotient, "R: ", remainder)
