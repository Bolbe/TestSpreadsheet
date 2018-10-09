#include "spreadsheetmodel.h"

SpreadSheetModel::SpreadSheetModel()
{
    setColumnList(4, QStringList() << "Column A" << "Column B" << "Column C" << "Column D", QList<double>() << 8 << 8 << 8 << 8, 0);

}

QString SpreadSheetModel::text(int rowIndex, int columnIndex) const {
    return QString("Cell %0:%1").arg(rowIndex+1).arg(columnIndex+1);
}

int SpreadSheetModel::comboIndex(int rowIndex, int columnIndex) const {
    return 0;
}

QStringList SpreadSheetModel::comboModel(int rowIndex, int columnIndex) const {
    QStringList list;
    if (columnIndex==2) list << "Option A" << "Option B" << "Option C";
    return list;
}

bool SpreadSheetModel::checkable(int rowIndex, int columnIndex) const {
    if (columnIndex==3) return true;
    return false;
}

bool SpreadSheetModel::checked(int rowIndex, int columnIndex) const {
    return false;
}

int SpreadSheetModel::rowCount() const {
    return 20;
}
