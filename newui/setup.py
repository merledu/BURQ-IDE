from cx_Freeze import setup, Executable 
setup(name = "BURQ" , 
      version = "1.0.1" , 
      description = "IDE" , 
      executables = [Executable("Launcher.py")]) 
