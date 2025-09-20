# This is a small Python file to automatically move backed up files(dotfiles) to proper directories, in case of reseting my PC or system crash.
# And this is my 1st code that has real-life use case.😇
# IF SOMEONE WANNA USE IT, MAKE SURE THAT YOU ARE USING AFTER FRESH OS INSTALL.
# BECAUSE THIS SCRIPT CAN CRASH OR DELETE YOUR OLD FILES IN DIRECTORIES.
# Run sudo python3 -u "<Path to this file>"

#____________________ User configs ____________________________________________________________

# Paths:
Root= "/home"                        # root directory
Home= f"{Root}/sd/2"                  # home directory. pattern: "/{Root_folder}/<your username>"
BckpPath="/mnt/sdb1/SDD BACKUP"      # where Backup folder is located.
Rest_flname="restore.py"             # This file's name. CHANGE IT YOU YOU'VE CHANGED THIS FILE'S NAME.
CPath=f"{Home}/.config"              # path to [.Config] Directory. for dotfiles.
LsPath=f"{Home}/.local/share"        # path to [.local/share] folder. for plasma settings. 
# Misc:
Pck_Mger= "nala"                     # The package manager your OS is using. I am using Nala instead of apt.

# Back up directories:
Dicts = {
    ".librewolf": f'{Home}',
    ".mozilla": f'{Home}',           # Pattern: "<directory name>":f'<path>', Edit as you need.
    ".oh-my-zsh": f'{Home}',    
    ".themes": f'{Home}',
    ".vscode-oss": f'{Home}',        # Also path can be added directly instead of using variable.
    "Documents": f'{Home}',
                                     # space for clarity between separate Parent-directories.
    "autostart": f'{Home}',
    "gtk-3.0": f'{CPath}',
    "gtk-4.0": f'{CPath}',
    "kdedefaults": f'{CPath}',
    "libreoffice": f'{CPath}',
    "menus": f'{CPath}',
    "mpv": f'{CPath}',
    "neofetch": f'{CPath}',
    "syncthing": f'{CPath}',
    "plasma-workspace": f'{CPath}',
    "VSCodium": f'{CPath}',
#   "dolphinrc": f'{CPath}',          # crashing, gotta fix this.
#   "plasmaConfSaver": f'{CPath}',    # I Don't need this. just for reminder.
#   "systemsettingsrc": f'{CPath}',
                        
    "color-schemes": f'{LsPath}',
    "flatpak": f'{LsPath}',
    "icons": f'{LsPath}',
    "knewstuff3": f'{LsPath}',
    "konsole": f'{LsPath}',
    "kxmlgui5": f'{LsPath}',
    "plasma": f'{LsPath}',
    "systemsettings": f'{LsPath}',
    "themes": f'{LsPath}'
}


# Use  'Ctrl+s' & 'meta+x' to save,quit this file.

# ------------------ DON'T TOUCH ANYTHING AFTER THIS --------------------------------------
# ----------------- UNLESS YOU KNOW WHAT YOU'RE DOING -------------------------------------

#________________________ All Restore Functions _________________________________________________

import os, shutil                        # Gotta know more abput this 'shutil' module.


# First setup wizard:-
def get_user_choice(inp):
    global wpath
    wpath= os.getcwd()                    # this is global
    if(inp=='n'):
        pass
    else:
        os.system(f'nano "{wpath}/{Rest_flname}"')


# For making  directories if they don't exist:-
def CheckPaths(Dict):
    print('|\n|-\033[1;32m☢️  Directory check Started:-\033[0m\n|\n|')
    for k,v in Dict.items():
        sp = v.split(f'{Home}')[1]
        print('|')
        if(not os.path.exists(f'{v}/{k}')):
            os.makedirs(f"{v}/{k}/", exist_ok=True)
            print(f"|- Created [~{sp}/{k}] as it didn't exist.")
        else:
            print(f'|- [~{sp}/{k}] exists.')
    print('|\n|\n|\n|-\033[1;32m☢️  Directory check completed.\033[0m')



# For moving files to appropiate directories:
def copy(src, dst, symlinks=False, ignore=None): # symlinks will be copied as regular file/directory
    for item in os.listdir(src):
        if(item=='lock'):
            pass
            print(f'|-\033[91m SKIPPED [{src}/{item}].\033[0m\n|-\033[91m Move it manually.\033[0m')  # causing crash
            continue
        else:
            s = os.path.join(src, item)
            d = os.path.join(dst, item)
#       print(f"Copying from: {s} to: {d}")      # Print source and destination. for testing purpose.
        if os.path.isdir(s):
            if symlinks:
                shutil.copytree(s, d, symlinks, ignore)
            else:
                copy(s, d, symlinks, ignore)
        else:
            if not (symlinks and os.path.islink(s) and os.path.exists(os.readlink(s))):
                os.makedirs(os.path.dirname(d), exist_ok=True)
                shutil.copy2(s, d)

def copytree(Dict):
    print('|\n|-\033[1;32m☢️  Starting to move backed-up folders.\033[0m\n|\n|')
    for k,v in Dict.items():
        print(f'|- [{k}] started.')
        copy(f'{BckpPath}/{k}',f'{v}/{k}')
        print(f'|- Done.\n|')
    print('|\n|\n|-\033[1;32m☢️  Finished Moving.\033[0m')


# For Restoring:-
def restore(Directory):
    print('|------------------------\n|-⏳\033[1;33m  Restoring Backup..\033[0m\n|\n|\n|')    # for some reason, terminal log needs 2 spaces to display one space. (I guess because of text formatting.)
    CheckPaths((Directory))
    print('|\n|-ℹ️  Proceeding to the next step.')
    copytree((Directory))
    print('|\n|\n|\n|-⌛\033[1;33m  Backup Restored..\033[0m\n|________________________')




#__________________ Triggar ______________________________________________________

ds='''
 ______             _                 
(_____ \        _  | |                
 _____) )   _ _| |_| |__   ___  ____  
|  ____/ | | (_   _)  _ \ / _ \|  _ \ 
| |    | |_| | | |_| | | | |_| | | | |
|_|     \__  |  \__)_| |_|\___/|_| |_|
       (____/                         
\033[1;33m
 ______                                    
(_____ \              _                    
 _____) )_____  ___ _| |_ ___   ____ _____ 
|  __  /| ___ |/___|_   _) _ \ / ___) ___ |
| |  \ \| ____|___ | | || |_| | |   | ____
|_|   |_|_____|___/   \__)___/|_|   |_____|
                                           \033[0m
 ______              _                 
(____  \            | |                
 ____)  )_____  ____| |  _ _   _ ____  
|  __  ((____ |/ ___) |_/ ) | | |  _ \ 
| |__)  ) ___ ( (___|  _ (| |_| | |_| |
|______/\_____|\____)_| \_)____/|  __/ 
                                |_|'''

#Triggaring restoration process:-
s1='|-----------\033[1;33m Setup Wizard \033[0m-------------\n|\n|- Do you wanna change default settings? [\033[1;32my\033[0m/\033[91mn\033[0m]\n|>>> '

if(__name__=="__main__"): # for safety
    os.system('clear')    # clear terminal screen for setup wizard
    print(f'{ds}')
    ans= input(f'{s1}')
    get_user_choice(ans)
    os.system('clear')    # Again clear for clearing before starting restore.
    restore(Dicts)
