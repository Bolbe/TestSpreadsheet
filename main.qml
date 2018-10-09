import QtQuick 2.10
import QtQuick.Controls 2.3
import QtQuick.Controls.Material 2.1

import "spreadsheet"

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "TestSpreadsheet"

    SpreadSheet {

        anchors.fill: parent
        spreadSheetModel: model

    }
}
