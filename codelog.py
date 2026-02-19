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
Link: {link}
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
- Rank: {rank}

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
    link = input("Problem Link: ").strip()
    difficulty = input("Difficulty (Easy/Medium/Hard): ").strip()
    ext = input("File Extension (cpp, py, java): ").strip()
    
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
        platform=platform, name=name, link=link, 
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
    solved = input("Problems Solved (e.g. 3/5): ").strip()
    rank = input("Rank: ").strip()
    learnings = input("Learnings: ").strip()
    
    # 2. Create Folder
    # Format: Platform/Contests/Date_ContestName
    date_str = datetime.date.today().strftime("%Y-%m-%d")
    folder_name = f"{date_str}_{contest_name.replace(' ', '_')}"
    folder_path = os.path.join(platform, "Contests", folder_name)
    os.makedirs(folder_path, exist_ok=True)

    # 3. Save README
    readme_path = os.path.join(folder_path, "README.md")
    readme_content = CONTEST_README.format(
        platform=platform, contest_name=contest_name, 
        date=date_str, solved=solved, rank=rank, learnings=learnings
    )
    save_file(readme_path, readme_content)
    
    print(f"\n📂 Created contest folder: {folder_path}")
    print("👉 You can manually drag your solution files into this folder later.")

    # 4. Git Sync
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