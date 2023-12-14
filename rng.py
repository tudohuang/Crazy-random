import random

def random_number_generator(min_value, max_value, seed, count):
    random.seed(seed)
    return [random.randint(min_value, max_value) for _ in range(count)]

# 使用範例
min_value = 1
max_value = 100
seed = 42
count = 5

random_numbers = random_number_generator(min_value, max_value, seed, count)
print(random_numbers)
