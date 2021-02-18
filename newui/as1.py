# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'as.ui'
#
# Created by: PyQt5 UI code generator 5.12.3
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets
from threading import Thread
import time

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(640, 405)
        MainWindow.setWindowOpacity(1.0)
        MainWindow.setStyleSheet("")
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.frame = QtWidgets.QFrame(self.centralwidget)
        self.frame.setGeometry(QtCore.QRect(-10, 0, 661, 401))
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.frame.sizePolicy().hasHeightForWidth())
        self.frame.setSizePolicy(sizePolicy)
        self.frame.setLayoutDirection(QtCore.Qt.RightToLeft)
        self.frame.setStyleSheet("background-color: rgb(None);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(None);\n"
"image: url(:/Pics/158288417312755381.png);")
        self.frame.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame.setLineWidth(0)
        self.frame.setObjectName("frame")
        self.progressBar = QtWidgets.QProgressBar(self.centralwidget)
        self.progressBar.setGeometry(QtCore.QRect(0, 400, 641, 7))
        self.progressBar.setStyleSheet("background-color: rgb(None);\n"
"color: rgb(None);")
        self.progressBar.setObjectName("progressBar")
        MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        
        MainWindow.setWindowFlags(MainWindow.windowFlags() | QtCore.Qt.FramelessWindowHint)
        MainWindow.setAttribute(QtCore.Qt.WA_TranslucentBackground)

    def execute_function_threaded(self, func):
        """Run given function in thread"""
        self.t = Thread(target=func)
        self.t.start()
        print('thread started')

    def auto_close(self, n,MainWindow):
        """Close self in n seconds"""
        print('going to sleep')
        for i in range(n):
            print('sleeping...')
            time.sleep(1)
        print('done sleeping!')
        MainWindow.hide()
        

        
        
import Linus


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    ui.execute_function_threaded(func=lambda: ui.auto_close(3,MainWindow))
    sys.exit(app.exec_())
