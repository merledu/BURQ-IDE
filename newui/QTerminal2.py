#!/usr/bin/python3
from PyQt5.QtCore import QProcess, QSysInfo, QStandardPaths, Qt, QEvent, QSettings, QPoint, QSize
from PyQt5.QtWidgets import QWidget, QApplication, QLineEdit, QPlainTextEdit, QVBoxLayout, QMainWindow, QAction
from PyQt5.QtGui import QIcon, QTextCursor, QKeyEvent
import sys
import shlex
import getpass
import socket
import os
import re
import getpass
from pathlib import Path
path12=Path().absolute()

from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtWidgets import QApplication, QFileSystemModel, QTreeView, QWidget, QVBoxLayout
from PyQt5.QtGui import QIcon
import sys
import LineNumber
import webbrowser
import hightest
import time
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
import os
import threading
from PyQt5.QtWidgets import QFileDialog, QDialog
from PyQt5 import QtCore
from PyQt5.QtGui import QKeySequence
import find
import Linus
import getpass
import Add_core



class MainWindow12(QMainWindow):

    def __init__(self):
        super(MainWindow12, self).__init__()

        self.commandslist = []
        self.tracker = 0
        os.chdir(os.path.expanduser(path12))
#        print(os.getcwd())
        self.name = (str(getpass.getuser()) + "@" + str(socket.gethostname()) 
                                + ":" + str(os.getcwd()) + "$ ")
        self.setWindowTitle('PyQt5Terminal')
        self.setWindowIcon(QIcon.fromTheme("terminal-emulator"))
        self.process = QProcess(self)
        self.process.setProcessChannelMode(QProcess.MergedChannels)
        self.process.readyRead.connect(self.dataReady)
        self.process.readyReadStandardError.connect(self.onReadyReadStandardError)
        self.process.readyReadStandardOutput.connect(self.onReadyReadStandardOutput)
        self.process.finished.connect(self.isFinished)
        self.process.setWorkingDirectory(os.getcwd())
        self.createStatusBar()

        self.commandfield = QPlainTextEdit()
        self.commandfield.setLineWrapMode(QPlainTextEdit.NoWrap)
        self.commandfield.setFixedHeight(44)
        self.commandfield.setVerticalScrollBarPolicy(Qt.ScrollBarAlwaysOff)
        self.commandfield.setAcceptDrops(True)
        self.cursor = self.commandfield.textCursor()

        self.textWindow = QPlainTextEdit(self)
        #self.setStyleSheet(mystylesheet(self))

        self.textWindow.setReadOnly(True)
        layout = QVBoxLayout()
        layout.addWidget(self.textWindow)
        layout.addWidget(self.commandfield)
        self.wid = QWidget()
        self.wid.setLayout(layout)
        self.setCentralWidget(self.wid)
        self.setGeometry(0, 0, 600, 500)
        self.commandfield.setPlainText(self.name)
        self.cursorEnd()
        self.commandfield.setFocus()

        self.copySelectedTextAction = QAction(QIcon.fromTheme("edit-copy"), "Copy", shortcut = "Shift+Ctrl+c", triggered = self.copyText)
        self.textWindow.addAction(self.copySelectedTextAction)
        self.pasteTextAction = QAction(QIcon.fromTheme("edit-paste"), "Copy", shortcut = "Shift+Ctrl+v", triggered = self.pasteText)
        self.commandfield.addAction(self.pasteTextAction)

        self.cancelAction = QAction("Cancel", shortcut="Ctrl+c", triggered=self.killProcess)
        self.textWindow.addAction(self.cancelAction)

        self.commandfield.installEventFilter(self)
#        self.textWindow.installEventFilter(self)
        QApplication.setCursorFlashTime(1000)
        self.cursorEnd()
        print(self.process.workingDirectory())
        self.settings = QSettings("QTerminal", "QTerminal")
        self.readSettings()

    def closeEvent(self, e):
        self.writeSettings()

    def cursorEnd(self):
        self.name = (str(getpass.getuser()) + "@" + str(socket.gethostname()) 
                                + ":" + str(os.getcwd()) + "$ ")
        self.commandfield.setPlainText(self.name)
        cursor = self.commandfield.textCursor()
        cursor.movePosition(11, 0)
        self.commandfield.setTextCursor(cursor)
        self.commandfield.setFocus()

    def eventFilter(self, source, event):
        if source == self.commandfield:
            if (event.type() == QEvent.DragEnter):
                event.accept()
                return True
            elif (event.type() == QEvent.Drop):
                print ('Drop')
                self.setDropEvent(event)
                return True
            elif (event.type() == QEvent.KeyPress):
                cursor = self.commandfield.textCursor()
