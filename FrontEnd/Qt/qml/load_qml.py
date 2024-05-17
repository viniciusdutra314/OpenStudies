from PyQt6.QtQml import QQmlApplicationEngine
from PyQt6.QtGui import QGuiApplication

app=QGuiApplication([])
engine=QQmlApplicationEngine()
screen_size=app.primaryScreen().availableGeometry().size()
engine.rootContext().setContextProperty(
    "screenWidth",screen_size.width()//2)
engine.rootContext().setContextProperty(
    "screenHeight",screen_size.height()//2)
engine.load("qml\\first_example.qml")
app.exec()