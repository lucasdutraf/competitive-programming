def main():
    s = input()

    if len(s) > 3:
        print(False)

    a = "A" in s and "B" in s and "C" in s

    if a:
        print("Yes")
    else:
        print("No")


if __name__ == "__main__":
    main()

