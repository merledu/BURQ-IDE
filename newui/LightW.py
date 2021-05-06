from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtWidgets import QApplication, QFileSystemModel, QTreeView, QWidget, QVBoxLayout
from PyQt5.QtGui import QIcon
import sys
import LineNumber
import webbrowser
import hightest
import time
from QTermWidget import QTermWidget
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

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        self.core=1
        self.filename = "untitled"
        self.temptab="NewTest.C"
        self.changesSaved = True
        self._process = []
        self.num=21
        self.out12=""
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(1279, 724)
        MainWindow.setAcceptDrops(False)
        MainWindow.setAutoFillBackground(False)

        MainWindow.showMaximized()
        MainWindow.closeEvent = self.closeEvent
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout(self.centralwidget)
        self.horizontalLayout_3.setContentsMargins(1, 1, 4, 0)
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.splitter_2 = QtWidgets.QSplitter(self.centralwidget)
        self.splitter_2.setOrientation(QtCore.Qt.Horizontal)
        self.splitter_2.setHandleWidth(10)
        self.splitter_2.setObjectName("splitter_2")

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

        self.tabWidget_2.setObjectName("tabWidget_2")
        self.tab = QtWidgets.QWidget()
        self.tab.setObjectName("tab")
        self.verticalLayout_7 = QtWidgets.QVBoxLayout(self.tab)
        self.verticalLayout_7.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_7.setSpacing(0)
        self.verticalLayout_7.setObjectName("verticalLayout_7")
        self.plainTextEdit=LineNumber.QCodeEditor(self.tab)
        self.highlighter=hightest.Highlighter(self.plainTextEdit.document())

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

        self.tabWidget.setTabShape(QtWidgets.QTabWidget.Rounded)
        self.tabWidget.setObjectName("tabWidget")

        #Terminal
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

        self.plainTextEdit23.setObjectName("plainTextEdit23")
        self.verticalLayout_7.addWidget(self.plainTextEdit23)
        self.tabWidget.addTab(self.tab_3, "Output")
        self.horizontalLayout_2.addWidget(self.tabWidget)
        self.horizontalLayout_3.addWidget(self.splitter_2)
        self.verticalLayout_6 = QtWidgets.QVBoxLayout()
        self.verticalLayout_6.setObjectName("verticalLayout_6")
        self.verticalLayout = QtWidgets.QVBoxLayout()
        self.verticalLayout.setSpacing(0)
        self.verticalLayout.setObjectName("verticalLayout")
        self.label_3 = QtWidgets.QLabel(self.centralwidget)
        font = QtGui.QFont()
        font.setPointSize(14)
        self.label_3.setFont(font)
        self.label_3.setLayoutDirection(QtCore.Qt.LeftToRight)

        self.label_3.setTextFormat(QtCore.Qt.AutoText)
        self.label_3.setAlignment(QtCore.Qt.AlignCenter)
        self.label_3.setWordWrap(False)
        self.label_3.setObjectName("label_3")
        self.label_3.setStyleSheet("background-color:  #008000;\n"
        "color: rgb(255, 255, 255);\n"
        "border-top-left-radius: 10px;\n"
        "border-top-right-radius: 10px;\n"
        "text-align: center;")
        self.verticalLayout.addWidget(self.label_3)
        self.plainTextEdit_2 = QtWidgets.QPlainTextEdit(self.centralwidget)

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

        self.label_2.setAlignment(QtCore.Qt.AlignCenter)
        self.label_2.setObjectName("label_2")
        self.label_2.setStyleSheet("background-color:  #008000;\n"
        "color: rgb(255, 255, 255);\n"
        "border-top-left-radius: 10px;\n"
        "border-top-right-radius: 10px;\n"
        "text-align: center;")
        self.verticalLayout_2.addWidget(self.label_2)
        self.plainTextEdit_3 = QtWidgets.QPlainTextEdit(self.centralwidget)

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

        self.menubar.setObjectName("menubar")
        self.menuFile = QtWidgets.QMenu(self.menubar)

        self.menuFile.setObjectName("menuFile")
        self.menuEdit = QtWidgets.QMenu(self.menubar)

        self.menuEdit.setObjectName("menuEdit")
        self.menuSettings = QtWidgets.QMenu(self.menubar)

        self.menuSettings.setObjectName("menuSettings")
        self.menuTheme_select = QtWidgets.QMenu(self.menuSettings)
        icon227 = QtGui.QIcon()
        icon227.addPixmap(QtGui.QPixmap("Choose_theme-512.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.menuTheme_select.setIcon(icon227)

        self.menuTheme_select.setObjectName("menuTheme_select")
        self.menuAbout = QtWidgets.QMenu(self.menubar)

        self.menuAbout.setObjectName("menuAbout")
        self.menuRun = QtWidgets.QMenu(self.menubar)

        self.menuRun.setObjectName("menuRun")
        self.menuSelect_Core = QtWidgets.QMenu(self.menuRun)
        icon231=QtGui.QIcon()
        icon231.addPixmap(QtGui.QPixmap(":/Icons/icons8-microchip-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.menuSelect_Core.setIcon(icon231)

        self.menuSelect_Core.setObjectName("menuSelect_Core")
        self.menuExtensions = QtWidgets.QMenu(self.menubar)

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
        self.toolButton.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.toolBar = QtWidgets.QToolBar(MainWindow)
        self.toolBar.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.toolBar.setAcceptDrops(False)
        self.toolBar.setLayoutDirection(QtCore.Qt.RightToLeft)

        self.addcore = QtWidgets.QToolButton()
        self.addcore.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        icon78 = QtGui.QIcon()
        icon78.addPixmap(QtGui.QPixmap(":/Logo/addcore.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.addcore.setIcon(icon78)
        self.addcore.setIconSize(QtCore.QSize(45, 24))
        self.addcore.setPopupMode(QtWidgets.QToolButton.InstantPopup)
        self.addcore.setObjectName("toolButton")
        self.addcore.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))

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

        self.statusBar.setObjectName("statusBar")
        MainWindow.setStatusBar(self.statusBar)

        self.spacer=QtWidgets.QWidget()
        self.spacer.setSizePolicy(QSizePolicy.Expanding, QSizePolicy.Expanding)
        self.spacer.setStyleSheet("background-color: rgb(0,0,0,0%);")

        self.uit = QtWidgets.QAction(MainWindow)
        icon22 = QtGui.QIcon()
        icon22.addPixmap(QtGui.QPixmap("uit.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.uit.setIcon(icon22)
        self.uit.setShortcutVisibleInContextMenu(True)
        self.uit.setObjectName("actionNew")
        self.uit.triggered.connect(self.open_uit)
        
        self.merl = QtWidgets.QAction(MainWindow)
        icon23 = QtGui.QIcon()
        icon23.addPixmap(QtGui.QPixmap("merl.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.merl.setIcon(icon23)
        self.merl.setShortcutVisibleInContextMenu(True)
        self.merl.setObjectName("actionNew")
        self.merl.triggered.connect(self.open_site)

        
        self.About = QtWidgets.QAction(MainWindow)
        icon21 = QtGui.QIcon()
        icon21.addPixmap(QtGui.QPixmap("About_logo.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.About.setIcon(icon21)
        self.About.setShortcutVisibleInContextMenu(True)
        self.About.setObjectName("actionNew")
        self.About.triggered.connect(self.about)
        self.actionNew = QtWidgets.QAction(MainWindow)

        
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
        
        self.actionsave = QtWidgets.QAction(MainWindow)
        icon3 = QtGui.QIcon()
        icon3.addPixmap(QtGui.QPixmap(":/Icons/icons8-save-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionsave.setIcon(icon3)
        self.actionsave.setShortcutVisibleInContextMenu(True)
        self.actionsave.setObjectName("actionsave")
        self.actionsave.triggered.connect(self.save_temp)
        self.actionsave.setShortcut("Ctrl+s")
        self.actionundo = QtWidgets.QAction(MainWindow)
        icon4 = QtGui.QIcon()
        icon4.addPixmap(QtGui.QPixmap(":/Icons/icons8-undo-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionundo.setIcon(icon4)
        self.actionundo.setVisible(True)
        self.actionundo.setShortcutVisibleInContextMenu(True)
        self.actionundo.setShortcut("Ctrl+Z")
        self.actionundo.triggered.connect(self.plainTextEdit.undo)
        self.actionundo.setObjectName("actionundo")
        self.actionRedo = QtWidgets.QAction(MainWindow)
        self.actionRedo.setShortcut("Ctrl+Shift+Z")
        self.actionRedo.triggered.connect(self.plainTextEdit.redo)
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
        self.actioncut.setShortcut("Ctrl+X")
        self.actioncut.triggered.connect(self.plainTextEdit.cut)
        self.actioncut.setObjectName("actioncut")
        self.actioncopy = QtWidgets.QAction(MainWindow)
        icon7 = QtGui.QIcon()
        icon7.addPixmap(QtGui.QPixmap(":/Icons/icons8-copy-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actioncopy.setIcon(icon7)
        self.actioncopy.setShortcut("Ctrl+C")
        self.actioncopy.triggered.connect(self.plainTextEdit.copy)
        self.actioncopy.setShortcutVisibleInContextMenu(True)
        self.actioncopy.setObjectName("actioncopy")
        self.actionpaste = QtWidgets.QAction(MainWindow)
        icon8 = QtGui.QIcon()
        icon8.addPixmap(QtGui.QPixmap(":/Icons/icons8-paste-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionpaste.setIcon(icon8)
        self.actionpaste.setShortcut("Ctrl+V")
        self.actionpaste.triggered.connect(self.plainTextEdit.paste)
        self.actionpaste.setShortcutVisibleInContextMenu(True)
        self.actionpaste.setObjectName("actionpaste")
        self.actionFind = QtWidgets.QAction(MainWindow)
        icon9 = QtGui.QIcon()
        icon9.addPixmap(QtGui.QPixmap(":/Icons/icons8-search-property-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionFind.setIcon(icon9)
        self.actionFind.setShortcutVisibleInContextMenu(True)
        self.actionFind.setObjectName("actionFind")
        self.actionFind.setShortcut("Ctrl+F")
        self.actionFind.triggered.connect(find.Find(self.plainTextEdit).show)

        icon226=QtGui.QIcon()
        icon226.addPixmap(QtGui.QPixmap("Dark_Theme-512.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionDark = QtWidgets.QAction(MainWindow)
        self.actionDark.setObjectName("actionDark")
        self.actionDark.setIcon(icon226)
        self.actionDark.triggered.connect(self.darkTheme)
        self.actionMERL = QtWidgets.QAction(MainWindow)
        icon228 = QtGui.QIcon()
        icon228.addPixmap(QtGui.QPixmap("merl.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionMERL.setIcon(icon228)
        self.actionMERL.setObjectName("actionMERL")
        self.actionMERL.triggered.connect(self.open_site)
        self.actionhelp = QtWidgets.QAction(MainWindow)
        self.actionhelp.setObjectName("actionhelp")
        icon229 = QtGui.QIcon()
        icon229.addPixmap(QtGui.QPixmap("About_logo.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionhelp.setIcon(icon229)
        self.actionhelp.triggered.connect(self.about)
        
        
        self.actionRun = QtWidgets.QAction(MainWindow)
        icon11 = QtGui.QIcon()
        icon11.addPixmap(QtGui.QPixmap(":/Icons/icons8-play-property-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionRun.setIcon(icon11)
        self.actionRun.setObjectName("actionRun")
        self.actionRun.triggered.connect(self.run_Burq)
        self.actionRun.setEnabled(False)
        
        self.actionSave_As = QtWidgets.QAction(MainWindow)
        icon13 = QtGui.QIcon()
        icon13.addPixmap(QtGui.QPixmap(":/Icons/icons8-save-as-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionSave_As.setIcon(icon13)
        self.actionSave_As.setObjectName("actionSave_As")
        self.actionSave_As.triggered.connect(self.saveAs)
        self.actionSave_As.setShortcut("Ctrl+Shift+s")
        icon225=QtGui.QIcon()
        icon225.addPixmap(QtGui.QPixmap("Light_Theme-512.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionHigh_Contrast = QtWidgets.QAction(MainWindow)
        self.actionHigh_Contrast.setObjectName("actionHigh_Contrast")
        self.actionHigh_Contrast.setIcon(icon225)
        self.actionHigh_Contrast.triggered.connect(self.lightTheme)
        self.actionChisel_Core = QtWidgets.QAction(MainWindow)
        icon14 = QtGui.QIcon()
        icon14.addPixmap(QtGui.QPixmap(":/Icons/icons8-nail-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionChisel_Core.setIcon(icon14)
        self.actionChisel_Core.setObjectName("actionChisel_Core")
        self.actionChisel_Core.setCheckable(True)
        self.actionChisel_Core.setChecked(False)
        self.actionChisel_Core.triggered.connect(self.chisel)
        self.actionVerilog = QtWidgets.QAction(MainWindow)
        icon230 = QtGui.QIcon()
        icon230.addPixmap(QtGui.QPixmap("Verilator_logo.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionVerilog.setIcon(icon230)

        self.actionVerilog.setObjectName("actionVerilog")
        self.actionVerilog.setCheckable(True)
        self.actionChisel_Core.setChecked(False)
        self.actionVerilog.triggered.connect(self.verilog)
        self.actionDebug = QtWidgets.QAction(MainWindow)
        icon15 = QtGui.QIcon()
        icon15.addPixmap(QtGui.QPixmap(":/Icons/output.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionDebug.setIcon(icon15)
        self.actionDebug.setObjectName("actionDebug")
        self.actionDebug.triggered.connect(self.termclose)
        
        self.actionCompile = QtWidgets.QAction(MainWindow)
        icon16 = QtGui.QIcon()
        icon16.addPixmap(QtGui.QPixmap(":/Icons/icons8-new-property-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionCompile.setIcon(icon16)
        self.actionCompile.setObjectName("actionCompile")
        self.actionCompile.triggered.connect(self.compile_Code)
        self.actionB_I = QtWidgets.QAction(MainWindow)
        self.actionB_I.setObjectName("actionB_I")
        icon232=QtGui.QIcon()
        icon232.addPixmap(QtGui.QPixmap(":/Icons/i.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionB_I.setIcon(icon232)

        self.chisel = QtWidgets.QAction(MainWindow)
        self.chisel.setObjectName("actionchisel")
        icon233=QtGui.QIcon()
        icon233.addPixmap(QtGui.QPixmap(":/Icons/icons8-nail-100.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.chisel.setIcon(icon233)

        self.verilog = QtWidgets.QAction(MainWindow)
        self.verilog.setObjectName("actionverilog")
        icon233=QtGui.QIcon()
        icon233.addPixmap(QtGui.QPixmap("Verilator_logo.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.verilog.setIcon(icon233)
        
        
        self.actionB_I_C = QtWidgets.QAction(MainWindow)
        self.actionB_I_C.setObjectName("actionB_I_C")
        icon233=QtGui.QIcon()
        icon233.addPixmap(QtGui.QPixmap(":/Icons/ic.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionB_I_C.setIcon(icon233)
        
        self.actionB_I_M = QtWidgets.QAction(MainWindow)
        self.actionB_I_M.setObjectName("actionB_I_M")
        icon234=QtGui.QIcon()
        icon234.addPixmap(QtGui.QPixmap(":/Icons/im.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionB_I_M.setIcon(icon234)
        
        self.actionB_I_M_C = QtWidgets.QAction(MainWindow)
        self.actionB_I_M_C.setObjectName("actionB_I_M_C")
        icon235=QtGui.QIcon()
        icon235.addPixmap(QtGui.QPixmap(":/Icons/imc.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actionB_I_M_C.setIcon(icon235)
        
        self.comboBox = QtWidgets.QComboBox()
        self.comboBox.setObjectName("comboBox")
        self.comboBox.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.comboBox.addItem("Select Core")
        file = open("Core.txt", "r")
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
        self.comboBox.setEditable(True) 
        line_edit = self.comboBox.lineEdit() 
        line_edit.setAlignment(Qt.AlignCenter) 
        line_edit.setReadOnly(True) 
        line_edit.setEnabled(False)
        self.comboBox.setEditable(False) 


        self.retranslateUi(MainWindow)
        self.comboBox.setCurrentIndex(0)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)
        self.dg = Dialog()
        self.dg.accepted.connect(self.coreAdded)
        self.dg.rejected.connect(self.cancel)

        self.menuFile.addAction(self.actionNew)
        self.menuFile.addAction(self.actionOpen)
        
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
        self.toolBar.addWidget(self.comboBox)
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
        self.toolButton.addAction(self.actionB_I_M_C)
        self.toolBar.addWidget(self.spacer)
        self.toolBar.addAction(self.About)
        self.toolBar.addAction(self.uit)
        self.toolBar.addAction(self.merl)
        self.toolBar.addSeparator()
        self.toolBar.addSeparator()
        

        self.actionB_I_C.triggered.connect(self.myfun)
        self.chisel.triggered.connect(self.addchisel)
        self.verilog.triggered.connect(self.addverilog)

        self.retranslateUi(MainWindow)
        self.tabWidget_2.setCurrentIndex(0)
        self.tabWidget.setCurrentIndex(0)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)
        self.count_myfun = 2
        self.plainTextEdit_2.isReadOnly()
        self.plainTextEdit_3.isReadOnly()
        self.plainTextEdit23.isReadOnly()

        
    def cancel(self):
        self.comboBox.setCurrentIndex(0)
        self.dg.clr()

    def coreAdded(self, values):
        file = open("Core.txt", "a")
        file.write('\n')
        file.write(str(values['Name']+','+str(values['Type']+','+str(values['Vcd']+','+str(values['Top']+','+str(values['Input']))))))
        file.close()
        self.coretotal+=1
        if values['Type'] == "Verilog":
                self.comboBox.insertItem(self.coretotal,QIcon("Verilator_logo.png"),str(values['Name']))
        elif values['Type'] == "Chisel":
                self.comboBox.insertItem(self.coretotal,QIcon("icons8-nail-100.png"),str(values['Name']))
        
        self.comboBox.setCurrentIndex(self.coretotal)
 		
    def cores(self,option):
        if option == "Add Core":
            self.dg.exec_()
        elif option == "Remove Core":
            import subprocess
            from pathlib import Path
            path=Path().absolute() 
            use2=str(path)
        
            os.chdir(use2+"/newui")
            b=(["python3", "Remove.py"])
            process=subprocess.Popen(b)
            code=process.wait()
            core=open("Core Name.txt","rt")
            data=core.readlines()
            core.close()
            print(data[0])
            index = self.comboBox.findText(data[0])  # find the index of text
            self.comboBox.removeItem(index)


    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "BURQ-IDE"))
        MainWindow.setWindowIcon(QIcon("About_logo.png"))
        self.tabWidget_2.setTabText(self.tabWidget_2.indexOf(self.tab), _translate("MainWindow", "Untitled"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab1), _translate("MainWindow", "Terminal"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_3), _translate("MainWindow", "Output"))
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
        self.actionOpen.setShortcut(_translate("MainWindow","Ctrl+O"))
        
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
       
        self.actionRun.setText(_translate("MainWindow", "Run"))
        self.About.setText(_translate("MainWindow","About IDE"))
        
        self.actionSave_As.setText(_translate("MainWindow", "Save As"))
        self.actionSave_As.setShortcut(_translate("MainWindow","Ctrl+Shift+S"))
        self.actionHigh_Contrast.setText(_translate("MainWindow", "High Contrast"))
        self.actionChisel_Core.setText(_translate("MainWindow", "Chisel"))
        self.actionVerilog.setText(_translate("MainWindow", "Verilog"))
        self.actionDebug.setText(_translate("MainWindow", "Get Code Output"))
        
        self.actionCompile.setText(_translate("MainWindow", "Compile"))
        self.actionB_I.setText(_translate("MainWindow", "I-Extension"))
        self.actionB_I_C.setText(_translate("MainWindow", "IC-Extension"))
        self.actionB_I_M.setText(_translate("MainWindow", "IM-Extension"))
        self.actionB_I_M_C.setText(_translate("MainWindow", "IMC-Extension"))
        self.uit.setText(_translate("MainWindow", "UIT Website"))
        self.merl.setText(_translate("MainWindow", "MERL Website"))
        self.chisel.setText(_translate("MainWindow", "Add Chisel-Core"))
        self.verilog.setText(_translate("MainWindow", "Add Verilog-Core"))

    def lightTheme(self):
        toggle_stylesheet(":/Icons/light.qss")
        self.tab1.setColorScheme("BlackOnWhite")

    def darkTheme(self):
        toggle_stylesheet(":/Icons/dark.qss")
        self.tab1.setColorScheme("WhiteOnBlack")

    def chisel(self):
        self.actionVerilog.setChecked(False)
        self.core=1
        
    
    def verilog(self):
        self.actionChisel_Core.setChecked(False)
        self.core=2

    def addchisel(self):
        import re
        filter1 = ("vcd(*.vcd)")
        filter2 = ("scala(*.scala)")
        filename = QFileDialog.getOpenFileName(None,"Choose Chisel Core .Vcd file","~",filter1)
        
        path = filename[0]
        #self.filename=path
        print(path)
        filename2 = QFileDialog.getOpenFileName(None,"Choose .scala file for the selected core InstructionMemory","~",filter2)
        path2 = filename2[0]
        #self.filename2=path2
        print(path2)

        print(sys.path[0])
        username=sys.path[0]

        #input instruction_memory.scala
        username_temp=username.replace("newui","")
        username_temp1=('"' + username_temp)
        script1=open(path2,"rt")
        data1=script1.read()
        data1=re.sub('".*"', username_temp1+'machinecode.txt"',data1)
        script1.close()
        print(data1)
        script_1=open(path2,"wt")
        script_1.write(data1)
        script_1.close()

        

        #temp_script1=open(username_temp+'temp_scrip1.sh',"rt")
        #data2=temp_script1.read()
        #data2=re.sub('".*"', path
        #temp_script1.close()
        #print(data5)
        #temp_script_1=open(username_temp+'temp_scrip1.sh',"wt")
        #temp_script_1.write(data2)
        #temp_script_1.close()
        
        

    def addverilog(self):
        filter1 = ("vcd(*.vcd)")
        filter2= ("c(*.c)")
        filename = QFileDialog.getOpenFileName(None,"Open Verilog Core .Vcd file","~",filter1)
        path = filename[0]
        #self.filename=path
        print(path)
        filename2 = QFileDialog.getOpenFileName(None,"CHOOSE INSTRUCTION MEMMORY FILE .scala FILE","~",filter2)
        path2 = filename2[0]
        #self.filename2=path2
        print(path2)
        

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

        self.plainTextEdit.setObjectName("plainTextEdit")
        self.plainTextEdit.textChanged.connect(self.changed)
        self.verticalLayout_7.addWidget(self.plainTextEdit)
        self.tabWidget_2.addTab(a, path)
        self.plainTextEdit.setPlainText(c_read)
        self.actionFind.triggered.connect(find.Find(self.plainTextEdit).show)


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

        self.plainTextEdit.setObjectName("plainTextEdit")
        self.plainTextEdit.textChanged.connect(self.changed)
        self.verticalLayout_7.addWidget(self.plainTextEdit)
        
        self.tabWidget_2.addTab(a,self.temptab)
        self.filename=self.temptab
        self.plainTextEdit.setPlainText("")
        self.actionFind.triggered.connect(find.Find(self.plainTextEdit).show)

    def open_dialog_box(self):
        filename = QFileDialog.getOpenFileName()
        path = filename[0]
        self.filename=path
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

        self.plainTextEdit.setObjectName("plainTextEdit")
        self.plainTextEdit.textChanged.connect(self.changed)
        self.verticalLayout_7.addWidget(self.plainTextEdit)
        self.tabWidget_2.addTab(a, path)
        self.plainTextEdit.setPlainText(c_read)
        self.actionFind.triggered.connect(find.Find(self.plainTextEdit).show)


    

    def run_Command(self, command = "ls"):
        options = []
        options.extend([command])
        options.extend(["\n"])
        print(options)
        for data in range(len(options)):
            self.tab1.sendText(options[data])
        
        
        

    def read_MachineCode(self):
        file = open("/home/monis/Desktop/BURQ-IDE/machinecode.txt", "r")
        machineCode = file.read()
        file.close()
        self.plainTextEdit_3.setPlainText(machineCode)
        

    def read_AssemblyCode(self):
        file = open("/home/monis/Desktop/BURQ-IDE/machine.txt", "r")
        assembly = file.read()
        file.close()
        self.plainTextEdit_2.setPlainText(assembly)
        

    def save_Code(self):
        if self.comboBox.currentText()!="Chisel" and self.comboBox.currentText()!="BuraqSV32i":
        	p=self.comboBox.currentText()
        	core=open("/home/monis/Desktop/BURQ-IDE/newui/Core.txt","rt")
        	coreread=core.readlines()
        	for i in coreread:
        		s=i.split(',')
        		if p==s[0] and s[1]=="Verilog":
        			file1=open(s[4],"w")
        			code1=self.plainTextEdit.toPlainText()
        			file1.write(code1)
        			file1.close()
        	 
        else:
        	file = open("/home/monis/Desktop/BURQ-IDE/test.c", "w")
        	code = self.plainTextEdit.toPlainText()
        	file.write(code)
        	file.close()
        	file1 = open("/home/monis/Desktop/BURQ-IDE/Buraq_Core_SV32I_5SP/test.c", "w")
        	code1 = self.plainTextEdit.toPlainText()
        	file1.write(code1)
        	file1.close()


    def compile_Code(self):
        self.actionRun.setEnabled(False)
        self.save_Code()
        self.plainTextEdit_2.setPlainText("")
        self.plainTextEdit_3.setPlainText("")
        
        
        self.run_Command("cd /home/monis/Desktop//")
        self.run_Command("bash script5.sh")
        self.run_Command("bash script2.sh")
        if self.comboBox.currentText()=="Chisel":
            T=Add_core.default_core(self.comboBox.currentText())
            self.core=1
            print("hello",1)
            self.actionRun.setEnabled(True)
        elif self.comboBox.currentText()=="BuraqSV32i":
            T=Add_core.default_core(self.comboBox.currentText())
            self.core=2
            print("hello",2)
            self.actionRun.setEnabled(True)
            
        elif self.comboBox.currentText()=="Select Core":
            from pathlib import Path
            path=Path().absolute() 
            use2=str(path)
            os.chdir(use2)
            self.run_Command("echo Error! Core is not selected")
            self.actionRun.setEnabled(False)
        else:
            T=Add_core.set_core(self.comboBox.currentText())
            file = open("Core.txt", "r")
            data = file.read().splitlines()
            for i in data:
                s=i.split(',')
                if i == "":
                    pass
                elif s[0] == self.comboBox.currentText():
                    if s[1] == "Verilog":
                        self.core=2
                        self.actionRun.setEnabled(True)
                    elif s[1] == "Chisel":
                        self.core=1
                        self.actionRun.setEnabled(True)
            file.close()
        
            
        thread=threading.Thread(target=self.error_check)
        thread.start()

    def termclose(self):
        self.getcode()
        
        
    def output(self):
        import re
        time.sleep(0.5)
        file=open("/home/monis/Desktop/BURQ-IDE/output.txt", "r")
        self.out12=file.read()
        file.close()
        self.plainTextEdit23.setPlainText(self.out12)
        
        
    def error_check(self):   ##Error Check by GCC Line Number
        import re
        time.sleep(0.5)
        file = open("/home/monis/Desktop/BURQ-IDE/meralog.txt", "r")
        assembly = file.read()
        x = re.findall("    [0-9] |   [1-9999][0-9999] ",assembly)
        
        if x==[]:
            print("No errors")
            file.close()
            
            
        
        else:
            error_line=int(x[-1])
            self.plainTextEdit.highlightErrorLine(error_line-1)
            self.actionRun.setEnabled(False)
            print(error_line)
            file.close()

    def run_Burq(self):
        print(self.core)
        if self.core==1:
            self.read_AssemblyCode()
            self.read_MachineCode()
            self.run_Command("cd /home/monis/Desktop/BURQ-IDE/")
            self.run_Command("bash script3.sh")
            self.run_Command("bash script8.sh")
            self.run_Command("bash script6.sh")
            self.output()
        elif self.core==2:
            self.read_AssemblyCode()
            self.read_MachineCode()
            self.getcode()
            self.run_Command("cd /home/monis/Desktop/BURQ-IDE/")
            self.run_Command("bash Verilog-run.sh")
            self.run_Command("bash script9.sh")
            self.run_Command("bash script7.sh")
            print("output")
            self.output()
            

    def getcode(self):
        self.run_Command("cd /home/monis/Desktop/BURQ-IDE/")
        self.run_Command("bash script4.sh")
        self.output()
        
    def open_site(self):
        webbrowser.open('https:/www.merledupk.org/')

    def open_uit(self):
        webbrowser.open('https://www.uit.edu')
        
    def about(self):
        from subprocess import call
        call(["python3", "about_screen.py"])

    def changed(self):
        self.changesSaved = False
        

    
    def save_temp(self):
        print(self.changesSaved)
        print(self.filename)
        if self.changesSaved ==True:
            pass
        elif self.changesSaved ==False:
            self.saveAs()
        
            
            
    def saveAs(self):  
        if self.filename =="untitled" or self.filename =="NewTest.C":
            self.filename = QtWidgets.QFileDialog.getSaveFileName()[0]
            self.changesSaved = True
            f=open(self.filename,'w')
            f.write(self.plainTextEdit.toPlainText())
            
            
             
        elif self.filename =="":
            self.filename = QtWidgets.QFileDialog.getSaveFileName()[0]
            self.changesSaved = True
            f=open(self.filename,'w')
            f.write(self.plainTextEdit.toPlainText())
            
            
        elif self.filename !="" and self.filename !="untitled" and self.filename !="NewTest.C":
            f=open(self.filename,'w')
            f.write(self.plainTextEdit.toPlainText())

    def closeEvent(self, event):

        if self.changesSaved:

            event.accept()

        else:
        
            popup = QtWidgets.QMessageBox(MainWindow)

            popup.setIcon(QtWidgets.QMessageBox.Warning)
            
            popup.setText("The document has been modified")
            
            popup.setInformativeText("Do you want to save your changes?")
            
            popup.setStandardButtons(QtWidgets.QMessageBox.Save   |
                                      QtWidgets.QMessageBox.Cancel |
                                      QtWidgets.QMessageBox.Discard)
            
            popup.setDefaultButton(QtWidgets.QMessageBox.Save)

            answer = popup.exec_()

            if answer == QtWidgets.QMessageBox.Save:
                self.save_temp()

            elif answer == QtWidgets.QMessageBox.Discard:
                event.accept()

            else:
                event.ignore()
    
    
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
            filename = QFileDialog.getOpenFileName(None,"Select Core Instruction Input file","~",("scala(*.scala)"))
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
    
    def clr(self):
        self.lineEdit.clear()
        self.lineEdit_2.clear()
        self.lineEdit_3.clear()
        self.lineEdit_4.clear()

import resource_rc
import Linus

if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    def toggle_stylesheet(path):
        # get the QApplication instance,  or crash if not set
        file = QFile(path)
        file.open(QFile.ReadOnly | QFile.Text)
        stream = QTextStream(file)
        app.setStyleSheet(stream.readAll())
    file = QFile(":/Icons/light.qss")
    file.open(QFile.ReadOnly | QFile.Text)
    stream = QTextStream(file)
    app.setStyleSheet(stream.readAll())
    
    MainWindow = QtWidgets.QMainWindow()
    
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())
    
    
