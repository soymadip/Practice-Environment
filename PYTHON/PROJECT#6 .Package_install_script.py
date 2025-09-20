import os, subprocess # new knpwledge entry
from packages import PACKAGES
PKGS = "python yay " + PACKAGES # must check dependencies before proceeding.


os.system("clear")
print("Welcome to App install script.")
Q=input("Lets Start? [N/Y]: ")

if(Q=="N" or Q=="n"):
    print("ok, tell me when you are ready 😀")
else:
    pass


for pkg in PKGS.split(" "):
    try:
        rslt=str(subprocess.check_output(f"pacman -Q {pkg}", shell=True, text=True).strip())
        if(rslt.split(" ")[0] == f"{pkg}"):
            print(f"{pkg} is pre-installed,")
    except subprocess.CalledProcessError:
        print(f"installing {pkg}")
        os.system(f"yay {pkg} --noconfirm")
print("done")