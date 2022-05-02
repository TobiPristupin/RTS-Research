import sys
import pprint
from collections import Counter

# Map a mutex/rw memory address to an integer id for convenience
mutex_to_id = {}
rw_to_id = {}

# Counts how many times a thread attempted to lock a mutex
mutex_locks_attempted = Counter()

def init_mutex(addr, time_ns):
    mutex_to_id[addr] = len(mutex_to_id)

def init_rw_lock(addr, time_ns):
    rw_to_id[addr] = len(rw_to_id)

def lock_mutex(addr, time_ns):
    mutex_id = mutex_to_id[addr]
    mutex_locks_attempted.update([mutex_id])

def acquire_mutex(addr, time_ns):
    pass

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
        elif "init_rw_lock" == op:
            init_rw_lock(*args)
        elif "lock_mutex" == op:
            lock_mutex(*args)
        elif "acquire_mutex" == op:
            acquire_mutex(*args)

print(f"Mutex count={len(mutex_to_id)}")
print(f"Most common locks:{mutex_locks_attempted.most_common(10)}")

