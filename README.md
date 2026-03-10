# Coding-Practices
My daily coding streak

Here is the complete, structured "Master Guide" to your automated Coding Practice tracker. It contains every setup step, the fully customized script, your daily workflows, and the "hacker tricks" we discussed.

Save this document or copy it somewhere safe before deleting our chat!

---

# 🚀 The Ultimate Coding Streak Automation Guide

## 🛠️ PHASE 1: One-Time Setup Check

If you are ever setting this up on a new computer, here is what you need:

1. **Python:** Download the *Standalone Installer*. **CRITICAL:** Check the box that says `"Add Python to PATH"` during installation.
2. **Git:** Download and install (keep clicking 'Next' on default settings).
3. **VS Code:** Install as your code editor.
4. **Git Config:** Run these in your terminal once:
```bash
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"

```



## 📄 PHASE 2: The Master Python Script

This is your final, fully customized `codelog.py` script. It includes all our upgrades: **C++ only, no links, "Miscellaneous" category, Windows-safe file names (no `?` errors), and the smart Contest loop.**

Create a file named `codelog.py` in your `Coding-Practice` folder and paste this:

```python
import os
import sys
import datetime
import subprocess

# --- SETTINGS ---
PLATFORMS = ["LeetCode", "Codeforces", "CodeChef", "AtCoder", "GeeksforGeeks", "Miscellaneous"]

# --- TEMPLATES ---
QUESTION_TEMPLATE = """/*
Platform: {platform}
Problem: {name}
Difficulty: {difficulty}
Date: {date}
*/

{code}
"""

CONTEST_README = """# {contest_name}
- Platform: {platform}
- Date: {date}
- Problems Solved: {solved}

## 📝 Learnings
{learnings}
"""

def save_file(filepath, content):
    with open(filepath, "w", encoding="utf-8") as f:
        f.write(content)

def git_push(message):
    try:
        print("\n🚀 Pushing to GitHub...")
        subprocess.run(["git", "add", "."], check=True)
        subprocess.run(["git", "commit", "-m", message], check=True)
        subprocess.run(["git", "push"], check=True)
        print("✅ SUCCESS! Green square secured.")
    except Exception as e:
        print(f"❌ Error: {e}")

def get_safe_name(name):
    # Removes characters that Windows hates in file names
    safe = name.replace(" ", "_")
    for char in '<>:"/\\|?*':
        safe = safe.replace(char, '')
    return safe

def log_question():
    print("\n--- LOG A QUESTION ---")
    print(f"Platforms: {', '.join(PLATFORMS)}")
    
    platform = input("Which Platform? ").strip()
    name = input("Problem Name (e.g. Two Sum): ").strip()
    difficulty = input("Difficulty (Easy/Medium/Hard): ").strip()
    
    # Customization: Hardcoded for C++
    ext = "cpp"
    
    print("\nPaste your solution code below.")
    print("(Press Ctrl+Z then Enter on Windows, or Ctrl+D on Mac/Linux to save)")
    code_lines = sys.stdin.read()

    folder_path = os.path.join(platform, "Questions")
    os.makedirs(folder_path, exist_ok=True) # Will safely use existing folder if it's already there

    date_str = datetime.date.today().strftime("%Y-%m-%d")
    safe_name = get_safe_name(name)
    filename = f"{date_str}_{safe_name}.{ext}"
    full_path = os.path.join(folder_path, filename)

    file_content = QUESTION_TEMPLATE.format(
        platform=platform, name=name, 
        difficulty=difficulty, date=date_str, code=code_lines
    )
    
    save_file(full_path, file_content)
    print(f"\n📄 Saved: {full_path}")
    git_push(f"Solved: {name} on {platform}")

def log_contest():
    print("\n--- LOG A CONTEST ---")
    platform = input("Platform: ").strip()
    contest_name = input("Contest Name: ").strip()
    solved = input("Problems Solved summary (e.g. 2/4): ").strip()
    
    while True:
        try:
            num_codes = int(input("How many problem codes will you paste right now? (Type a number, e.g. 2): ").strip())
            break
        except ValueError:
            print("Please type a standard number like 1, 2, 3.")

    learnings = input("Learnings (or NA): ").strip()
    
    date_str = datetime.date.today().strftime("%Y-%m-%d")
    safe_contest_name = get_safe_name(contest_name)
        
    folder_name = f"{date_str}_{safe_contest_name}"
    folder_path = os.path.join(platform, "Contests", folder_name)
    os.makedirs(folder_path, exist_ok=True)

    readme_path = os.path.join(folder_path, "README.md")
    readme_content = CONTEST_README.format(
        platform=platform, contest_name=contest_name, 
        date=date_str, solved=solved, learnings=learnings
    )
    save_file(readme_path, readme_content)
    
    for i in range(num_codes):
        print(f"\n--- Problem {i+1} of {num_codes} ---")
        prob_name = input("Problem Name/Letter (e.g. A, B, Q1): ").strip()
        safe_prob_name = get_safe_name(prob_name)
            
        print("Paste your solution code below.")
        print("(Press Ctrl+Z then Enter on Windows to save)")
        code_lines = sys.stdin.read()
        
        code_path = os.path.join(folder_path, f"{safe_prob_name}.cpp")
        save_file(code_path, code_lines)
        print(f"📄 Saved: {code_path}")

    print(f"\n📂 Contest logged successfully in: {folder_path}")
    git_push(f"Contest: {contest_name}")

def main():
    print("What do you want to log?")
    print("1. A single question")
    print("2. A contest")
    choice = input("Type 1 or 2: ").strip()

    if choice == "1":
        log_question()
    elif choice == "2":
        log_contest()
    else:
        print("Invalid choice")

if __name__ == "__main__":
    main()

```

