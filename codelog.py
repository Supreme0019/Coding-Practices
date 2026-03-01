import os
import sys
import datetime
import subprocess

# --- SETTINGS ---
# List your favorite platforms here
PLATFORMS = ["LeetCode", "Codeforces", "CodeChef", "AtCoder", "GeeksforGeeks", "Miscellaneous"]

# --- TEMPLATES ---
# This is how your code file will look
QUESTION_TEMPLATE = """/*
Platform: {platform}
Problem: {name}

Difficulty: {difficulty}
Date: {date}
*/

{code}
"""

# This is for contest notes
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

def log_question():
    print("\n--- LOG A QUESTION ---")
    
    # 1. Ask for details
    print(f"Platforms: {', '.join(PLATFORMS)}")
    platform = input("Which Platform? ").strip()
    name = input("Problem Name (e.g. Two Sum): ").strip()
    difficulty = input("Difficulty (Easy/Medium/Hard): ").strip()
    ext = "cpp"  # Now it automatically chooses C++ every time!
    
    print("\nPaste your solution code below.")
    print("(Press Ctrl+Z then Enter on Windows, or Ctrl+D on Mac/Linux to save)")
    code_lines = sys.stdin.read() # Reads multiple lines until special key

    # 2. Create Folders Automatically
    # Format: Platform/Questions/
    folder_path = os.path.join(platform, "Questions")
    os.makedirs(folder_path, exist_ok=True) # Creates folder if missing

    # 3. Save File
    date_str = datetime.date.today().strftime("%Y-%m-%d")
    safe_name = name.replace(" ", "_") # Changes "Two Sum" to "Two_Sum"
    filename = f"{date_str}_{safe_name}.{ext}"
    full_path = os.path.join(folder_path, filename)

    file_content = QUESTION_TEMPLATE.format(
        platform=platform, name=name, 
        difficulty=difficulty, date=date_str, code=code_lines
    )
    
    save_file(full_path, file_content)
    print(f"\n📄 Saved: {full_path}")

    # 4. Git Sync
    git_push(f"Solved: {name} on {platform}")

def log_contest():
    print("\n--- LOG A CONTEST ---")
    
    # 1. Ask details
    platform = input("Platform: ").strip()
    contest_name = input("Contest Name: ").strip()
    solved = input("Problems Solved summary (e.g. 2/4): ").strip()
    
    # Ask exactly how many files to loop through
    while True:
        try:
            num_codes = int(input("How many problem codes will you paste right now? (Type a number, e.g. 2): ").strip())
            break
        except ValueError:
            print("Please type a standard number like 1, 2, 3.")

    learnings = input("Learnings (or NA): ").strip()
    
    # 2. Create Folder (With Windows-safe name fix)
    date_str = datetime.date.today().strftime("%Y-%m-%d")
    
    safe_contest_name = contest_name.replace(" ", "_")
    for char in '<>:"/\\|?*':
        safe_contest_name = safe_contest_name.replace(char, '')
        
    folder_name = f"{date_str}_{safe_contest_name}"
    folder_path = os.path.join(platform, "Contests", folder_name)
    os.makedirs(folder_path, exist_ok=True)

    # 3. Save README
    readme_path = os.path.join(folder_path, "README.md")
    readme_content = CONTEST_README.format(
        platform=platform, contest_name=contest_name, 
        date=date_str, solved=solved, learnings=learnings
    )
    save_file(readme_path, readme_content)
    
    # 4. Ask for codes one by one!
    for i in range(num_codes):
        print(f"\n--- Problem {i+1} of {num_codes} ---")
        prob_name = input("Problem Name/Letter (e.g. A, B, Q1): ").strip()
        
        # Clean problem name for Windows
        safe_prob_name = prob_name.replace(" ", "_")
        for char in '<>:"/\\|?*':
            safe_prob_name = safe_prob_name.replace(char, '')
            
        print("Paste your solution code below.")
        print("(Press Ctrl+Z then Enter on Windows, or Ctrl+D on Mac/Linux to save)")
        code_lines = sys.stdin.read()
        
        # Save as a .cpp file automatically
        code_path = os.path.join(folder_path, f"{safe_prob_name}.cpp")
        save_file(code_path, code_lines)
        print(f"📄 Saved: {code_path}")

    print(f"\n📂 Contest logged successfully in: {folder_path}")

    # 5. Git Sync
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
# git add .
# git commit -m "End of day update: Solved practice problems"
# git push
# git add .
# git commit --date="yesterday" -m "End of day update: Solved 8 practice problems"
# git push
