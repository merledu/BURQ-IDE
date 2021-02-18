# -*- coding: utf-8 -*-

# self implementation generated from reading ui file 'combobox.ui'
#
# Created by: PyQt5 UI code generator 5.14.2
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
from PyQt5.QtGui import *


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(800, 600)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        
        self.addcore = QtWidgets.QToolButton()
        self.addcore.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.addcore.setObjectName("toolButton")
        self.addcore.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 800, 22))
        self.menubar.setObjectName("menubar")
        self.menuTest = QtWidgets.QMenu(self.menubar)
        self.menuTest.setObjectName("menuTest")
        self.menuCore = QtWidgets.QMenu(self.menubar)
        self.menuCore.setObjectName("menuCore")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)
        self.toolBar = QtWidgets.QToolBar(MainWindow)
        self.toolBar.setObjectName("toolBar")
        MainWindow.addToolBar(QtCore.Qt.TopToolBarArea, self.toolBar)
        self.actionAdd_Core = QtWidgets.QAction(MainWindow)
        self.actionAdd_Core.setObjectName("actionAdd_Core")
        self.actionRemove_Core = QtWidgets.QAction(MainWindow)
        self.actionRemove_Core.setObjectName("actionRemove_Core")
        self.menuCore.addAction(self.actionRemove_Core)
        self.menubar.addAction(self.menuTest.menuAction())
        self.menubar.addAction(self.menuCore.menuAction())
        self.comboBox = QtWidgets.QComboBox()
        self.comboBox.setObjectName("comboBox")
        self.comboBox.addItem("Select Core")
        file = open("Cores", "r")
        data = file.read().splitlines()
        for i in data:
            s=i.split(',')
            if i == "":
                pass
            elif s[1] == "Verilog":
                self.comboBox.addItem(QIcon("Verilator_logo.png"),s[0])
            elif s[1] == "Chisel":
                self.comboBox.addItem(QIcon("icons8-nail-100.png"),s[0])
        file.close()
        self.coretotal=len(data)
        self.comboBox.insertSeparator(self.coretotal+1)
        self.comboBox.addItem("Add Core")
        self.comboBox.addItem("Remove Core")
        self.comboBox.currentTextChanged.connect(self.cores)
        self.toolBar.addAction(self.actionAdd_Core)
        self.toolBar.addWidget(self.comboBox)
       


        self.retranslateUi(MainWindow)
        self.comboBox.setCurrentIndex(0)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)
        self.dg = Dialog()
        self.dg.accepted.connect(self.coreAdded)
        self.dg.rejected.connect(self.cancel)
    def cancel(self):
        self.comboBox.setCurrentIndex(0)

    def coreAdded(self, values):
        file = open("Cores", "a")
        file.write('\n')
        file.write(str(values['Name']+','+str(values['Type']+','+str(values['Vcd']+','+str(values['Top']+','+str(values['Input']))))))
        file.close()
        self.coretotal+=1
        if values['Type'] == "Verilog":
                self.comboBox.insertItem(self.coretotal,QIcon("Verilator_logo.png"),str(values['Name']))
        elif values['Type'] == "Chisel":
                self.comboBox.insertItem(self.coretotal,QIcon("icons8-nail-100.png"),str(values['Name']))
        
        self.comboBox.setCurrentIndex(self.coretotal)
        

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.menuTest.setTitle(_translate("MainWindow", "Test"))
        self.menuCore.setTitle(_translate("MainWindow", "Core"))
        self.toolBar.setWindowTitle(_translate("MainWindow", "toolBar"))
        self.actionAdd_Core.setText(_translate("MainWindow", "Add Core"))
        self.actionRemove_Core.setText(_translate("MainWindow", "Remove Core"))
    
    def cores(self,option):
        if option == "Add Core":
            self.dg.exec_()
        elif option == "Remove Core":
            print("remove core")

