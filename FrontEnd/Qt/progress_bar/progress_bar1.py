from PyQt6.QtWidgets import QApplication, QWidget, QProgressBar, QVBoxLayout,QMessageBox
from PyQt6.QtCore import QTimer
import sys

class Window(QWidget):
    def __init__(self):
        super().__init__()
        self.resize(320, 250)
        self.setWindowTitle("CodersLegacy")
        layout = QVBoxLayout()
        self.NUM_PHRASES = 14
        self.prog_bar = QProgressBar(self)
        self.prog_bar.setGeometry(50, 100, 250, 30)
        self.prog_bar.setRange(0, self.NUM_PHRASES)
        layout.addWidget(self.prog_bar)

        self.timer = QTimer(self)
        self.timer.timeout.connect(self.update_progress)
        self.timer.start(100)  # Trigger every second

        self.current_value = 0

    def update_progress(self):
        if self.current_value < self.NUM_PHRASES:
            self.prog_bar.setValue(self.current_value)
            self.current_value += 1
        else:
            self.timer.stop()
            self.messager=QMessageBox()
            self.messager.setText('Frases concluidas!')
            self.messager.exec()    
if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec())
