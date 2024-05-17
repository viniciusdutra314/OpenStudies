from PyQt6.QtWidgets import QApplication, QWidget, QSlider
from PyQt6.QtCore import Qt
import sys
 
class Window(QWidget):
    def __init__(self):
        super().__init__()
        self.resize(300, 250)
        self.setWindowTitle("CodersLegacy")
 
        slider = QSlider(Qt.Orientation.Horizontal, self)
        slider.setGeometry(50,50, 200, 50)
        slider.setMinimum(0)
        slider.setMaximum(20)
        slider.setTickPosition(QSlider.TickPosition.TicksBelow)
        slider.setTickInterval(2)
        slider.valueChanged.connect(lambda x: print(x))
 
app = QApplication(sys.argv)
window = Window()
window.show()
sys.exit(app.exec())