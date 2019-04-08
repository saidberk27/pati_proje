# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'kum.ui'
#
# Created by: PyQt5 UI code generator 5.7
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_kum_kismi(object):
    def setupUi(self, kum_kismi):
        kum_kismi.setObjectName("kum_kismi")
        kum_kismi.resize(460, 213)
        self.verticalLayoutWidget = QtWidgets.QWidget(kum_kismi)
        self.verticalLayoutWidget.setGeometry(QtCore.QRect(0, 0, 461, 211))
        self.verticalLayoutWidget.setObjectName("verticalLayoutWidget")
        self.mainLayout = QtWidgets.QVBoxLayout(self.verticalLayoutWidget)
        self.mainLayout.setContentsMargins(0, 0, 0, 0)
        self.mainLayout.setObjectName("mainLayout")
        self.toolBox = QtWidgets.QToolBox(self.verticalLayoutWidget)
        self.toolBox.setObjectName("toolBox")
        self.kumdepopage = QtWidgets.QWidget()
        self.kumdepopage.setGeometry(QtCore.QRect(0, 0, 459, 139))
        self.kumdepopage.setObjectName("kumdepopage")
        self.verticalLayoutWidget_2 = QtWidgets.QWidget(self.kumdepopage)
        self.verticalLayoutWidget_2.setGeometry(QtCore.QRect(0, 0, 461, 152))
        self.verticalLayoutWidget_2.setObjectName("verticalLayoutWidget_2")
        self.depolayout = QtWidgets.QVBoxLayout(self.verticalLayoutWidget_2)
        self.depolayout.setContentsMargins(0, 0, 0, 0)
        self.depolayout.setObjectName("depolayout")
        self.kumdepobuton = QtWidgets.QPushButton(self.verticalLayoutWidget_2)
        self.kumdepobuton.setMinimumSize(QtCore.QSize(0, 120))
        self.kumdepobuton.setMaximumSize(QtCore.QSize(16777215, 120))
        self.kumdepobuton.setObjectName("kumdepobuton")
        self.depolayout.addWidget(self.kumdepobuton)
        self.toolBox.addItem(self.kumdepopage, "")
        self.kumkappage = QtWidgets.QWidget()
        self.kumkappage.setGeometry(QtCore.QRect(0, 0, 459, 139))
        self.kumkappage.setObjectName("kumkappage")
        self.verticalLayoutWidget_3 = QtWidgets.QWidget(self.kumkappage)
        self.verticalLayoutWidget_3.setGeometry(QtCore.QRect(0, 0, 451, 131))
        self.verticalLayoutWidget_3.setObjectName("verticalLayoutWidget_3")
        self.kaplayout = QtWidgets.QVBoxLayout(self.verticalLayoutWidget_3)
        self.kaplayout.setContentsMargins(0, 0, 0, 0)
        self.kaplayout.setObjectName("kaplayout")
        self.kapbuton = QtWidgets.QPushButton(self.verticalLayoutWidget_3)
        self.kapbuton.setMinimumSize(QtCore.QSize(0, 120))
        self.kapbuton.setObjectName("kapbuton")
        self.kaplayout.addWidget(self.kapbuton)
        self.toolBox.addItem(self.kumkappage, "")
        self.mainLayout.addWidget(self.toolBox)

        self.retranslateUi(kum_kismi)
        self.toolBox.setCurrentIndex(1)
        QtCore.QMetaObject.connectSlotsByName(kum_kismi)

    def retranslateUi(self, kum_kismi):
        _translate = QtCore.QCoreApplication.translate
        kum_kismi.setWindowTitle(_translate("kum_kismi", "Kum Kısmı"))
        self.kumdepobuton.setText(_translate("kum_kismi", "Kum Deposunu Tetikle"))
        self.toolBox.setItemText(self.toolBox.indexOf(self.kumdepopage), _translate("kum_kismi", "Kum Deposu"))
        self.kapbuton.setText(_translate("kum_kismi", "Kum Kabını Tetikle"))
        self.toolBox.setItemText(self.toolBox.indexOf(self.kumkappage), _translate("kum_kismi", "Kum Kabı"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    kum_kismi = QtWidgets.QWidget()
    ui = Ui_kum_kismi()
    ui.setupUi(kum_kismi)
    kum_kismi.show()
    sys.exit(app.exec_())

