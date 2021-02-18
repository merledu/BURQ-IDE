# very basic terminal emulator in pyqt
# https://pythonbasics.org/pyqt/

from PyQt5 import QtWidgets, uic
from PyQt5.QtWidgets import QMessageBox
from PyQt5.QtWidgets import QMessageBox, QDialog, QFileDialog
import sys
import os
import subprocess
from subprocess import Popen, PIPE

class Example(QtWidgets.QMainWindow):
    def __init__(self):
        super(Example, self).__init__()
        uic.loadUi('gui.ui', self)
        #self.pushButtonInstall.clicked.connect(self.onClick)
        self.working_dir = "."
        #self.lineEdit.returnPressed.connect(self.doCMD(self.lineEdit.text(),0))

    def sendText(self,command):
        app=self.doCMD(command)
        
        
    def doCMD(self,command):
        cmd=command
        if "cd " in cmd:
            vals = cmd.split(" ")
            if vals[1][0] == "/":
                self.working_dir = vals[1]
            else:
                self.working_dir = self.working_dir + "/" + vals[1]
                
            print(self.working_dir)
            subprocess.call(cmd, shell=True, cwd=self.working_dir)

            self.textBrowser.setText( self.textBrowser.toPlainText() + "\n " + cmd )
        else:
            proc=Popen(cmd, shell=True,cwd=self.working_dir,  stdout=subprocess.PIPE, bufsize=1, universal_newlines=True, stderr=subprocess.STDOUT,encoding='UTF-8',errors='replace')
            while True:
                data=proc.stdout.readline()
                if len(data)==0:
                    break
                sys.stdout.write(data)
                
                self.textBrowser.setText( self.textBrowser.toPlainText() + data )

        self.textBrowser.verticalScrollBar().setValue(self.textBrowser.verticalScrollBar().maximum())
            
    #def onClick(self):
    #    if len(self.lineEditName.text()) < 1:
    #        QMessageBox.critical(self, "Install", "Install")
    #    else:
    #        os.system("sudo apt-get install " + self.lineEditName.text())
    

#win.show()
#sys.exit(app.exec())
