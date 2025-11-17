# 🦉 Banner

**Banner** is a lightweight C utility that prints custom banners in the terminal using ASCII art and ANSI colors.  
It’s designed to make your project headers or startup messages stand out with a clean, colorful style.

---

## 📜 Description

The main function, `ft_banner()`, takes a string as an argument and displays:

- The project name or custom text in **Shadow-style ASCII art**  
- A small **owl drawing** below the text  
- A signature line such as `by kebris-c` with color and separators  

Example output:

```

██████╗ ██╗   ██╗███████╗██╗  ██╗    ███████╗██╗    ██╗ █████╗ ██████╗
██╔══██╗██║   ██║██╔════╝██║  ██║    ██╔════╝██║    ██║██╔══██╗██╔══██╗
██████╔╝██║   ██║███████╗███████║    ███████╗██║ █╗ ██║███████║██████╔╝
██╔═══╝ ██║   ██║╚════██║██╔══██║    ╚════██║██║███╗██║██╔══██║██╔═══╝
██║     ╚██████╔╝███████║██║  ██║    ███████║╚███╔███╔╝██║  ██║██║
╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝════╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝
                      ,_,
                     (O,O)
                     (   )
                     -"-"-
------------------ by kebris-c ------------------
----------------------- 🦉 ----------------------

```

---

## 🧩 Project Structure

```

banner/
├── include/
│   └── banner.h              # Prototypes and color defines
├── src/
│   ├── ft_banner.c           # Main function
│   ├── create_font_dict_a_to_m.c
│   ├── create_font_dict_n_to_z.c
│   ├── create_font_dict_numbers.c
│   ├── font_utils.c          # new_font_node() and free_font_dict()
│   └── ...                   # Additional helper files
└── Makefile

````

---

## ⚙️ Compilation

With **Makefile**:
```bash
make
````

Or manually:

```bash
gcc -Wall -Wextra -Werror -Iinclude src/*.c -o banner
```

---

## 🚀 Usage

Example test file (`main.c`):

```c
#include "banner.h"

int main(void)
{
    ft_banner("My_Project");
    return (0);
}
```

Run it:

```bash
./banner
```

---

## 🎨 Features

* Fully colored **ANSI output**
* Custom **ASCII art font dictionary**
* Modular and **Norminette-compliant**
* Memory-safe: dynamically allocates and frees the font dictionary
* Works on **Linux**, **macOS**, and most POSIX terminals

---

## 🧠 Implementation Details

Each character (`A–Z`, `0–9`, `_`, `-`) is defined as a node (`t_font_dict`)
containing 6 lines of ASCII art. The function dynamically builds the dictionary,
renders the text, and frees all memory after printing.

The structure:

```c
typedef struct s_font_dict
{
    char letter;
    char *lines[6];
    struct s_font_dict *next;
}   t_font_dict;
```

---

## 🧰 Dependencies

* Custom implementation of `ft_printf` (compatible with 42 projects)
* Standard C library headers (`stdlib.h`, `unistd.h`, etc.)
* ANSI color codes defined in `banner.h`

---

## 👨‍💻 Author

**by kebris-c**

> “Make your terminal a little prettier 🦉”
