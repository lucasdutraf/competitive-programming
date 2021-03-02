from typing import Iterable


def replace_first(items: list) -> Iterable:
    if len(items) == 1 or len(items) == 0:
        return items
    else:
        aux = items[0]
        items.pop(0)
        items.append(aux)
        return items

print(list(replace_first([1, 2, 3, 4])))