class Dialog(QDialog):
    accepted = pyqtSignal(dict)
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.setWindowTitle("Add Core")
        self.setObjectName("self")
        self.resize(700, 208)
        self.verticalLayout = QtWidgets.QVBoxLayout(self)
        self.verticalLayout.setObjectName("verticalLayout")
        self.formLayout_4 = QtWidgets.QFormLayout()
        self.formLayout_4.setObjectName("formLayout_4")
        self.label = QtWidgets.QLabel(self)
        self.label.setObjectName("label")
        self.formLayout_4.setWidget(0, QtWidgets.QFormLayout.LabelRole, self.label)
        self.label_2 = QtWidgets.QLabel(self)
        self.label_2.setEnabled(False)
        self.label_2.setObjectName("label_2")
        self.formLayout_4.setWidget(2, QtWidgets.QFormLayout.LabelRole, self.label_2)
        self.label_3 = QtWidgets.QLabel(self)
        self.label_3.setEnabled(False)
        self.label_3.setObjectName("label_3")
        self.formLayout_4.setWidget(3, QtWidgets.QFormLayout.LabelRole, self.label_3)
        self.label_4 = QtWidgets.QLabel(self)
        self.label_4.setEnabled(False)
        self.label_4.setObjectName("label_4")
        self.formLayout_4.setWidget(4, QtWidgets.QFormLayout.LabelRole, self.label_4)
        self.label_5 = QtWidgets.QLabel(self)
        self.label_5.setObjectName("label_5")
        self.formLayout_4.setWidget(1, QtWidgets.QFormLayout.LabelRole, self.label_5)
        self.lineEdit = QtWidgets.QLineEdit(self)
        self.lineEdit.setObjectName("lineEdit")
        self.formLayout_4.setWidget(0, QtWidgets.QFormLayout.FieldRole, self.lineEdit)
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.radioButton_2 = QtWidgets.QRadioButton(self)
        self.radioButton_2.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.radioButton_2.setObjectName("radioButton_2")
        self.horizontalLayout_3.addWidget(self.radioButton_2)
        self.radioButton = QtWidgets.QRadioButton(self)
        self.radioButton.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.radioButton.setObjectName("radioButton")
        self.horizontalLayout_3.addWidget(self.radioButton)
        spacerItem = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout_3.addItem(spacerItem)
        self.formLayout_4.setLayout(1, QtWidgets.QFormLayout.FieldRole, self.horizontalLayout_3)
        self.horizontalLayout_4 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_4.setObjectName("horizontalLayout_4")
        self.lineEdit_2 = QtWidgets.QLineEdit(self)
        self.lineEdit_2.setEnabled(False)
        self.lineEdit_2.setObjectName("lineEdit_2")
        self.horizontalLayout_4.addWidget(self.lineEdit_2)
        self.pushButton_3 = QtWidgets.QPushButton(self)
        self.pushButton_3.setEnabled(False)
        self.pushButton_3.setObjectName("pushButton_3")
        self.horizontalLayout_4.addWidget(self.pushButton_3)
        self.formLayout_4.setLayout(2, QtWidgets.QFormLayout.FieldRole, self.horizontalLayout_4)
        self.horizontalLayout_5 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_5.setObjectName("horizontalLayout_5")
        self.lineEdit_3 = QtWidgets.QLineEdit(self)
        self.lineEdit_3.setEnabled(False)
        self.lineEdit_3.setObjectName("lineEdit_3")
        self.horizontalLayout_5.addWidget(self.lineEdit_3)
        self.pushButton_4 = QtWidgets.QPushButton(self)
        self.pushButton_4.setEnabled(False)
        self.pushButton_4.setObjectName("pushButton_4")
        self.horizontalLayout_5.addWidget(self.pushButton_4)
        self.formLayout_4.setLayout(3, QtWidgets.QFormLayout.FieldRole, self.horizontalLayout_5)
        self.horizontalLayout_6 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_6.setObjectName("horizontalLayout_6")
        self.lineEdit_4 = QtWidgets.QLineEdit(self)
        self.lineEdit_4.setEnabled(False)
        self.lineEdit_4.setObjectName("lineEdit_4")
        self.horizontalLayout_6.addWidget(self.lineEdit_4)
        self.pushButton_5 = QtWidgets.QPushButton(self)
        self.pushButton_5.setEnabled(False)
        self.pushButton_5.setObjectName("pushButton_5")
        self.horizontalLayout_6.addWidget(self.pushButton_5)
        self.formLayout_4.setLayout(4, QtWidgets.QFormLayout.FieldRole, self.horizontalLayout_6)
        self.verticalLayout.addLayout(self.formLayout_4)
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.pushButton_2 = QtWidgets.QPushButton(self)
        self.pushButton_2.setObjectName("pushButton_2")
        self.horizontalLayout_2.addWidget(self.pushButton_2)
        self.pushButton = QtWidgets.QPushButton(self)
        self.pushButton.setObjectName("pushButton")
        self.pushButton.setEnabled(True)
        self.horizontalLayout_2.addWidget(self.pushButton)
        self.verticalLayout.addLayout(self.horizontalLayout_2)

        self.label.setText("Core Name")
        self.label_2.setText("File")
        self.label_3.setText("File")
        self.label_4.setText("File")
        self.label_5.setText("Core Type")
        self.radioButton_2.setText("Chisel")
        self.radioButton.setText("Verilog")
        self.pushButton_3.setText("Browse")
        self.pushButton_4.setText("Browse")
        self.pushButton_5.setText("Browse")
        self.pushButton_2.setText("Cancel")
        self.pushButton.setText("Ok")
        self.radioButton_2.toggled.connect(self.chisel)
        self.radioButton.toggled.connect(self.verilog)
        self.pushButton.setEnabled(False)
        self.pushButton_3.clicked.connect(self.Vcd)
        self.pushButton_4.clicked.connect(self.Top)
        self.pushButton_5.clicked.connect(self.Input)
        self.lineEdit.textChanged[str].connect(self.unlock)
        self.lineEdit_2.textChanged[str].connect(self.unlock)
        self.lineEdit_3.textChanged[str].connect(self.unlock)
        self.lineEdit_4.textChanged[str].connect(self.unlock)
        self.pushButton_2.clicked.connect(self.reject)
        self.pushButton.clicked.connect(self.ok)

    def chisel(self):
        self.label_2.setText("Vcd file path")
        self.label_3.setText("Scala file path")
        self.label_4.setText("Instruction file path")
        self.label_2.setEnabled(True)
        self.label_3.setEnabled(True)
        self.label_4.setEnabled(True)
        self.pushButton_3.setEnabled(True)
        self.pushButton_4.setEnabled(True)
        self.pushButton_5.setEnabled(True)
        self.lineEdit_2.setEnabled(True)
        self.lineEdit_3.setEnabled(True)
        self.lineEdit_4.setEnabled(True)
        self.lineEdit_2.clear()
        self.lineEdit_3.clear()
        self.lineEdit_4.clear()
    def verilog(self):
        self.label_2.setText("Vcd file path")
        self.label_3.setText("Make file path")
        self.label_4.setText("Input file path")
        self.label_2.setEnabled(True)
        self.label_3.setEnabled(True)
        self.label_4.setEnabled(True)
        self.pushButton_3.setEnabled(True)
        self.pushButton_4.setEnabled(True)
        self.pushButton_5.setEnabled(True)
        self.lineEdit_2.setEnabled(True)
        self.lineEdit_3.setEnabled(True)
        self.lineEdit_4.setEnabled(True)
        self.lineEdit_2.clear()
        self.lineEdit_3.clear()
        self.lineEdit_4.clear()
    def Vcd(self):
        filename = QFileDialog.getOpenFileName(None,"Select Core .Vcd file","~",("vcd(*.vcd)"))
        self.lineEdit_2.setText(filename[0])
    def Top(self):
        if self.radioButton_2.isChecked():
            filename = QFileDialog.getOpenFileName(None,"Select Core .scala file","~",("scala(*.scala)"))
        elif self.radioButton.isChecked():
            filename = QFileDialog.getOpenFileName(None,"Select Core make file")
        self.lineEdit_3.setText(filename[0])
    def Input(self):
        if self.radioButton_2.isChecked():
            filename = QFileDialog.getOpenFileName(None,"Select Core Instruction Input file","~",("txt(*.txt)"))
        elif self.radioButton.isChecked():
            filename = QFileDialog.getOpenFileName(None,"Select Core Input file")
        self.lineEdit_4.setText(filename[0])
    def unlock(self):
        if self.lineEdit.text() != '' and self.lineEdit_2.text() != '' and self.lineEdit_3.text() != '' and self.lineEdit_4.text() != '':
            self.pushButton.setEnabled(True)
        else:
            self.pushButton.setDisabled(True)

    def ok(self):
        if self.radioButton_2.isChecked():
            type="Chisel"
        else:
            type="Verilog"
        values = {'Name': self.lineEdit.text(),'Type': type ,'Vcd': self.lineEdit_2.text(),'Top': self.lineEdit_3.text(),'Input': self.lineEdit_4.text()}
        self.accepted.emit(values)
        self.accept()
    


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())
