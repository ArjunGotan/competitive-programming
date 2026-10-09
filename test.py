def main():
    s = input("s: ")
    weight = int(input("w: "))
    count = 0

    for i in range(1, len(s)+1): # window length
        for start_index in range(0, len(s)-i+1):
            if weight == value(s[start_index:start_index + i]):
                count += 1
    



def value(s):
    return (sum((ord(i) - ord('a') + 1) for i in s))


if __name__ == "__main__":
    main()