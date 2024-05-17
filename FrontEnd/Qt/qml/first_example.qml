import QtQuick
import QtQuick.Controls.Material
import QtQuick.Controls

ApplicationWindow{
    visible: true
    width: screenWidth
    height: screenHeight
    font.pixelSize: 30
    Rectangle {
        anchors.fill: parent
        TextField {
            id : 'text_lang'
            anchors {
                top: parent.top
                bottomMargin: 80
                horizontalCenter: parent.horizontalCenter
            }
            placeholderText: 'Idioma'
            placeholderTextColor: 'blue'
            width: 300
        }


        TextArea {
            id: 'text_phrase'
            anchors {
                top: parent.top
                topMargin: 100
                horizontalCenter: parent.horizontalCenter
            }
            wrapMode: Text.WordWrap 
            placeholderText: 'Frase'
            placeholderTextColor: 'blue'
            width: 300
            Keys.onTabPressed: {
                text_word.forceActiveFocus()
            }
        }

        TextField {
            id : 'text_word'
            anchors {
                top: text_phrase.bottom
                topMargin: 30
                horizontalCenter: parent.horizontalCenter
            }
            placeholderText: 'Palavra desconhecida'
            placeholderTextColor: 'blue'
            width: 300
            font {
                pixelSize: 20
            }
        }
        Button {
            id: 'button_next'
            text: 'Done'
            anchors {
                top: text_word.bottom
                topMargin: 30
                horizontalCenter: parent.horizontalCenter*(1.1)
            }
            font.color: 'green'
        }
        
        
        }

}