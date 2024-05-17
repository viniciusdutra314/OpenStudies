import sys
from PyQt6.QtWidgets import (QApplication,
QMainWindow,QPushButton,QHBoxLayout,QWidget,QVBoxLayout)


class ButtonHolder(QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Buttom holder app")
        button1=QPushButton('Buttom 1')
        button2=QPushButton('Buttom 2')
        layout=QVBoxLayout()
        layout=QVBoxLayout()
        layout=QVBoxLayout()
        layout.addWidget(button1)
        layout.addWidget(button2)
        self.setLayout(layout)

app=QApplication(sys.argv)
window=ButtonHolder()
window.show()
app.exec()