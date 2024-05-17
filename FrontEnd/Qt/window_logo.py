from PyQt6.QtWidgets import (QApplication,
        QWidget,QMainWindow)
from PyQt6.QtGui import QIcon


import sys

app=QApplication(sys.argv)
window=QMainWindow()
window.setWindowTitle('Teste')
anki_icon=QIcon('anki_logo.png')
window.setWindowIcon(anki_icon)
window.show()

app.exec()