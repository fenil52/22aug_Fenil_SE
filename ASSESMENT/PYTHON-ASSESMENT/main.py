import bank_operations as bank_ops

def main():
    while True:
        print('''
    => WELCOME TO PYTHON BANK MANAGEMENT SYSTEM...

       Select your role

        1) Banker        
        2) Customer

        3.Exit
        ''')
        
        try:
            choice = int(input("Choose your role: "))
        except ValueError:
            print("Invalid input. Please enter a number.")
            continue

        if choice == 3:
            print("Thank you :)")
            break

        elif choice == 1:
            bank_ops.banker_menu()

        elif choice == 2:
            bank_ops.customer_menu()

        else:
            print("Invalid choice. Please enter a valid option.")

if __name__ == "__main__":
    main()
