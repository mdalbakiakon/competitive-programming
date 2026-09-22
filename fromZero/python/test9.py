numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"

def minimumNumber(n, password):
    has_digit = False
    has_lower = False
    has_upper = False
    has_special = False

    for p in password:
        if p in numbers:
            has_digit = True
        elif p in lower_case:
            has_lower = True
        elif p in upper_case:
            has_upper = True
        elif p in special_characters:
            has_special = True

    missing_categories = 4 - sum([has_digit, has_lower, has_upper, has_special])
    length_deficit = max(0, 6 - n)

    return max(length_deficit, missing_categories)


if __name__ == '__main__':
    n = int(input().strip())
    password = input().strip()
    print(minimumNumber(n, password))