import sys
import pprint
from collections import Counter

# Map a mutex/rw memory address to its name
mutex_to_name = {}

# Counts how many times a thread attempted to lock a mutex
mutex_locks_attempted = Counter()

# Maps a mutex to its last acquired time
mutex_last_acquired = {}
# Maps a mutex name to its longest held time
mutex_longest_held = Counter()

def init_mutex(addr, time_ns):
    pass

def mutex_name(addr, name):
    mutex_to_name[addr] = name

def lock_mutex(addr, time_ns):
    name = mutex_to_name[addr]
    mutex_locks_attempted.update([name])

def acquire_mutex(addr, time_ns):
    name = mutex_to_name[addr]
    mutex_last_acquired[name] = int(time_ns)

def unlock_mutex(addr, time_ns):
    name = mutex_to_name[addr]
    if name not in mutex_last_acquired:
        return
    last_acquired = mutex_last_acquired[name]
    max_held = mutex_longest_held.get(name, -1)
    duration_ms = (int(time_ns) - last_acquired) / 1000000
    mutex_longest_held[name] = max(max_held, duration_ms)

if len(sys.argv) - 1 != 1:
    print("Please pass in a filename")
    exit(-1)

filename = sys.argv[1]
pp = pprint.PrettyPrinter()
with open(filename, 'r') as file:
    for line in file:
        line = line.replace("\n", "")
        op, *args = line.split()
        op.strip()

        if "init_mutex" == op:
            init_mutex(*args)
        elif "mutex_name" == op:
            mutex_name(*args)
        elif "lock_mutex" == op:
            lock_mutex(*args)
        elif "acquire_mutex" == op:
            acquire_mutex(*args)
        elif "unlock_mutex" == op:
            unlock_mutex(*args)

print(f"Mutex count={len(mutex_to_name)}")
print(f"Most common locks:{mutex_locks_attempted.most_common(10)}")
print(f"Longest held: {mutex_longest_held.most_common(10)}")