#                print('key press:', (event.key(), event.text()))
                if event.key() == Qt.Key_Backspace:
                    if cursor.positionInBlock() <= len(self.name):
                        return True
                    else:
                        return False
        
                elif event.key() == Qt.Key_Return:
                    self.run()
                    return True
        
                elif event.key() == Qt.Key_Left:
                    if cursor.positionInBlock() <= len(self.name):
                        return True
                    else:
                        return False
            
                elif event.key() == Qt.Key_Delete:
                    if cursor.positionInBlock() <= len(self.name) - 1:
                        return True
                    else:
                        return False

                elif event.modifiers() == Qt.ControlModifier and event.key() == Qt.Key_C:
                    self.killProcess()
                    return True

                elif event.key() == Qt.Key_Up:
                    try:
                        if self.tracker != 0:
                            cursor.select(QTextCursor.BlockUnderCursor)
                            cursor.removeSelectedText()
                            self.commandfield.appendPlainText(self.name)
        
                        self.commandfield.insertPlainText(self.commandslist[self.tracker])
                        self.tracker -= 1
        
                    except IndexError:
                        self.tracker = 0
                    return True

                elif event.key() == Qt.Key_Down:
                    try:
                        if self.tracker != 0:
                            cursor.select(QTextCursor.BlockUnderCursor)
                            cursor.removeSelectedText()
                            self.commandfield.appendPlainText(self.name)
        
                        self.commandfield.insertPlainText(self.commandslist[self.tracker])
                        self.tracker += 1
        
                    except IndexError:
                        self.tracker = 0
                    return True

                else:
                    return False
            else:
                return False
        else:
            return False
        

    def copyText(self):
        self.textWindow.copy()

    def pasteText(self):
        self.commandfield.paste()

    def killProcess(self):
        print("cancelled")
        self.process.kill()
        self.textWindow.appendPlainText("cancelled")
        self.cursorEnd()

    def createStatusBar(self):
        sysinfo = QSysInfo()
        myMachine = "current CPU Architecture: " + sysinfo.currentCpuArchitecture() + " *** " + sysinfo.prettyProductName() + " *** " + sysinfo.kernelType() + " " + sysinfo.kernelVersion()
        self.statusBar().showMessage(myMachine, 0)

    def setDropEvent(self, event):
        self.commandfield.setFocus()
        if event.mimeData().hasUrls():
            f = str(event.mimeData().urls()[0].toLocalFile())
            print("is file:", f)
            if " " in f:
                self.commandfield.insertPlainText("'{}'".format(f))
            else:
                self.commandfield.insertPlainText(f)
            event.accept()
        elif event.mimeData().hasText():
            ft = event.mimeData().text()
            print("is text:", ft)
            if " " in ft:
                self.commandfield.insertPlainText("'{}'".format(ft))
            else:
                self.commandfield.insertPlainText(ft)
        else:
            event.ignore()

    def run(self):
        print("started")
        cli = []
        cmd = ""
        t = ""
        self.textWindow.setFocus()
        self.textWindow.appendPlainText(self.commandfield.toPlainText())
        cli = shlex.split(self.commandfield.toPlainText().replace(self.name, '').replace("'", '"'), posix=False)
        cmd = str(cli[0]) ### is the executable

        if cmd == "exit":
            quit()

        elif cmd == "cd":
            del cli[0]
            path = " ".join(cli)
            os.chdir(os.path.abspath(path))
            self.process.setWorkingDirectory(os.getcwd())
            print("workingDirectory:", self.process.workingDirectory())
            self.cursorEnd()
        else:
            self.process.setWorkingDirectory(os.getcwd())
            print("workingDirectory", self.process.workingDirectory())
            del cli[0]
            if (QStandardPaths.findExecutable(cmd)):
                self.commandslist.append(self.commandfield.toPlainText().replace(self.name, ""))
                print("command", cmd,  "found")
                t = " ".join(cli)
                if self.process.state() != 2:
                    #self.process.waitForStarted()
                    self.process.waitForReadyRead()
                    self.process.waitForFinished()
                    if "|" in t or ">" in t or "<" in t:
                        print("special characters")
                        self.process.start('sh -c "' + cmd + ' ' + t + '"')
                        print("running",('sh -c "' + cmd + ' ' + t + '"'))
                    else:
                        self.process.start(cmd + " " + t)
                        print("running", (cmd + " " + t))
            else:
                print("command not found ...")
                self.textWindow.appendPlainText("command not found ...")
                self.cursorEnd()

    def dataReady(self):
        out = ""
        try:
            out = str(self.process.readAll(), encoding = 'utf8').rstrip()
        except TypeError:
            out = str(self.process.readAll()).rstrip()
            self.textWindow.moveCursor(self.cursor.Start) ### changed
        self.textWindow.appendPlainText(out)    

    def onReadyReadStandardError(self):
        self.error = self.process.readAllStandardError().data().decode()
        self.textWindow.appendPlainText(self.error.strip('\n'))
        self.cursorEnd()

    def onReadyReadStandardOutput(self):
        self.result = self.process.readAllStandardOutput().data().decode()
        self.textWindow.appendPlainText(self.result.strip('\n'))
        self.cursorEnd()
        self.state = self.process.state()

    def isFinished(self):
        print("finished")
        self.name = (str(getpass.getuser()) + "@" + str(socket.gethostname()) 
                                + ":" + str(os.getcwd()) + "$ ")
        self.commandfield.setPlainText(self.name)
        self.cursorEnd()

    def readSettings(self):
        if self.settings.contains("commands"):
            self.commandslist = self.settings.value("commands")
        if self.settings.contains("pos"):
            pos = self.settings.value("pos", QPoint(200, 200))
            self.move(pos)
        if self.settings.contains("size"):
            size = self.settings.value("size", QSize(400, 400))
            self.resize(size)

    def writeSettings(self):
        self.settings.setValue("commands", self.commandslist)
        self.settings.setValue("pos", self.pos())
        self.settings.setValue("size", self.size())
        





    