---

## 🏃‍♂️ PHASE 3: Your Daily Workflows

You have two ways to log your work. Use whichever fits your mood.

### Method A: The Script Way (Best for 1 or 2 problems)

1. Open Terminal in VS Code (`Ctrl` + `~`).
2. Type `python codelog.py` and hit Enter.
3. Answer the prompts.
4. When it asks for code, **Paste it**, then press **`Ctrl + Z` and hit Enter** to save.
5. The robot formats the file and pushes it to GitHub automatically.

### Method B: The "Fast Marathon" Way (Best for bulk coding)

1. Open the VS Code file explorer.
2. Manually create folders or files (e.g., `Codeforces/Questions/2026-03-10_MyProb.cpp`).
3. Write/paste your code manually and press `Ctrl + S` to save.
4. **End of Day:** Open the terminal and run your 3 manual Git commands to send everything to GitHub at once.

---

## 💡 PHASE 4: Git Cheat Sheet & Hacker Tricks

### 1. The Standard "End of Day" Push

Run these 3 commands if you coded manually or made edits to your files:

```bash
git add .
git commit -m "End of day update: Solved practice problems"
git push

```

### 2. The "Oops, I Forgot" Lazy Trick

If you manually create a file today but forget to push it, **don't worry**. The next time you run `python codelog.py` for a *new* problem tomorrow, the script's built-in Git commands will automatically sweep up your old file and push it to GitHub for you.

### 3. The Time Machine (Saving Yesterday's Streak)

If you coded yesterday but forgot to push, and you don't want to lose your green square, run these 3 commands. Git will trick GitHub into logging the commit for yesterday:

```bash
git add .
git commit --date="yesterday" -m "End of day update: Solved 8 practice problems"
git push

```

*(Wait 5-10 minutes and refresh GitHub to see your saved streak!).*

---

You now possess a complete, robust system to build an impressive competitive programming portfolio with minimal friction. Good luck with the daily streak—you've got this! Let me know if you need anything else before you close this out.