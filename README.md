# Code Time Machine (codeTM)

A lightweight local snapshot management tool written in C++.  
It allows saving, listing, and restoring project states using filesystem-based snapshots.



## ⚙️ How it works

codeTM runs as an interactive CLI tool.

Start the program:

```bash
codeTM.exe
```
Then enter commands in the terminal.

 # Commands
# 1. Initialize Project
```bash
codeTM init
```

Initializes the snapshot system.

You will be prompted to:

Enter project folder name

What it does:

1. Creates .codeTM directory
2. Copies project folder into snapshot system

# 2. Save Snapshot
```bash
codeTM save
```

Creates a new snapshot of the current .codeTM state.

You will be prompted to:

Enter snapshot message/name

What it does:

Appends snapshot name to Snapshots.txt
Creates a new folder using snapshot name
Copies .codeTM contents into snapshot folder
Writes snapshot metadata into snap.txt

# 3. List Snapshots
```bash
codeTM list
```

Displays all saved snapshot entries.

What it reads:

Snapshots.txt

Output:

List of snapshot names/messages

# 4. Load Snapshot
```bash
codeTM load
```
Restores a previously saved snapshot.

You will be prompted to:

Enter snapshot name

What it does:

Deletes current .codeTM
Copies selected snapshot folder back into .codeTM

# 5. Exit
```bash
exit
```

Stops the program loop.

# 📁 Storage Structure

.codeTM/
Snapshots.txt
snapshots/
├── snapshot\_name\_1/
├── snapshot\_name\_2/
└── snapshot\_name\_3/


Each snapshot contains:

Full .codeTM copy
snap.txt (snapshot metadata)

# Architecture
main.cpp     → command parser loop
init.cpp     → project initialization
save.cpp     → snapshot creation
list.cpp     → snapshot listing
load.cpp     → snapshot restore

# ⚠️ Important Behavior Notes
init must be run before using other commands
Snapshot names are used as folder names
load fully replaces .codeTM directory
Program operates entirely locally (no cloud sync)

# 🛠️ Requirements
Windows OS
Visual Studio 2022+
C++17 or higher (filesystem support required)

# 🔥 Example Workflow
codeTM init
codeTM save
codeTM list
codeTM load
exit
# Author

itzSanidhya


---
