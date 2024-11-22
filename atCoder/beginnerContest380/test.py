def sol(n: int) -> int:
    houses = list(range(1, n + 1))
    pow_houses = [pow(house, 2) for house in houses]
    special = 0

    index = n - 1

    while index > 0:
        goal = pow_houses[index]
        sub_index = index - 1
        while sub_index >= 0:
            current_number = pow_houses[sub_index]
            remaining = goal - current_number
            houses_slice = pow_houses[0:sub_index]

            print(houses_slice)
            print(remaining)

            if remaining in houses_slice:
                print(f"{remaining}: found")
                special += 1

            sub_index -= 1

        index -= 1

    return special


if __name__ == "__main__":
    print(sol(10))
