import sys
from PyQt6.QtWidgets import (QApplication,
QMainWindow,QPushButton)


class ButtonHolder(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Buttom holder app")
        button=QPushButton('Buttom example')
        self.setCentralWidget(button)

app=QApplication(sys.argv)
window=ButtonHolder()
window.show()
app.exec()