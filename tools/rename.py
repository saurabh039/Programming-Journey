from pathlib import Path
import re

root = Path(__file__).parent.parent

for file in root.rglob("*"):
    if file.is_file():
        m = re.match(r"program(\d+)$", file.stem)
        if m:
            num = int(m.group(1))
            new_name = f"program{num:03d}{file.suffix}"
            file.rename(file.with_name(new_name))
            print(f"{file.name} -> {new_name}")

print("Done!")