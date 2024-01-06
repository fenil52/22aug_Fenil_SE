import datetime
import json

def save_to_file(data):
    with open('customer_data.json', 'w') as file:
        json.dump(data, file)

def load_from_file():
    try:
        with open('customer_data.json', 'r') as file:
            return json.load(file)
    except json.JSONDecodeError:
        print("Error decoding JSON. File may be corrupted.")
        return {}

def banker_menu():
    dis = load_from_file()
    li = ['name', 'balance', 'opening date']

    while True:
        print('''
            Welcome To Banker's App
    
            Operation Menu
    
            1) Add Customer
            2) View Customer
            3) Search Customer
            4) View All Customer
            5) Total Amount In Bank
            6) Exit
        ''')
        
        try:
            choice = int(input("Enter Which Operation Do You Want: "))
        except ValueError:
            print("Invalid input. Please enter a number.")
            continue

        if choice == 6:
            save_to_file(dis)
            print("Thank you :)")
            break

        elif choice == 1:
            add_customer(dis, li)

        elif choice == 2:
            view_customer(dis)

        elif choice == 4:
            view_all_customers(dis)

def add_customer(dis, li):
    aa = input("Enter Account No: ")
    bb = input("Enter Customer Name: ")
    cc = input("Enter Opening Balance: ")
    dd = datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')

    dis[aa] = {
        li[0]: bb,
        li[1]: cc,
        li[2]: dd,
    }

    print("Customer added successfully.")


def view_customer(dis):
    print(dis)


def view_all_customers(dis):
    for account_no, customer_info in dis.items():
        print(f"Account No: {account_no}")
        for key, value in customer_info.items():
            print(f"{key}: {value}")
        print("\n")

if __name__ == "__main__":
    banker_menu() 
