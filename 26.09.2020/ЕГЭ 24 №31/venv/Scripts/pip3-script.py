#!"C:\Users\Public\Documents\11 ÍÎ‡ÒÒ Õ≈ ”ƒ¿Àﬂ“‹! √Œƒ 2020-2021\duck\26.09.2020\≈√› 24 π31\venv\Scripts\python.exe" -x
# EASY-INSTALL-ENTRY-SCRIPT: 'pip==10.0.1','console_scripts','pip3'
__requires__ = 'pip==10.0.1'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('pip==10.0.1', 'console_scripts', 'pip3')()
    )
