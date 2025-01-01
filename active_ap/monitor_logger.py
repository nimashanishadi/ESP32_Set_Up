import subprocess

try:
    with open("output.txt", "w") as f:
        process = subprocess.Popen(["idf.py", "-p", "COM3", "monitor"], stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
        for line in process.stdout:
            print(line, end="")  # Print to terminal
            f.write(line)       # Write to file
except Exception as e:
    print(f"Error occurred: {e}")
