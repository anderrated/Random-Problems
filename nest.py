# 4. **List Flattening**: Given a nested list
# (e.g., `[1, [2, 3], [4, [5, 6]]]`),
# write a function to flatten it into a single
# list: `[1, 2, 3, 4, 5, 6]`
from typing import List

def flatten_list (given_list):
    flat_list = []
    for item in given_list:
        if isinstance (item, list):
            # recursively flatten nested lists
            flat_list.extend(flatten_list(item))
        elif isinstance (item, int):
            flat_list.append(item)
    return flat_list

nested_list = [1, [2, 3],[4, [5, 6]]]
print(flatten_list(nested_list))

