# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'mama_bolumu.ui'
#
# Created by: PyQt5 UI code generator 5.7
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(824, 477)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.Mama_Sekmesi = QtWidgets.QTabWidget(self.centralwidget)
        self.Mama_Sekmesi.setGeometry(QtCore.QRect(560, 30, 251, 121))
        self.Mama_Sekmesi.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.Mama_Sekmesi.setIconSize(QtCore.QSize(16, 16))
        self.Mama_Sekmesi.setObjectName("Mama_Sekmesi")
        self.Mama_Kabi_Sekme = QtWidgets.QWidget()
        self.Mama_Kabi_Sekme.setObjectName("Mama_Kabi_Sekme")
        self.verticalLayoutWidget = QtWidgets.QWidget(self.Mama_Kabi_Sekme)
        self.verticalLayoutWidget.setGeometry(QtCore.QRect(0, 0, 251, 81))
        self.verticalLayoutWidget.setObjectName("verticalLayoutWidget")
        self.verticalLayout = QtWidgets.QVBoxLayout(self.verticalLayoutWidget)
        self.verticalLayout.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout.setObjectName("verticalLayout")
        self.label = QtWidgets.QLabel(self.verticalLayoutWidget)
        font = QtGui.QFont()
        font.setFamily("Lato Heavy")
        font.setBold(True)
        font.setWeight(75)
        self.label.setFont(font)
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")
        self.verticalLayout.addWidget(self.label)
        self.label_2 = QtWidgets.QLabel(self.verticalLayoutWidget)
        font = QtGui.QFont()
        font.setFamily("Lato")
        font.setBold(False)
        font.setItalic(False)
        font.setWeight(50)
        self.label_2.setFont(font)
        self.label_2.setAlignment(QtCore.Qt.AlignCenter)
        self.label_2.setObjectName("label_2")
        self.verticalLayout.addWidget(self.label_2)
        self.Mama_Sekmesi.addTab(self.Mama_Kabi_Sekme, "")
        self.Mama_Depo_Sekme = QtWidgets.QWidget()
        self.Mama_Depo_Sekme.setObjectName("Mama_Depo_Sekme")
        self.verticalLayoutWidget_2 = QtWidgets.QWidget(self.Mama_Depo_Sekme)
        self.verticalLayoutWidget_2.setGeometry(QtCore.QRect(0, 0, 251, 81))
        self.verticalLayoutWidget_2.setObjectName("verticalLayoutWidget_2")
        self.verticalLayout_2 = QtWidgets.QVBoxLayout(self.verticalLayoutWidget_2)
        self.verticalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.label_3 = QtWidgets.QLabel(self.verticalLayoutWidget_2)
        font = QtGui.QFont()
        font.setFamily("Lato Heavy")
        font.setBold(True)
        font.setItalic(False)
        font.setWeight(75)
        font.setStrikeOut(False)
        self.label_3.setFont(font)
        self.label_3.setAlignment(QtCore.Qt.AlignCenter)
        self.label_3.setObjectName("label_3")
        self.verticalLayout_2.addWidget(self.label_3)
        self.label_4 = QtWidgets.QLabel(self.verticalLayoutWidget_2)
        font = QtGui.QFont()
        font.setFamily("Lato")
        self.label_4.setFont(font)
        self.label_4.setAlignment(QtCore.Qt.AlignCenter)
        self.label_4.setObjectName("label_4")
        self.verticalLayout_2.addWidget(self.label_4)
        self.Mama_Sekmesi.addTab(self.Mama_Depo_Sekme, "")
        MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(MainWindow)
        self.Mama_Sekmesi.setCurrentIndex(1)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.label.setText(_translate("MainWindow", "Mama Kabının Durumu:"))
        self.label_2.setText(_translate("MainWindow", "Veri Bulunamadı"))
        self.Mama_Sekmesi.setTabText(self.Mama_Sekmesi.indexOf(self.Mama_Kabi_Sekme), _translate("MainWindow", "Mama Kabı"))
        self.label_3.setText(_translate("MainWindow", "Mama Deposunun Durumu:"))
        self.label_4.setText(_translate("MainWindow", "Veri Bulunamadı"))
        self.Mama_Sekmesi.setTabText(self.Mama_Sekmesi.indexOf(self.Mama_Depo_Sekme), _translate("MainWindow", "Mama Deposu"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())

