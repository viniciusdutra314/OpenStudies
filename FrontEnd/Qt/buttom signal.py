import sys
from PyQt6.QtWidgets import (QApplication,
QMainWindow,QPushButton)
from PyQt6.QtGui import QIcon

num_clicks=0
class ButtonHolder(QMainWindow):
    def __init__(self):
        super().__init__()
        anki_icon=QIcon('anki_logo.png')
        self.setWindowTitle("Buttom holder app")
        button=QPushButton(text='Buttom example',
                           icon=anki_icon)
        def update_clicks():
            global num_clicks
            num_clicks+=1
            print(num_clicks,'tocado')
        button.clicked.connect(update_clicks)
        self.setCentralWidget(button)

app=QApplication(sys.argv)
window=ButtonHolder()
window.show()
app.exec()