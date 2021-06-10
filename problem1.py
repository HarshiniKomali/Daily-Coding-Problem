"""
Question:
This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?
"""
def twoSum(nums,target):
    present = {}
    for num in nums:
        if target-num in present:
            return True
        present[num] = 1

    return False

if __name__ == "__main__":
    input_list = input()
    nums = [int(x) for x in input_list.split(" ")]
    target = int(input())
    print(twoSum(nums,target))


