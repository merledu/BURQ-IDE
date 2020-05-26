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
from QTermWidget import QTermWidget
import threading
import DarkW
from PyQt5.QtCore import Qt
from PyQt5.QtWidgets import (
    QApplication, QWidget, QToolTip, QPushButton, QMessageBox)
from PyQt5.QtCore import QCoreApplication, Qt

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        self.filename = "untitled"
        self.changesSaved = True
        self._process = []
        self.num=21
        self.out12=""
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(1279, 724)
        MainWindow.setAcceptDrops(False)
        MainWindow.setAutoFillBackground(False)
        MainWindow.setStyleSheet("background-color: rgb(255, 255, 255,60%);\n"
"")
        MainWindow.showMaximized()
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout(self.centralwidget)
        self.horizontalLayout_3.setContentsMargins(1, 1, 4, 0)
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.splitter_2 = QtWidgets.QSplitter(self.centralwidget)
        self.splitter_2.setOrientation(QtCore.Qt.Horizontal)
        self.splitter_2.setHandleWidth(10)
        self.splitter_2.setObjectName("splitter_2")
        self.splitter_2.setStyleSheet("background-color: rgb(240, 238, 235);")
        #Tree View
        self.treeView = QtWidgets.QTreeView(self.splitter_2)
        path = QDir.rootPath()
        self.dirModel = QFileSystemModel()
        self.dirModel.setRootPath(QDir.rootPath())
        self.dirModel.setFilter(QDir.NoDotAndDotDot | QDir.AllDirs)
        self.fileModel = QFileSystemModel()
        self.fileModel.setFilter(QDir.NoDotAndDotDot |  QDir.Files)
        self.model = QtWidgets.QFileSystemModel()
        self.model.setRootPath((QtCore.QDir.rootPath()))
        self.treeView.setModel(self.model)
        self.treeView.setRootIndex(self.dirModel.index(path))
        self.treeView.clicked.connect(self.on_clicked)
        self.treeView.setGeometry(QtCore.QRect(0, 0, 270, 921))
        self.treeView.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.treeView.setObjectName("treeView")
        self.treeView.hideColumn(1)
        self.treeView.hideColumn(2)
        self.treeView.hideColumn(3)

        #Tree View 
        self.splitter = QtWidgets.QSplitter(self.splitter_2)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(1)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.splitter.sizePolicy().hasHeightForWidth())
        self.splitter.setSizePolicy(sizePolicy)
        self.splitter.setOrientation(QtCore.Qt.Vertical)
        self.splitter.setHandleWidth(10)
        self.splitter.setObjectName("splitter")
        self.frame = QtWidgets.QFrame(self.splitter)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(2)
        sizePolicy.setHeightForWidth(self.frame.sizePolicy().hasHeightForWidth())
        self.frame.setSizePolicy(sizePolicy)
        self.frame.setStyleSheet("background-color: rgb(255, 255, 255,88%);")
        self.frame.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame.setObjectName("frame")
        self.horizontalLayout = QtWidgets.QHBoxLayout(self.frame)
        self.horizontalLayout.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout.setSpacing(0)
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.tabWidget_2 = QtWidgets.QTabWidget(self.frame)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.tabWidget_2.sizePolicy().hasHeightForWidth())
        self.tabWidget_2.setSizePolicy(sizePolicy)
        self.tabWidget_2.setStyleSheet("background-color: rgb(255, 255, 255,88%);\n"
"")
        self.tabWidget_2.setObjectName("tabWidget_2")
        self.tab = QtWidgets.QWidget()
        self.tab.setObjectName("tab")
        self.verticalLayout_7 = QtWidgets.QVBoxLayout(self.tab)
        self.verticalLayout_7.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_7.setSpacing(0)
        self.verticalLayout_7.setObjectName("verticalLayout_7")
        self.plainTextEdit=LineNumber.QCodeEditor(self.tab)
        self.highlighter=hightest.Highlighter(self.plainTextEdit.document())
        self.plainTextEdit.setStyleSheet("background-color: rgb(255, 255, 255,88%);")
        self.plainTextEdit.setObjectName("plainTextEdit")
        self.plainTextEdit.textChanged.connect(self.changed)
        self.verticalLayout_7.addWidget(self.plainTextEdit)
        self.tabWidget_2.addTab(self.tab, "")
        self.horizontalLayout.addWidget(self.tabWidget_2)
        self.frame_3 = QtWidgets.QFrame(self.splitter)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(2)
        sizePolicy.setHeightForWidth(self.frame_3.sizePolicy().hasHeightForWidth())

        self.frame_3.setSizePolicy(sizePolicy)
        self.frame_3.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.frame_3.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame_3.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame_3.setObjectName("frame_3")
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout(self.frame_3)
        self.horizontalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_2.setSpacing(0)
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.tabWidget = QtWidgets.QTabWidget(self.frame_3)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.tabWidget.sizePolicy().hasHeightForWidth())
        self.tabWidget.setSizePolicy(sizePolicy)
        self.tabWidget.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.tabWidget.setTabShape(QtWidgets.QTabWidget.Rounded)
        self.tabWidget.setObjectName("tabWidget")
        
        self.tab1 = QTermWidget()
        self.tab1.setScrollBarPosition(self.tab1.ScrollBarRight)
       
        self.tab1.setColorScheme("BlackOnWhite")
        self.tabWidget.addTab(self.tab1, "Terminal")
        
        self.tab_3 = QtWidgets.QWidget()
        self.tab_3.setObjectName("tab_3")
        self.verticalLayout_7 = QtWidgets.QVBoxLayout(self.tab_3)
        self.verticalLayout_7.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_7.setSpacing(0)
        self.verticalLayout_7.setObjectName("verticalLayout_7")
        self.plainTextEdit23=QtWidgets.QPlainTextEdit(self.tab_3)
        self.plainTextEdit23.setStyleSheet("background-color: rgb(255, 255, 255,88%);")
        self.plainTextEdit23.setObjectName("plainTextEdit23")
        self.verticalLayout_7.addWidget(self.plainTextEdit23)
        self.tabWidget.addTab(self.tab_3, "Output")
        self.tab_2 = QtWidgets.QWidget()
        self.tab_2.setObjectName("tab_2")
        self.verticalLayout_3 = QtWidgets.QVBoxLayout(self.tab_2)
        self.verticalLayout_3.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_3.setSpacing(0)
        self.verticalLayout_3.setObjectName("verticalLayout_3")
        self.frame_5 = QtWidgets.QFrame(self.tab_2)
        self.frame_5.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame_5.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame_5.setObjectName("frame_5")
        self.verticalLayout_3.addWidget(self.frame_5)
        self.tabWidget.addTab(self.tab_2, "")
        self.horizontalLayout_2.addWidget(self.tabWidget)
        self.horizontalLayout_3.addWidget(self.splitter_2)
        self.verticalLayout_6 = QtWidgets.QVBoxLayout()
        self.verticalLayout_6.setObjectName("verticalLayout_6")
        self.verticalLayout = QtWidgets.QVBoxLayout()
        self.verticalLayout.setSpacing(0)
        self.verticalLayout.setObjectName("verticalLayout")
        self.label_3 = QtWidgets.QLabel(self.centralwidget)
        font = QtGui.QFont()
        font.setPointSize(12)
        self.label_3.setFont(font)
        self.label_3.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.label_3.setStyleSheet("background-color:  #008000;\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 18px;\n"
"border-top-right-radius: 18px;\n"
"text-align: center;")
        self.label_3.setTextFormat(QtCore.Qt.AutoText)
        self.label_3.setAlignment(QtCore.Qt.AlignCenter)
        self.label_3.setWordWrap(False)
        self.label_3.setObjectName("label_3")
        self.verticalLayout.addWidget(self.label_3)
        self.plainTextEdit_2 = QtWidgets.QPlainTextEdit(self.centralwidget)
        self.plainTextEdit_2.setStyleSheet("background-color: #414141;\n"
"background-color: rgb(255, 255, 255,88%);")
        self.plainTextEdit_2.setObjectName("plainTextEdit_2")
        self.verticalLayout.addWidget(self.plainTextEdit_2)
        self.verticalLayout.setStretch(0, 1)
        self.verticalLayout.setStretch(1, 8)
        self.verticalLayout_6.addLayout(self.verticalLayout)
        self.verticalLayout_2 = QtWidgets.QVBoxLayout()
        self.verticalLayout_2.setSpacing(0)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.label_2 = QtWidgets.QLabel(self.centralwidget)
        font = QtGui.QFont()
        font.setPointSize(12)
        self.label_2.setFont(font)
        self.label_2.setStyleSheet("background-color:  #008000;\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 18px;\n"
"border-top-right-radius: 18px;\n"
"text-align: center;")
        self.label_2.setAlignment(QtCore.Qt.AlignCenter)
        self.label_2.setObjectName("label_2")
        self.verticalLayout_2.addWidget(self.label_2)
        self.plainTextEdit_3 = QtWidgets.QPlainTextEdit(self.centralwidget)
        self.plainTextEdit_3.setStyleSheet("background-color:#414141;\n"
"background-color: rgb(255, 255, 255,88%);")
        self.plainTextEdit_3.setObjectName("plainTextEdit_3")
        self.verticalLayout_2.addWidget(self.plainTextEdit_3)
        self.verticalLayout_2.setStretch(0, 1)
        self.verticalLayout_2.setStretch(1, 8)
        self.verticalLayout_6.addLayout(self.verticalLayout_2)
        self.horizontalLayout_3.addLayout(self.verticalLayout_6)
        self.horizontalLayout_3.setStretch(0, 5)
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 1279, 22))
        self.menubar.setStyleSheet("background-color: #EFF0F1;color: #31363B;")
        self.menubar.setObjectName("menubar")
        self.menuFile = QtWidgets.QMenu(self.menubar)
        self.menuFile.setStyleSheet("#menuFile {\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid black;\n"
" }\n"
" #menuFile:selected {\n"
"    background-color: rgb(52, 101, 164);\n"
"    color: rgb(255, 255, 255);\n"
" }")
        self.menuFile.setObjectName("menuFile")
        self.menuEdit = QtWidgets.QMenu(self.menubar)
        self.menuEdit.setStyleSheet("#menuEdit {\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
" }\n"
" #menuEdit:selected {\n"
"    background-color: rgb(52, 101, 164);\n"
"    color: rgb(255, 255, 255);\n"
" }")
        self.menuEdit.setObjectName("menuEdit")
        self.menuSettings = QtWidgets.QMenu(self.menubar)
        self.menuSettings.setStyleSheet("#menuSettings{\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
" }\n"
" #menuSettings:selected {\n"
"    background-color: rgb(52, 101, 164);\n"
"    color: rgb(255, 255, 255);\n"
" }")
        self.menuSettings.setObjectName("menuSettings")
        self.menuTheme_select = QtWidgets.QMenu(self.menuSettings)
        self.menuTheme_select.setStyleSheet("#menuTheme_select{\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
" }\n"
" #menuTheme_select:selected {\n"
"    background-color: rgb(52, 101, 164);\n"
"    color: rgb(255, 255, 255);\n"
" }")
        self.menuTheme_select.setObjectName("menuTheme_select")
        self.menuAbout = QtWidgets.QMenu(self.menubar)
        self.menuAbout.setStyleSheet("#menuAbout {\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
" }\n"
" #menuAbout:selected {\n"
"    background-color: rgb(52, 101, 164);\n"
"    color: rgb(255, 255, 255);\n"
" }")
        self.menuAbout.setObjectName("menuAbout")
        self.menuRun = QtWidgets.QMenu(self.menubar)
        self.menuRun.setStyleSheet("#menuRun{\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
" }\n"
" #menuRun:selected {\n"
"    background-color: rgb(52, 101, 164);\n"
"    color: rgb(255, 255, 255);\n"
" }")
        self.menuRun.setObjectName("menuRun")
        self.menuSelect_Core = QtWidgets.QMenu(self.menuRun)
        self.menuSelect_Core.setStyleSheet("#menuSelect_Core {\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
" }\n"
" #menuSelect_Core:selected {\n"
"    background-color: rgb(52, 101, 164);\n"
"    color: rgb(255, 255, 255);\n"
" }")
        self.menuSelect_Core.setObjectName("menuSelect_Core")
        self.menuExtensions = QtWidgets.QMenu(self.menubar)
        self.menuExtensions.setStyleSheet("#menuExtensions{\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
" }\n"
" #menuExtensions:selected {\n"
"    background-color: rgb(52, 101, 164);\n"
"    color: rgb(255, 255, 255);\n"
" }")
        self.menuExtensions.setObjectName("menuExtensions")
        MainWindow.setMenuBar(self.menubar)
        self.toolButton = QtWidgets.QToolButton()
        self.toolButton.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(":/Icons/icons8-microchip-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.toolButton.setIcon(icon)
        self.toolButton.setIconSize(QtCore.QSize(45, 24))
        self.toolButton.setPopupMode(QtWidgets.QToolButton.InstantPopup)
        self.toolButton.setObjectName("toolButton")
        self.toolBar = QtWidgets.QToolBar(MainWindow)
        self.toolBar.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.toolBar.setAcceptDrops(False)
        self.toolBar.setLayoutDirection(QtCore.Qt.RightToLeft)
        self.toolBar.setStyleSheet("background-color: #d8d8d8;")
        self.toolBar.setMovable(False)
        self.toolBar.setAllowedAreas(QtCore.Qt.NoToolBarArea)
        self.toolBar.setIconSize(QtCore.QSize(45, 24))
        self.toolBar.setObjectName("toolBar")
        MainWindow.addToolBar(QtCore.Qt.TopToolBarArea, self.toolBar)
        self.statusBar = QtWidgets.QStatusBar(MainWindow)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.statusBar.sizePolicy().hasHeightForWidth())
        self.statusBar.setSizePolicy(sizePolicy)
        self.statusBar.setStyleSheet("background-color: rgb(0,128,0,75%);")
        self.statusBar.setObjectName("statusBar")
        MainWindow.setStatusBar(self.statusBar)
        self.actionNew = QtWidgets.QAction(MainWindow)
        icon1 = QtGui.QIcon()
        icon1.addPixmap(QtGui.QPixmap(":/Icons/icons8-add-property-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionNew.setIcon(icon1)
        self.actionNew.setShortcutVisibleInContextMenu(True)
        self.actionNew.setObjectName("actionNew")
        self.actionNew.triggered.connect(self.untitled)
        self.actionOpen = QtWidgets.QAction(MainWindow)
        icon2 = QtGui.QIcon()
        icon2.addPixmap(QtGui.QPixmap(":/Icons/icons8-upload-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionOpen.setIcon(icon2)
        self.actionOpen.setObjectName("actionOpen")
        self.actionOpen.setShortcut("Ctrl+o")
        self.actionOpen.triggered.connect(self.open_dialog_box)
        self.actionRename = QtWidgets.QAction(MainWindow)
        self.actionRename.setObjectName("actionRename")
        self.actionsave = QtWidgets.QAction(MainWindow)
        icon3 = QtGui.QIcon()
        icon3.addPixmap(QtGui.QPixmap(":/Icons/icons8-save-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionsave.setIcon(icon3)
        self.actionsave.setShortcutVisibleInContextMenu(True)
        self.actionsave.setObjectName("actionsave")
        self.actionsave.triggered.connect(self.saveAs)
        self.actionundo = QtWidgets.QAction(MainWindow)
        icon4 = QtGui.QIcon()
        icon4.addPixmap(QtGui.QPixmap(":/Icons/icons8-undo-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionundo.setIcon(icon4)
        self.actionundo.setVisible(True)
        self.actionundo.setShortcutVisibleInContextMenu(True)
        self.actionundo.setObjectName("actionundo")
        self.actionRedo = QtWidgets.QAction(MainWindow)
        icon5 = QtGui.QIcon()
        icon5.addPixmap(QtGui.QPixmap(":/Icons/icons8-redo-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionRedo.setIcon(icon5)
        self.actionRedo.setShortcutVisibleInContextMenu(True)
        self.actionRedo.setObjectName("actionRedo")
        self.actioncut = QtWidgets.QAction(MainWindow)
        icon6 = QtGui.QIcon()
        icon6.addPixmap(QtGui.QPixmap(":/Icons/icons8-cut-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actioncut.setIcon(icon6)
        self.actioncut.setShortcutVisibleInContextMenu(True)
        self.actioncut.setObjectName("actioncut")
        self.actioncopy = QtWidgets.QAction(MainWindow)
        icon7 = QtGui.QIcon()
        icon7.addPixmap(QtGui.QPixmap(":/Icons/icons8-copy-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actioncopy.setIcon(icon7)
        self.actioncopy.setShortcutVisibleInContextMenu(True)
        self.actioncopy.setObjectName("actioncopy")
        self.actionpaste = QtWidgets.QAction(MainWindow)
        icon8 = QtGui.QIcon()
        icon8.addPixmap(QtGui.QPixmap(":/Icons/icons8-paste-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionpaste.setIcon(icon8)
        self.actionpaste.setShortcutVisibleInContextMenu(True)
        self.actionpaste.setObjectName("actionpaste")
        self.actionFind = QtWidgets.QAction(MainWindow)
        icon9 = QtGui.QIcon()
        icon9.addPixmap(QtGui.QPixmap(":/Icons/icons8-search-property-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionFind.setIcon(icon9)
        self.actionFind.setShortcutVisibleInContextMenu(True)
        self.actionFind.setObjectName("actionFind")
        self.actionFind.setShortcut("Ctrl+F")
        self.actionDark = QtWidgets.QAction(MainWindow)
        self.actionDark.setObjectName("actionDark")
        self.actionDark.triggered.connect(self.dark_theme)
        self.actionMERL = QtWidgets.QAction(MainWindow)
        self.actionMERL.setObjectName("actionMERL")
        self.actionMERL.triggered.connect(self.open_site)
        self.actionhelp = QtWidgets.QAction(MainWindow)
        self.actionhelp.setObjectName("actionhelp")
        self.actionhelp.triggered.connect(self.about)
        self.actionFont = QtWidgets.QAction(MainWindow)
        icon10 = QtGui.QIcon()
        icon10.addPixmap(QtGui.QPixmap(":/Icons/icons8-font-size-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionFont.setIcon(icon10)
        self.actionFont.setObjectName("actionFont")
        self.actionRun = QtWidgets.QAction(MainWindow)
        icon11 = QtGui.QIcon()
        icon11.addPixmap(QtGui.QPixmap(":/Icons/icons8-play-property-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionRun.setIcon(icon11)
        self.actionRun.setObjectName("actionRun")
        self.actionRun.triggered.connect(self.run_Burq)
        self.actionRun.setEnabled(False)
        self.actionEdit_Configurations = QtWidgets.QAction(MainWindow)
        icon12 = QtGui.QIcon()
        icon12.addPixmap(QtGui.QPixmap(":/Icons/icons8-edit-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionEdit_Configurations.setIcon(icon12)
        self.actionEdit_Configurations.setObjectName("actionEdit_Configurations")
        self.actionSave_As = QtWidgets.QAction(MainWindow)
        icon13 = QtGui.QIcon()
        icon13.addPixmap(QtGui.QPixmap(":/Icons/icons8-save-as-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionSave_As.setIcon(icon13)
        self.actionSave_As.setObjectName("actionSave_As")
        self.actionSave_As.triggered.connect(self.saveAs)
        self.actionSave_As.setShortcut("Ctrl+Shift+s")
        self.actionHigh_Contrast = QtWidgets.QAction(MainWindow)
        self.actionHigh_Contrast.setObjectName("actionHigh_Contrast")
        self.actionChisel_Core = QtWidgets.QAction(MainWindow)
        icon14 = QtGui.QIcon()
        icon14.addPixmap(QtGui.QPixmap(":/Icons/icons8-nail-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionChisel_Core.setIcon(icon14)
        self.actionChisel_Core.setObjectName("actionChisel_Core")
        self.actionVerilog = QtWidgets.QAction(MainWindow)
        self.actionVerilog.setObjectName("actionVerilog")
        self.actionDebug = QtWidgets.QAction(MainWindow)
        icon15 = QtGui.QIcon()
        icon15.addPixmap(QtGui.QPixmap(":/Icons/icons8-bug-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionDebug.setIcon(icon15)
        self.actionDebug.setObjectName("actionDebug")
        self.actionDebug.triggered.connect(self.termclose)
        self.actionEdit_Configurations_2 = QtWidgets.QAction(MainWindow)
        self.actionEdit_Configurations_2.setObjectName("actionEdit_Configurations_2")
        self.actionCompile = QtWidgets.QAction(MainWindow)
        icon16 = QtGui.QIcon()
        icon16.addPixmap(QtGui.QPixmap(":/Icons/icons8-new-property-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionCompile.setIcon(icon16)
        self.actionCompile.setObjectName("actionCompile")
        self.actionCompile.triggered.connect(self.compile_Code)
        self.actionB_I = QtWidgets.QAction(MainWindow)
        self.actionB_I.setObjectName("actionB_I")
        self.actionB_I_C = QtWidgets.QAction(MainWindow)
        self.actionB_I_C.setObjectName("actionB_I_C")
        self.actionB_I_M = QtWidgets.QAction(MainWindow)
        self.actionB_I_M.setObjectName("actionB_I_M")
        self.menuFile.addAction(self.actionNew)
        self.menuFile.addAction(self.actionOpen)
        self.menuFile.addAction(self.actionRename)
        self.menuFile.addAction(self.actionsave)
        self.menuFile.addAction(self.actionSave_As)
        self.menuEdit.addAction(self.actionundo)
        self.menuEdit.addAction(self.actionRedo)
        self.menuEdit.addAction(self.actioncut)
        self.menuEdit.addAction(self.actioncopy)
        self.menuEdit.addAction(self.actionpaste)
        self.menuEdit.addAction(self.actionFind)
        self.menuTheme_select.addAction(self.actionDark)
        self.menuTheme_select.addAction(self.actionHigh_Contrast)
        self.menuSettings.addAction(self.menuTheme_select.menuAction())
        self.menuSettings.addSeparator()
        self.menuSettings.addAction(self.actionFont)
        self.menuAbout.addAction(self.actionMERL)
        self.menuAbout.addAction(self.actionhelp)
        self.menuSelect_Core.addSeparator()
        self.menuSelect_Core.addSeparator()
        self.menuSelect_Core.addAction(self.actionChisel_Core)
        self.menuSelect_Core.addAction(self.actionVerilog)
        self.menuRun.addAction(self.actionRun)
        self.menuRun.addAction(self.actionCompile)
        self.menuRun.addAction(self.menuSelect_Core.menuAction())
        self.menuRun.addAction(self.actionDebug)
        self.menuRun.addAction(self.actionEdit_Configurations_2)
        self.menuExtensions.addAction(self.actionB_I)
        self.menuExtensions.addAction(self.actionB_I_C)
        self.menuExtensions.addAction(self.actionB_I_M)
        self.menubar.addAction(self.menuFile.menuAction())
        self.menubar.addAction(self.menuEdit.menuAction())
        self.menubar.addAction(self.menuSettings.menuAction())
        self.menubar.addAction(self.menuAbout.menuAction())
        self.menubar.addAction(self.menuExtensions.menuAction())
        self.menubar.addAction(self.menuRun.menuAction())
        self.toolBar.addAction(self.actionDebug)
        self.toolBar.addAction(self.actionChisel_Core)
        self.toolBar.addAction(self.actionVerilog)
        self.toolBar.addSeparator()
        self.toolBar.addSeparator()
        self.toolBar.addAction(self.actionRun)
        self.toolBar.addAction(self.actionCompile)
        self.toolBar.addSeparator()
        self.toolBar.addAction(self.actionFind)
        self.toolBar.addAction(self.actionsave)
        self.toolBar.addAction(self.actionNew)
        self.toolBar.addSeparator()
        self.toolBar.addWidget(self.toolButton)
        self.toolButton.addAction(self.actionB_I)
        self.toolButton.addAction(self.actionB_I_C)
        self.toolButton.addAction(self.actionB_I_M)

        self.actionB_I_C.triggered.connect(self.myfun)

        self.retranslateUi(MainWindow)
        self.tabWidget_2.setCurrentIndex(0)
        self.tabWidget.setCurrentIndex(0)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)
        self.count_myfun = 2
        self.plainTextEdit_2.isReadOnly()
        self.plainTextEdit_3.isReadOnly()
        self.plainTextEdit23.isReadOnly()
 		



    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "BURQ IDE"))
        self.tabWidget_2.setTabText(self.tabWidget_2.indexOf(self.tab), _translate("MainWindow", "Untitled"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab1), _translate("MainWindow", "Terminal"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_3), _translate("MainWindow", "Output"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_2), _translate("MainWindow", "Verilator"))
        self.label_3.setText(_translate("MainWindow", "ASSEMBLY CODE"))
        self.label_2.setText(_translate("MainWindow", "MACHINE CODE"))
        self.toolButton.setText(_translate("MainWindow", "..."))
        self.menuFile.setTitle(_translate("MainWindow", "File"))
        self.menuEdit.setTitle(_translate("MainWindow", "Edit"))
        self.menuSettings.setTitle(_translate("MainWindow", "Settings"))
        self.menuTheme_select.setTitle(_translate("MainWindow", "Theme select"))
        self.menuAbout.setTitle(_translate("MainWindow", "About"))
        self.menuRun.setTitle(_translate("MainWindow", "Run"))
        self.menuSelect_Core.setTitle(_translate("MainWindow", "Select Core"))
        self.menuExtensions.setTitle(_translate("MainWindow", "Extensions"))
        self.toolBar.setWindowTitle(_translate("MainWindow", "toolBar"))
        self.actionNew.setText(_translate("MainWindow", "New"))
        self.actionNew.setShortcut(_translate("MainWindow", "Ctrl+N"))
        self.actionOpen.setText(_translate("MainWindow", "Import"))
        self.actionRename.setText(_translate("MainWindow", "Rename"))
        self.actionsave.setText(_translate("MainWindow", "Save"))
        self.actionsave.setShortcut(_translate("MainWindow", "Ctrl+S"))
        self.actionundo.setText(_translate("MainWindow", "undo"))
        self.actionundo.setShortcut(_translate("MainWindow", "Ctrl+Z"))
        self.actionRedo.setText(_translate("MainWindow", "Redo"))
        self.actionRedo.setShortcut(_translate("MainWindow", "Ctrl+Y"))
        self.actioncut.setText(_translate("MainWindow", "cut"))
        self.actioncut.setShortcut(_translate("MainWindow", "Ctrl+X"))
        self.actioncopy.setText(_translate("MainWindow", "copy"))
        self.actioncopy.setShortcut(_translate("MainWindow", "Ctrl+V"))
        self.actionpaste.setText(_translate("MainWindow", "paste"))
        self.actionpaste.setShortcut(_translate("MainWindow", "Ctrl+V"))
        self.actionFind.setText(_translate("MainWindow", "Find"))
        self.actionFind.setShortcut(_translate("MainWindow", "Ctrl+F"))
        self.actionDark.setText(_translate("MainWindow", "Dracula"))
        self.actionMERL.setText(_translate("MainWindow", "MERL"))
        self.actionhelp.setText(_translate("MainWindow", "help"))
        self.actionFont.setText(_translate("MainWindow", "Font"))
        self.actionRun.setText(_translate("MainWindow", "Run"))
        self.actionEdit_Configurations.setText(_translate("MainWindow", "Edit Configurations"))
        self.actionSave_As.setText(_translate("MainWindow", "Save As"))
        self.actionSave_As.setShortcut(_translate("MainWindow","Ctrl+Shift+S"))
        self.actionHigh_Contrast.setText(_translate("MainWindow", "High Contrast"))
        self.actionChisel_Core.setText(_translate("MainWindow", "Chisel"))
        self.actionVerilog.setText(_translate("MainWindow", "Verilog"))
        self.actionDebug.setText(_translate("MainWindow", "Debug"))
        self.actionEdit_Configurations_2.setText(_translate("MainWindow", "Edit Configurations"))
        self.actionCompile.setText(_translate("MainWindow", "Compile"))
        self.actionB_I.setText(_translate("MainWindow", "B I "))
        self.actionB_I_C.setText(_translate("MainWindow", "B I C"))
        self.actionB_I_M.setText(_translate("MainWindow", "B I M"))

    def myfun(self):
        from subprocess import call
        if self.count_myfun % 2 == 0:
            #os.system('python Extraction.py')
            call(["python3", "Extraction.py"])
            file = open("c_converted_machine.txt", "r")
            assembly = file.read()
            file.close()
            self.plainTextEdit_3.setPlainText(assembly)
            self.count_myfun += 1
            
        else:
            self.read_MachineCode()
            self.count_myfun += 1
            
    def on_clicked(self, index):
        self.num+=1
        self.tabWidget_2.setCurrentIndex(self.num)
        a=setattr(self,"tab",self.num)
        path = self.fileModel.fileInfo(index).absoluteFilePath()
        self.treeView.setRootIndex(self.fileModel.setRootPath(path))
        print(path)
        with open(path, "r") as f:
            print(f.readline())
        ff = open(path,"r")
        c_read = ff.read()
        #Tab Reading for index values 
        a= QtWidgets.QWidget()
        a.setObjectName("tab"+str(self.num))
        self.verticalLayout_7 = QtWidgets.QVBoxLayout(a)
        self.verticalLayout_7.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_7.setSpacing(0)
        self.verticalLayout_7.setObjectName("verticalLayout_7")
        self.tabWidget_2.setTabsClosable(True)
        self.tabWidget_2.tabCloseRequested.connect(self.removeTab)
        self.plainTextEdit = LineNumber.QCodeEditor(a)
        self.highlighter=hightest.Highlighter(self.plainTextEdit.document())
        self.plainTextEdit.setStyleSheet("background-color: rgb(255, 255, 255,88%);\n"
"")
        self.plainTextEdit.setObjectName("plainTextEdit")
        self.verticalLayout_7.addWidget(self.plainTextEdit)
        self.tabWidget_2.addTab(a, path)
        self.plainTextEdit.setPlainText(c_read)


    def removeTab(self, index):
        print(index)
        widget = self.tabWidget_2.widget(index)
        if widget is not None:
            widget.deleteLater()

    def untitled(self,index):
        self.num+=1
        self.tabWidget_2.setCurrentIndex(self.num)
        a=setattr(self,"tab",self.num)
        #Tab Reading for index values 
        a= QtWidgets.QWidget()
        a.setObjectName("tab"+str(self.num))
        self.verticalLayout_7 = QtWidgets.QVBoxLayout(a)
        self.verticalLayout_7.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_7.setSpacing(0)
        self.verticalLayout_7.setObjectName("verticalLayout_7")
        self.tabWidget_2.setTabsClosable(True)
        self.tabWidget_2.tabCloseRequested.connect(self.removeTab)
        self.plainTextEdit = LineNumber.QCodeEditor(a)
        self.highlighter=hightest.Highlighter(self.plainTextEdit.document())
        self.plainTextEdit.setStyleSheet("background-color: rgb(255, 255, 255,88%);\n"
"")
        self.plainTextEdit.setObjectName("plainTextEdit")
        self.verticalLayout_7.addWidget(self.plainTextEdit)
        self.tabWidget_2.addTab(a, "NewTest.C")
        self.plainTextEdit.setPlainText("")

    def open_dialog_box(self):
        filename = QFileDialog.getOpenFileName()
        path = filename[0]
        print(path)
        with open(path, "r") as f:
            print(f.readline())

        ff = open(path,"r")
        c_read = ff.read()
        #Tab Read initialise
        self.num+=1
        self.tabWidget_2.setCurrentIndex(self.num)
        a=setattr(self,"tab",self.num)
        #Tab Read 13
        a= QtWidgets.QWidget()
        a.setObjectName("tab"+str(self.num))
        self.verticalLayout_7 = QtWidgets.QVBoxLayout(a)
        self.verticalLayout_7.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_7.setSpacing(0)
        self.verticalLayout_7.setObjectName("verticalLayout_7")
        self.tabWidget_2.setTabsClosable(True)
        self.tabWidget_2.tabCloseRequested.connect(self.removeTab)
        self.plainTextEdit = LineNumber.QCodeEditor(a)
        self.highlighter=hightest.Highlighter(self.plainTextEdit.document())
        self.plainTextEdit.setStyleSheet("background-color: rgb(255, 255, 255,88%);\n"
"")
        self.plainTextEdit.setObjectName("plainTextEdit")
        self.verticalLayout_7.addWidget(self.plainTextEdit)
        self.tabWidget_2.addTab(a, path)
        self.plainTextEdit.setPlainText(c_read)


    

    def run_Command(self, command = "ls"):
        program = "tmux"
        options = []
        options.extend([command])
        options.extend(["\r"])
        print(options)
        for data in range(len(options)):
            self.tab1.sendText(options[data])
        
        
        

    def read_MachineCode(self):
        file = open("/home/monis/learning-journey/machinecode.txt", "r")
        machineCode = file.read()
        file.close()
        self.plainTextEdit_3.setPlainText(machineCode)
        

    def read_AssemblyCode(self):
        file = open("/home/monis/learning-journey/machine.txt", "r")
        assembly = file.read()
        file.close()
        self.plainTextEdit_2.setPlainText(assembly)
        

    def save_Code(self):
        file = open("/home/monis/learning-journey/test.c", "w")
        code = self.plainTextEdit.toPlainText()
        file.write(code)
        file.close()

    def compile_Code(self):
        self.actionRun.setEnabled(False)
        self.save_Code()
        self.plainTextEdit_2.setPlainText("")
        self.plainTextEdit_3.setPlainText("")
        self.run_Command("cd /home/monis/learning-journey")
        self.run_Command("./script2.sh")
        
        thread=threading.Thread(target=self.error_check)
        thread.start()

    def termclose(self):
        self.tab1.sendKeyEvent()
        
        
    def output(self):
        import re
        time.sleep(0.5)
        file=open("/home/monis/learning-journey/output.txt", "r")
        self.out12=file.read()
        file.close()
        self.plainTextEdit23.setPlainText(self.out12)
        
        
    def error_check(self):   ##Error Check by GCC Line Number
        import re
        time.sleep(0.5)
        file = open("/home/monis/learning-journey/meralog.txt", "r")
        assembly = file.read()
        x = re.findall("    [0-9] |   [1-9999][0-9999] ",assembly)
        
        if x==[]:
            print("No errors")
            self.actionRun.setEnabled(True)
            file.close()
            
            
        
        else:
            error_line=int(x[-1])
            self.plainTextEdit.highlightErrorLine(error_line-1)
            self.actionRun.setEnabled(False)
            print(error_line)
            file.close()

    def run_Burq(self):
        self.read_AssemblyCode()
        self.read_MachineCode()
        self.run_Command("cd /home/monis/learning-journey")
        self.run_Command("./script3.sh")
        self.output()

    def open_site(self):
        webbrowser.open('https://www.merledupk.org/')

    def dark_theme(self):
        MainWindow.close()
        from subprocess import call
        call(["python3", "DarkW.py"])
        
    def about(self):
        from subprocess import call
        call(["python3", "about_screen.py"])

    def changed(self):
        self.changesSaved = False
        

    def closeEvent(self,event): #Not working
        
        if self.changesSaved:

            event.accept()

        else:
        
            popup = QtWidgets.QMessageBox(self)

            popup.setIcon(QtWidgets.QMessageBox.Warning)
            
            popup.setText("The document has been modified")
            
            popup.setInformativeText("Do you want to save your changes?")
            
            popup.setStandardButtons(QtWidgets.QMessageBox.Save   |
                                      QtWidgets.QMessageBox.Cancel |
                                      QtWidgets.QMessageBox.Discard)
            
            popup.setDefaultButton(QtWidgets.QMessageBox.Save)

            answer = popup.exec_()

            if answer == QtWidgets.QMessageBox.Save:
                self.save()

            elif answer == QtWidgets.QMessageBox.Discard:
                event.accept()

            else:
                event.ignore()
    def saveAs(self):  #Please do not use the Ctrl+Shift+S command neither the save_as its still on work
        if self.filename !="untitled":
          self.filename = QtWidgets.QFileDialog.getSaveFileName(self, 'Save File')[0]

        if self.filename =="untitled":
            if not self.filename.endswith(".writer"):
              self.filename += ".writer"
            with open(self.filename,"wt") as file:
                file.write(self.plainTextEdit.toPlainText())

            self.changesSaved = True
    
    
    
    

import resource_rc


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    file = QFile(":/light.qss")
    file.open(QFile.ReadOnly | QFile.Text)
    stream = QTextStream(file)
    app.setStyleSheet(stream.readAll())
    
    MainWindow = QtWidgets.QMainWindow()
    
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())
    
    
