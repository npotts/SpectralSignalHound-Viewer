/*
 * Copyright (c) 2014, Nick Potts
 * All rights reserved.
 *
 *  This Source Code Form is subject to the terms of the 
 *  Mozilla Public License, v. 2.0. If a copy of the MPL 
 *  was not distributed with this file, You can obtain 
 *  one at http://mozilla.org/MPL/2.0/.
*/

#pragma once
#ifndef QT_STATIC_CONST
#define QT_STATIC_CONST static const
#endif
#include <QtCore>
#include <QtWidgets>
#include <QFileDialog>
#include <QTextStream>
#include <QDialog>
#include <QTextBrowser>

#include "ui_SweepMainWin.h"
#include "SweepInspector.h"

class SweepMainWin:public QMainWindow, public Ui::sweepmainwin {
Q_OBJECT
public:
  ~SweepMainWin();
  explicit SweepMainWin(QMainWindow *parent = 0);
public slots:
  void about(void);
  void applyZoomWindow();
  void nextSqlTable(QString);
  void openCSV(void);
  void openDB(void);
  void resetZoom();
  void saveCSV(void);
  void saveImg(void);
  void showManual(void);
  void zoominated(const QRectF &);
  
private:
  void muteSql(bool mute = true);
  void updateMetadata();


  QList<QLineEdit *> sqlfields;
  QList<QLabel *> sqlLabels;
  QLabel *openedFile;
  QHoundData *data;
  QTextBrowser *browser;
};
