# 🚀 Set Up a C++ Development Environment (MSYS2 MinGW-w64 + VS Code, on D:)

This guide walks you through setting up a full C++ development environment using **MSYS2 MinGW-w64** and **Visual Studio Code** on Windows, with installation on drive `D:`.

---

## 1️⃣ Install MSYS2 (MinGW-w64) on `D:`

1. Download the installer from [https://www.msys2.org/](https://www.msys2.org/).
2. Run it and **choose installation path**:  
   ```
   D:\msys64
   ```
   ⚠️ Avoid spaces in the path.
3. Open **MSYS2 UCRT64** from the Start Menu.

### Update & Install Toolchain
In the **UCRT64 terminal**, run:

```bash
# update package database and core packages
pacman -Syu
# restart the shell if asked, then run:
pacman -Syu

# install GCC toolchain and GDB debugger
pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-gdb
```

---

## 2️⃣ Add MSYS2 `bin` to Windows PATH

This allows `g++` and `gdb` to be accessible from PowerShell, CMD, and VS Code.

1. Open: **Windows → System Properties → Advanced → Environment Variables → Path → Edit → New**  
2. Add the following path:
   ```
   D:\msys64\ucrt64\bin
   ```
3. Click **OK** and restart VS Code (important — VS Code reads PATH on startup).

### Verify installation
Open **PowerShell** and run:
```powershell
g++ --version
gdb --version
```

---

## 3️⃣ Install VS Code + Extensions

1. [Download and install Visual Studio Code](https://code.visualstudio.com/).
2. In VS Code, install the following extensions:
   - **C/C++ (Microsoft)** ✅
   - *(Optional)* [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)  
   - *(Optional)* [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)

---

## 4️⃣ Configure IntelliSense in VS Code

1. Install **C/C++ Extension Pack** (if not already).
2. Open your **C++ project** in VS Code.
3. Press `Ctrl+Shift+P` → search for:  
   ```
   C/C++: Select IntelliSense Configuration
   ```
4. Select **GCC for x64 (UCRT64)**.
5. VS Code will now correctly detect headers in:
   ```
   D:\msys64\ucrt64\include
   ```
   ✅ No more `#include <iostream>` errors.

---

## 🎉 You’re Ready!

You now have a working **C++ dev environment** with:
- GCC (`g++`) compiler
- GDB debugger
- VS Code editor with IntelliSense & debugging

Start coding your first program:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, C++ World!" << endl;
    return 0;
}
```

Compile & run:
```bash
g++ main.cpp -o main
./main
```

---

## 🛠 Troubleshooting

- If `g++` is not found in VS Code terminal → ensure PATH is set correctly and VS Code has been restarted.
- If IntelliSense still shows errors → re-run `Ctrl+Shift+P → C/C++: Select IntelliSense Configuration` and pick the correct GCC (UCRT64).

---

💡 Tip: Keep MSYS2 updated regularly:
```bash
pacman -Syu
```
