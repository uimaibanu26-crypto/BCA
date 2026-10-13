def get_price(item):
    if item == "pizza":
        return 200
    elif item == "burger":
        return  100
    elif item=="juice":
        return 50
    elif item=="pasta":
        return 150
    else:
        return 0

def item_cost(item, qty):
    price=get_price(item)
    return price*qty

def calculate_gst(amount, rate=0.05):
    gst=amount*rate
    return round(gst,2)
    
def generate_bill(subtotal, discount_percent=0):
    discount =subtotal*discount_percent/100
    amount_after_discount =subtotal-discount
    gst =calculate_gst(amount_after_discount) 
    total =amount_after_discount+gst
    return discount,gst,total

def split_bill(total, people):
    each_pays =total/people
    left_over = total%people
    return each_pays,left_over


# Main program

print("----- MENU -----")
print("Pizza - Rs.200")
print("Burger - Rs.100")
print("Juice - Rs.50")
print("Pasta - Rs.150")

subtotal = 0

while True:
    item = input("\nEnter item (or 'done' to finish): ")

    if item == "done":
        break

    qty = int(input("Enter quantity: "))

    price = get_price(item)

    if price == 0:
        print("Item not available")
    else:
        cost = item_cost(item, qty)
        subtotal = subtotal + cost
        print("Item cost:", cost)

discount_percent = float(input("\nEnter discount percentage: "))
people = int(input("Enter number of people: "))

discount, gst, total = generate_bill(subtotal, discount_percent)
each_person, leftover = split_bill(total, people)

print("\n----- BILL -----")
print("Subtotal:", subtotal)
print("Discount:", discount)
  
print("GST:", gst)
print("Final Total:", total)
print("Each person pays:", each_person)
print("Rupees left over:", leftover)