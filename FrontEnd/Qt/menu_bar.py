from PyQt6.QtWidgets import (
    QApplication,QMainWindow)


class Window(QMainWindow):
    def __init__(self):
        super().__init__()
        self.app = app
        menu_bar=self.menuBar()
        file_menu=menu_bar.addMenu('File')
        config_menu=menu_bar.addMenu('Config')
        quit_option=menu_bar.addMenu('Quit')
        quit_option.triggered.connect(app.quit)
    def quit_app(self):
        print('hey')
app=QApplication([])
window=Window()
window.show()
app.exec()