#ifndef SPREADSHEETMODEL_H
#define SPREADSHEETMODEL_H

#include <QObject>
#include "spreadsheet/spreadsheet.h"

class SpreadSheetModel : public SpreadSheet
{
public:
    SpreadSheetModel();

    // SpreadSheet interface
protected:
    QString text(int rowIndex, int columnIndex) const;
    int comboIndex(int rowIndex, int columnIndex) const;
    QStringList comboModel(int rowIndex, int columnIndex) const;
    bool checkable(int rowIndex, int columnIndex) const;
    bool checked(int rowIndex, int columnIndex) const;
    int rowCount() const;
};

#endif // SPREADSHEETMODEL_H
