import os
import in_place

count = 0
ignored_files = ["sync.c", "sync.h"]
for subdir, dirs, files in os.walk("/home/pristu/Documents/School/Gill/rts-research/cyclonedds/src"):
    for file in files:
        if file in ignored_files:
            continue

        with in_place.InPlace(os.path.join(subdir, file)) as f:
            for line in f:
                if "mutex_name" in line:
                    idx = line.rindex('"')
                    line = line[:idx] + "\\n" + line[idx:]
                f.write(line)

print(count)

