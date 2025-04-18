/********************************************************************************
** Form generated from reading UI file 'echequierwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECHEQUIERWINDOW_H
#define UI_ECHEQUIERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EchequierWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *squareD2;
    QLabel *rookWhite_12;
    QFrame *squareE5;
    QFrame *squareC2;
    QLabel *rookWhite_11;
    QFrame *squareE4;
    QFrame *squareE1;
    QLabel *rookWhite_5;
    QFrame *squareG2;
    QLabel *rookWhite_15;
    QFrame *squareA3;
    QFrame *squareA7;
    QLabel *rookWhite_31;
    QFrame *squareG8;
    QLabel *knightBlackG;
    QFrame *squareB5;
    QFrame *squareH8;
    QLabel *rookBlackH;
    QFrame *squareA5;
    QFrame *squareA4;
    QFrame *squareG1;
    QLabel *knightWhiteG;
    QFrame *squareG4;
    QFrame *squareF4;
    QFrame *squareG3;
    QFrame *squareH5;
    QFrame *squareF2;
    QLabel *rookWhite_14;
    QFrame *squareF8;
    QLabel *rookWhite_21;
    QFrame *squareH7;
    QLabel *rookWhite_24;
    QFrame *squareB1;
    QLabel *knightWhiteB;
    QFrame *squareH2;
    QLabel *rookWhite_16;
    QFrame *squareH3;
    QFrame *squareF7;
    QLabel *rookWhite_26;
    QFrame *squareC4;
    QFrame *squareB3;
    QFrame *squareC5;
    QFrame *squareH4;
    QFrame *squareE3;
    QFrame *squareF1;
    QLabel *rookWhite_6;
    QFrame *squareC6;
    QFrame *squareC8;
    QLabel *rookWhite_18;
    QFrame *squareD6;
    QFrame *squareB6;
    QFrame *squareG5;
    QFrame *squareD8;
    QLabel *rookWhite_19;
    QFrame *squareE2;
    QLabel *rookWhite_13;
    QFrame *squareG7;
    QLabel *rookWhite_25;
    QFrame *squareD5;
    QFrame *squareA1;
    QLabel *rookWhiteA;
    QFrame *squareF5;
    QFrame *squareC7;
    QLabel *rookWhite_29;
    QFrame *squareG6;
    QFrame *squareB7;
    QLabel *rookWhite_30;
    QFrame *squareE7;
    QLabel *rookWhite_27;
    QFrame *squareD3;
    QFrame *squareH1;
    QLabel *rookWhiteH;
    QFrame *squareA8;
    QLabel *rookBlackA;
    QFrame *squareD4;
    QFrame *squareE6;
    QFrame *squareC3;
    QFrame *squareA2;
    QLabel *pawnWhiteA;
    QFrame *squareF3;
    QFrame *squareA6;
    QFrame *squareF6;
    QFrame *squareB4;
    QFrame *squareC1;
    QLabel *rookWhite_3;
    QFrame *squareD7;
    QLabel *rookWhite_28;
    QFrame *squareH6;
    QFrame *squareE8;
    QLabel *rookWhite_20;
    QFrame *squareD1;
    QLabel *rookWhite_4;
    QFrame *squareB2;
    QLabel *rookWhite_10;
    QFrame *squareB8;
    QLabel *knightBlackB;

    void setupUi(QMainWindow *EchequierWindow)
    {
        if (EchequierWindow->objectName().isEmpty())
            EchequierWindow->setObjectName("EchequierWindow");
        EchequierWindow->resize(850, 850);
        EchequierWindow->setMinimumSize(QSize(800, 800));
        centralwidget = new QWidget(EchequierWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(25, 25, 25, 25);
        squareD2 = new QFrame(centralwidget);
        squareD2->setObjectName("squareD2");
        squareD2->setEnabled(true);
        squareD2->setMinimumSize(QSize(100, 100));
        squareD2->setSizeIncrement(QSize(1, 1));
        squareD2->setBaseSize(QSize(100, 100));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(188, 92, 56, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(255, 255, 216, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(127, 127, 89, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(170, 170, 119, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 127));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        QBrush brush8(QColor(255, 255, 178, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush9(QColor(127, 127, 89, 127));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        QBrush brush10(QColor(255, 255, 254, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareD2->setPalette(palette);
        squareD2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareD2->setMouseTracking(false);
        squareD2->setAcceptDrops(false);
        squareD2->setAutoFillBackground(false);
        squareD2->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareD2->setFrameShape(QFrame::Shape::StyledPanel);
        squareD2->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_12 = new QLabel(squareD2);
        rookWhite_12->setObjectName("rookWhite_12");
        rookWhite_12->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_12->setPixmap(QPixmap(QString::fromUtf8("images/Chess_plt60.png")));
        rookWhite_12->setScaledContents(true);

        gridLayout_2->addWidget(squareD2, 6, 5, 1, 1);

        squareE5 = new QFrame(centralwidget);
        squareE5->setObjectName("squareE5");
        squareE5->setEnabled(true);
        squareE5->setMinimumSize(QSize(100, 100));
        squareE5->setSizeIncrement(QSize(1, 1));
        squareE5->setBaseSize(QSize(100, 100));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareE5->setPalette(palette1);
        squareE5->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareE5->setMouseTracking(false);
        squareE5->setAcceptDrops(false);
        squareE5->setAutoFillBackground(false);
        squareE5->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareE5->setFrameShape(QFrame::Shape::StyledPanel);
        squareE5->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareE5, 3, 6, 1, 1);

        squareC2 = new QFrame(centralwidget);
        squareC2->setObjectName("squareC2");
        squareC2->setEnabled(true);
        squareC2->setMinimumSize(QSize(100, 100));
        squareC2->setSizeIncrement(QSize(1, 1));
        squareC2->setBaseSize(QSize(100, 100));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        QBrush brush11(QColor(226, 110, 67, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        QBrush brush12(QColor(116, 56, 35, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareC2->setPalette(palette2);
        squareC2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareC2->setMouseTracking(false);
        squareC2->setAutoFillBackground(false);
        squareC2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareC2->setFrameShape(QFrame::Shape::StyledPanel);
        squareC2->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_11 = new QLabel(squareC2);
        rookWhite_11->setObjectName("rookWhite_11");
        rookWhite_11->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_11->setPixmap(QPixmap(QString::fromUtf8("images/Chess_plt60.png")));
        rookWhite_11->setScaledContents(true);

        gridLayout_2->addWidget(squareC2, 6, 3, 1, 1);

        squareE4 = new QFrame(centralwidget);
        squareE4->setObjectName("squareE4");
        squareE4->setEnabled(true);
        squareE4->setMinimumSize(QSize(100, 100));
        squareE4->setSizeIncrement(QSize(1, 1));
        squareE4->setBaseSize(QSize(100, 100));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareE4->setPalette(palette3);
        squareE4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareE4->setMouseTracking(false);
        squareE4->setAutoFillBackground(false);
        squareE4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareE4->setFrameShape(QFrame::Shape::StyledPanel);
        squareE4->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareE4, 4, 6, 1, 1);

        squareE1 = new QFrame(centralwidget);
        squareE1->setObjectName("squareE1");
        squareE1->setEnabled(true);
        squareE1->setMinimumSize(QSize(100, 100));
        squareE1->setSizeIncrement(QSize(1, 1));
        squareE1->setBaseSize(QSize(100, 100));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareE1->setPalette(palette4);
        squareE1->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareE1->setMouseTracking(false);
        squareE1->setAcceptDrops(false);
        squareE1->setAutoFillBackground(false);
        squareE1->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareE1->setFrameShape(QFrame::Shape::StyledPanel);
        squareE1->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_5 = new QLabel(squareE1);
        rookWhite_5->setObjectName("rookWhite_5");
        rookWhite_5->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_5->setPixmap(QPixmap(QString::fromUtf8("images/Chess_klt60.png")));
        rookWhite_5->setScaledContents(true);

        gridLayout_2->addWidget(squareE1, 7, 6, 1, 1);

        squareG2 = new QFrame(centralwidget);
        squareG2->setObjectName("squareG2");
        squareG2->setEnabled(true);
        squareG2->setMinimumSize(QSize(100, 100));
        squareG2->setSizeIncrement(QSize(1, 1));
        squareG2->setBaseSize(QSize(100, 100));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareG2->setPalette(palette5);
        squareG2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareG2->setMouseTracking(false);
        squareG2->setAutoFillBackground(false);
        squareG2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareG2->setFrameShape(QFrame::Shape::StyledPanel);
        squareG2->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_15 = new QLabel(squareG2);
        rookWhite_15->setObjectName("rookWhite_15");
        rookWhite_15->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_15->setPixmap(QPixmap(QString::fromUtf8("images/Chess_plt60.png")));
        rookWhite_15->setScaledContents(true);

        gridLayout_2->addWidget(squareG2, 6, 8, 1, 1);

        squareA3 = new QFrame(centralwidget);
        squareA3->setObjectName("squareA3");
        squareA3->setEnabled(true);
        squareA3->setMinimumSize(QSize(100, 100));
        squareA3->setSizeIncrement(QSize(1, 1));
        squareA3->setBaseSize(QSize(100, 100));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareA3->setPalette(palette6);
        squareA3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareA3->setMouseTracking(false);
        squareA3->setAcceptDrops(false);
        squareA3->setAutoFillBackground(false);
        squareA3->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareA3->setFrameShape(QFrame::Shape::StyledPanel);
        squareA3->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareA3, 5, 0, 1, 1);

        squareA7 = new QFrame(centralwidget);
        squareA7->setObjectName("squareA7");
        squareA7->setEnabled(true);
        squareA7->setMinimumSize(QSize(100, 100));
        squareA7->setSizeIncrement(QSize(1, 1));
        squareA7->setBaseSize(QSize(100, 100));
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareA7->setPalette(palette7);
        squareA7->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareA7->setMouseTracking(false);
        squareA7->setAcceptDrops(false);
        squareA7->setAutoFillBackground(false);
        squareA7->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareA7->setFrameShape(QFrame::Shape::StyledPanel);
        squareA7->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_31 = new QLabel(squareA7);
        rookWhite_31->setObjectName("rookWhite_31");
        rookWhite_31->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_31->setPixmap(QPixmap(QString::fromUtf8("images/Chess_pdt60.png")));
        rookWhite_31->setScaledContents(true);

        gridLayout_2->addWidget(squareA7, 1, 0, 1, 1);

        squareG8 = new QFrame(centralwidget);
        squareG8->setObjectName("squareG8");
        squareG8->setEnabled(true);
        squareG8->setMinimumSize(QSize(100, 100));
        squareG8->setSizeIncrement(QSize(1, 1));
        squareG8->setBaseSize(QSize(100, 100));
        QPalette palette8;
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareG8->setPalette(palette8);
        squareG8->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareG8->setMouseTracking(false);
        squareG8->setAutoFillBackground(false);
        squareG8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareG8->setFrameShape(QFrame::Shape::StyledPanel);
        squareG8->setFrameShadow(QFrame::Shadow::Plain);
        knightBlackG = new QLabel(squareG8);
        knightBlackG->setObjectName("knightBlackG");
        knightBlackG->setGeometry(QRect(0, 0, 101, 101));
        knightBlackG->setPixmap(QPixmap(QString::fromUtf8("images/Chess_ndt60.png")));
        knightBlackG->setScaledContents(true);

        gridLayout_2->addWidget(squareG8, 0, 8, 1, 1);

        squareB5 = new QFrame(centralwidget);
        squareB5->setObjectName("squareB5");
        squareB5->setEnabled(true);
        squareB5->setMinimumSize(QSize(100, 100));
        squareB5->setSizeIncrement(QSize(1, 1));
        squareB5->setBaseSize(QSize(100, 100));
        QPalette palette9;
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareB5->setPalette(palette9);
        squareB5->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareB5->setMouseTracking(false);
        squareB5->setAutoFillBackground(false);
        squareB5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareB5->setFrameShape(QFrame::Shape::StyledPanel);
        squareB5->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareB5, 3, 1, 1, 2);

        squareH8 = new QFrame(centralwidget);
        squareH8->setObjectName("squareH8");
        squareH8->setEnabled(true);
        squareH8->setMinimumSize(QSize(100, 100));
        squareH8->setSizeIncrement(QSize(1, 1));
        squareH8->setBaseSize(QSize(100, 100));
        QPalette palette10;
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareH8->setPalette(palette10);
        squareH8->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareH8->setMouseTracking(false);
        squareH8->setAcceptDrops(false);
        squareH8->setAutoFillBackground(false);
        squareH8->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareH8->setFrameShape(QFrame::Shape::StyledPanel);
        squareH8->setFrameShadow(QFrame::Shadow::Plain);
        rookBlackH = new QLabel(squareH8);
        rookBlackH->setObjectName("rookBlackH");
        rookBlackH->setGeometry(QRect(0, 0, 101, 101));
        rookBlackH->setPixmap(QPixmap(QString::fromUtf8("images/Chess_rdt60.png")));
        rookBlackH->setScaledContents(true);

        gridLayout_2->addWidget(squareH8, 0, 9, 1, 1);

        squareA5 = new QFrame(centralwidget);
        squareA5->setObjectName("squareA5");
        squareA5->setEnabled(true);
        squareA5->setMinimumSize(QSize(100, 100));
        squareA5->setSizeIncrement(QSize(1, 1));
        squareA5->setBaseSize(QSize(100, 100));
        QPalette palette11;
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareA5->setPalette(palette11);
        squareA5->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareA5->setMouseTracking(false);
        squareA5->setAcceptDrops(false);
        squareA5->setAutoFillBackground(false);
        squareA5->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareA5->setFrameShape(QFrame::Shape::StyledPanel);
        squareA5->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareA5, 3, 0, 1, 1);

        squareA4 = new QFrame(centralwidget);
        squareA4->setObjectName("squareA4");
        squareA4->setEnabled(true);
        squareA4->setMinimumSize(QSize(100, 100));
        squareA4->setSizeIncrement(QSize(1, 1));
        squareA4->setBaseSize(QSize(100, 100));
        QPalette palette12;
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareA4->setPalette(palette12);
        squareA4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareA4->setMouseTracking(false);
        squareA4->setAutoFillBackground(false);
        squareA4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareA4->setFrameShape(QFrame::Shape::StyledPanel);
        squareA4->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareA4, 4, 0, 1, 1);

        squareG1 = new QFrame(centralwidget);
        squareG1->setObjectName("squareG1");
        squareG1->setEnabled(true);
        squareG1->setMinimumSize(QSize(100, 100));
        squareG1->setSizeIncrement(QSize(1, 1));
        squareG1->setBaseSize(QSize(100, 100));
        QPalette palette13;
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareG1->setPalette(palette13);
        squareG1->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareG1->setMouseTracking(false);
        squareG1->setAcceptDrops(false);
        squareG1->setAutoFillBackground(false);
        squareG1->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareG1->setFrameShape(QFrame::Shape::StyledPanel);
        squareG1->setFrameShadow(QFrame::Shadow::Plain);
        knightWhiteG = new QLabel(squareG1);
        knightWhiteG->setObjectName("knightWhiteG");
        knightWhiteG->setGeometry(QRect(0, 0, 101, 101));
        knightWhiteG->setPixmap(QPixmap(QString::fromUtf8("images/Chess_nlt60.png")));
        knightWhiteG->setScaledContents(true);

        gridLayout_2->addWidget(squareG1, 7, 8, 1, 1);

        squareG4 = new QFrame(centralwidget);
        squareG4->setObjectName("squareG4");
        squareG4->setEnabled(true);
        squareG4->setMinimumSize(QSize(100, 100));
        squareG4->setSizeIncrement(QSize(1, 1));
        squareG4->setBaseSize(QSize(100, 100));
        QPalette palette14;
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareG4->setPalette(palette14);
        squareG4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareG4->setMouseTracking(false);
        squareG4->setAutoFillBackground(false);
        squareG4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareG4->setFrameShape(QFrame::Shape::StyledPanel);
        squareG4->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareG4, 4, 8, 1, 1);

        squareF4 = new QFrame(centralwidget);
        squareF4->setObjectName("squareF4");
        squareF4->setEnabled(true);
        squareF4->setMinimumSize(QSize(100, 100));
        squareF4->setSizeIncrement(QSize(1, 1));
        squareF4->setBaseSize(QSize(100, 100));
        QPalette palette15;
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareF4->setPalette(palette15);
        squareF4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareF4->setMouseTracking(false);
        squareF4->setAcceptDrops(false);
        squareF4->setAutoFillBackground(false);
        squareF4->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareF4->setFrameShape(QFrame::Shape::StyledPanel);
        squareF4->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareF4, 4, 7, 1, 1);

        squareG3 = new QFrame(centralwidget);
        squareG3->setObjectName("squareG3");
        squareG3->setEnabled(true);
        squareG3->setMinimumSize(QSize(100, 100));
        squareG3->setSizeIncrement(QSize(1, 1));
        squareG3->setBaseSize(QSize(100, 100));
        QPalette palette16;
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareG3->setPalette(palette16);
        squareG3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareG3->setMouseTracking(false);
        squareG3->setAcceptDrops(false);
        squareG3->setAutoFillBackground(false);
        squareG3->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareG3->setFrameShape(QFrame::Shape::StyledPanel);
        squareG3->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareG3, 5, 8, 1, 1);

        squareH5 = new QFrame(centralwidget);
        squareH5->setObjectName("squareH5");
        squareH5->setEnabled(true);
        squareH5->setMinimumSize(QSize(100, 100));
        squareH5->setSizeIncrement(QSize(1, 1));
        squareH5->setBaseSize(QSize(100, 100));
        QPalette palette17;
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareH5->setPalette(palette17);
        squareH5->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareH5->setMouseTracking(false);
        squareH5->setAutoFillBackground(false);
        squareH5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareH5->setFrameShape(QFrame::Shape::StyledPanel);
        squareH5->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareH5, 3, 9, 1, 1);

        squareF2 = new QFrame(centralwidget);
        squareF2->setObjectName("squareF2");
        squareF2->setEnabled(true);
        squareF2->setMinimumSize(QSize(100, 100));
        squareF2->setSizeIncrement(QSize(1, 1));
        squareF2->setBaseSize(QSize(100, 100));
        QPalette palette18;
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareF2->setPalette(palette18);
        squareF2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareF2->setMouseTracking(false);
        squareF2->setAcceptDrops(false);
        squareF2->setAutoFillBackground(false);
        squareF2->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareF2->setFrameShape(QFrame::Shape::StyledPanel);
        squareF2->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_14 = new QLabel(squareF2);
        rookWhite_14->setObjectName("rookWhite_14");
        rookWhite_14->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_14->setPixmap(QPixmap(QString::fromUtf8("images/Chess_plt60.png")));
        rookWhite_14->setScaledContents(true);

        gridLayout_2->addWidget(squareF2, 6, 7, 1, 1);

        squareF8 = new QFrame(centralwidget);
        squareF8->setObjectName("squareF8");
        squareF8->setEnabled(true);
        squareF8->setMinimumSize(QSize(100, 100));
        squareF8->setSizeIncrement(QSize(1, 1));
        squareF8->setBaseSize(QSize(100, 100));
        QPalette palette19;
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareF8->setPalette(palette19);
        squareF8->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareF8->setMouseTracking(false);
        squareF8->setAcceptDrops(false);
        squareF8->setAutoFillBackground(false);
        squareF8->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareF8->setFrameShape(QFrame::Shape::StyledPanel);
        squareF8->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_21 = new QLabel(squareF8);
        rookWhite_21->setObjectName("rookWhite_21");
        rookWhite_21->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_21->setPixmap(QPixmap(QString::fromUtf8("images/Chess_bdt60.png")));
        rookWhite_21->setScaledContents(true);

        gridLayout_2->addWidget(squareF8, 0, 7, 1, 1);

        squareH7 = new QFrame(centralwidget);
        squareH7->setObjectName("squareH7");
        squareH7->setEnabled(true);
        squareH7->setMinimumSize(QSize(100, 100));
        squareH7->setSizeIncrement(QSize(1, 1));
        squareH7->setBaseSize(QSize(100, 100));
        QPalette palette20;
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareH7->setPalette(palette20);
        squareH7->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareH7->setMouseTracking(false);
        squareH7->setAutoFillBackground(false);
        squareH7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareH7->setFrameShape(QFrame::Shape::StyledPanel);
        squareH7->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_24 = new QLabel(squareH7);
        rookWhite_24->setObjectName("rookWhite_24");
        rookWhite_24->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_24->setPixmap(QPixmap(QString::fromUtf8("images/Chess_pdt60.png")));
        rookWhite_24->setScaledContents(true);

        gridLayout_2->addWidget(squareH7, 1, 9, 1, 1);

        squareB1 = new QFrame(centralwidget);
        squareB1->setObjectName("squareB1");
        squareB1->setEnabled(true);
        squareB1->setMinimumSize(QSize(100, 100));
        squareB1->setSizeIncrement(QSize(1, 1));
        squareB1->setBaseSize(QSize(100, 100));
        QPalette palette21;
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareB1->setPalette(palette21);
        squareB1->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareB1->setMouseTracking(false);
        squareB1->setAutoFillBackground(false);
        squareB1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareB1->setFrameShape(QFrame::Shape::StyledPanel);
        squareB1->setFrameShadow(QFrame::Shadow::Plain);
        knightWhiteB = new QLabel(squareB1);
        knightWhiteB->setObjectName("knightWhiteB");
        knightWhiteB->setGeometry(QRect(0, 0, 101, 101));
        knightWhiteB->setPixmap(QPixmap(QString::fromUtf8("images/Chess_nlt60.png")));
        knightWhiteB->setScaledContents(true);

        gridLayout_2->addWidget(squareB1, 7, 1, 1, 1);

        squareH2 = new QFrame(centralwidget);
        squareH2->setObjectName("squareH2");
        squareH2->setEnabled(true);
        squareH2->setMinimumSize(QSize(100, 100));
        squareH2->setSizeIncrement(QSize(1, 1));
        squareH2->setBaseSize(QSize(100, 100));
        QPalette palette22;
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareH2->setPalette(palette22);
        squareH2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareH2->setMouseTracking(false);
        squareH2->setAcceptDrops(false);
        squareH2->setAutoFillBackground(false);
        squareH2->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareH2->setFrameShape(QFrame::Shape::StyledPanel);
        squareH2->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_16 = new QLabel(squareH2);
        rookWhite_16->setObjectName("rookWhite_16");
        rookWhite_16->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_16->setPixmap(QPixmap(QString::fromUtf8("images/Chess_plt60.png")));
        rookWhite_16->setScaledContents(true);

        gridLayout_2->addWidget(squareH2, 6, 9, 1, 1);

        squareH3 = new QFrame(centralwidget);
        squareH3->setObjectName("squareH3");
        squareH3->setEnabled(true);
        squareH3->setMinimumSize(QSize(100, 100));
        squareH3->setSizeIncrement(QSize(1, 1));
        squareH3->setBaseSize(QSize(100, 100));
        QPalette palette23;
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareH3->setPalette(palette23);
        squareH3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareH3->setMouseTracking(false);
        squareH3->setAutoFillBackground(false);
        squareH3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareH3->setFrameShape(QFrame::Shape::StyledPanel);
        squareH3->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareH3, 5, 9, 1, 1);

        squareF7 = new QFrame(centralwidget);
        squareF7->setObjectName("squareF7");
        squareF7->setEnabled(true);
        squareF7->setMinimumSize(QSize(100, 100));
        squareF7->setSizeIncrement(QSize(1, 1));
        squareF7->setBaseSize(QSize(100, 100));
        QPalette palette24;
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareF7->setPalette(palette24);
        squareF7->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareF7->setMouseTracking(false);
        squareF7->setAutoFillBackground(false);
        squareF7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareF7->setFrameShape(QFrame::Shape::StyledPanel);
        squareF7->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_26 = new QLabel(squareF7);
        rookWhite_26->setObjectName("rookWhite_26");
        rookWhite_26->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_26->setPixmap(QPixmap(QString::fromUtf8("images/Chess_pdt60.png")));
        rookWhite_26->setScaledContents(true);

        gridLayout_2->addWidget(squareF7, 1, 7, 1, 1);

        squareC4 = new QFrame(centralwidget);
        squareC4->setObjectName("squareC4");
        squareC4->setEnabled(true);
        squareC4->setMinimumSize(QSize(100, 100));
        squareC4->setSizeIncrement(QSize(1, 1));
        squareC4->setBaseSize(QSize(100, 100));
        QPalette palette25;
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareC4->setPalette(palette25);
        squareC4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareC4->setMouseTracking(false);
        squareC4->setAutoFillBackground(false);
        squareC4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareC4->setFrameShape(QFrame::Shape::StyledPanel);
        squareC4->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareC4, 4, 3, 1, 1);

        squareB3 = new QFrame(centralwidget);
        squareB3->setObjectName("squareB3");
        squareB3->setEnabled(true);
        squareB3->setMinimumSize(QSize(100, 100));
        squareB3->setSizeIncrement(QSize(1, 1));
        squareB3->setBaseSize(QSize(100, 100));
        QPalette palette26;
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareB3->setPalette(palette26);
        squareB3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareB3->setMouseTracking(false);
        squareB3->setAutoFillBackground(false);
        squareB3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareB3->setFrameShape(QFrame::Shape::StyledPanel);
        squareB3->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareB3, 5, 1, 1, 2);

        squareC5 = new QFrame(centralwidget);
        squareC5->setObjectName("squareC5");
        squareC5->setEnabled(true);
        squareC5->setMinimumSize(QSize(100, 100));
        squareC5->setSizeIncrement(QSize(1, 1));
        squareC5->setBaseSize(QSize(100, 100));
        QPalette palette27;
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareC5->setPalette(palette27);
        squareC5->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareC5->setMouseTracking(false);
        squareC5->setAcceptDrops(false);
        squareC5->setAutoFillBackground(false);
        squareC5->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareC5->setFrameShape(QFrame::Shape::StyledPanel);
        squareC5->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareC5, 3, 3, 1, 2);

        squareH4 = new QFrame(centralwidget);
        squareH4->setObjectName("squareH4");
        squareH4->setEnabled(true);
        squareH4->setMinimumSize(QSize(100, 100));
        squareH4->setSizeIncrement(QSize(1, 1));
        squareH4->setBaseSize(QSize(100, 100));
        QPalette palette28;
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareH4->setPalette(palette28);
        squareH4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareH4->setMouseTracking(false);
        squareH4->setAcceptDrops(false);
        squareH4->setAutoFillBackground(false);
        squareH4->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareH4->setFrameShape(QFrame::Shape::StyledPanel);
        squareH4->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareH4, 4, 9, 1, 1);

        squareE3 = new QFrame(centralwidget);
        squareE3->setObjectName("squareE3");
        squareE3->setEnabled(true);
        squareE3->setMinimumSize(QSize(100, 100));
        squareE3->setSizeIncrement(QSize(1, 1));
        squareE3->setBaseSize(QSize(100, 100));
        QPalette palette29;
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareE3->setPalette(palette29);
        squareE3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareE3->setMouseTracking(false);
        squareE3->setAcceptDrops(false);
        squareE3->setAutoFillBackground(false);
        squareE3->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareE3->setFrameShape(QFrame::Shape::StyledPanel);
        squareE3->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareE3, 5, 6, 1, 1);

        squareF1 = new QFrame(centralwidget);
        squareF1->setObjectName("squareF1");
        squareF1->setEnabled(true);
        squareF1->setMinimumSize(QSize(100, 100));
        squareF1->setSizeIncrement(QSize(1, 1));
        squareF1->setBaseSize(QSize(100, 100));
        QPalette palette30;
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareF1->setPalette(palette30);
        squareF1->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareF1->setMouseTracking(false);
        squareF1->setAutoFillBackground(false);
        squareF1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareF1->setFrameShape(QFrame::Shape::StyledPanel);
        squareF1->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_6 = new QLabel(squareF1);
        rookWhite_6->setObjectName("rookWhite_6");
        rookWhite_6->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_6->setPixmap(QPixmap(QString::fromUtf8("images/Chess_blt60.png")));
        rookWhite_6->setScaledContents(true);

        gridLayout_2->addWidget(squareF1, 7, 7, 1, 1);

        squareC6 = new QFrame(centralwidget);
        squareC6->setObjectName("squareC6");
        squareC6->setEnabled(true);
        squareC6->setMinimumSize(QSize(100, 100));
        squareC6->setSizeIncrement(QSize(1, 1));
        squareC6->setBaseSize(QSize(100, 100));
        QPalette palette31;
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareC6->setPalette(palette31);
        squareC6->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareC6->setMouseTracking(false);
        squareC6->setAutoFillBackground(false);
        squareC6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareC6->setFrameShape(QFrame::Shape::StyledPanel);
        squareC6->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareC6, 2, 3, 1, 1);

        squareC8 = new QFrame(centralwidget);
        squareC8->setObjectName("squareC8");
        squareC8->setEnabled(true);
        squareC8->setMinimumSize(QSize(100, 100));
        squareC8->setSizeIncrement(QSize(1, 1));
        squareC8->setBaseSize(QSize(100, 100));
        QPalette palette32;
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareC8->setPalette(palette32);
        squareC8->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareC8->setMouseTracking(false);
        squareC8->setAutoFillBackground(false);
        squareC8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareC8->setFrameShape(QFrame::Shape::StyledPanel);
        squareC8->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_18 = new QLabel(squareC8);
        rookWhite_18->setObjectName("rookWhite_18");
        rookWhite_18->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_18->setPixmap(QPixmap(QString::fromUtf8("images/Chess_bdt60.png")));
        rookWhite_18->setScaledContents(true);

        gridLayout_2->addWidget(squareC8, 0, 3, 1, 2);

        squareD6 = new QFrame(centralwidget);
        squareD6->setObjectName("squareD6");
        squareD6->setEnabled(true);
        squareD6->setMinimumSize(QSize(100, 100));
        squareD6->setSizeIncrement(QSize(1, 1));
        squareD6->setBaseSize(QSize(100, 100));
        QPalette palette33;
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareD6->setPalette(palette33);
        squareD6->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareD6->setMouseTracking(false);
        squareD6->setAcceptDrops(false);
        squareD6->setAutoFillBackground(false);
        squareD6->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareD6->setFrameShape(QFrame::Shape::StyledPanel);
        squareD6->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareD6, 2, 5, 1, 1);

        squareB6 = new QFrame(centralwidget);
        squareB6->setObjectName("squareB6");
        squareB6->setEnabled(true);
        squareB6->setMinimumSize(QSize(100, 100));
        squareB6->setSizeIncrement(QSize(1, 1));
        squareB6->setBaseSize(QSize(100, 100));
        QPalette palette34;
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareB6->setPalette(palette34);
        squareB6->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareB6->setMouseTracking(false);
        squareB6->setAcceptDrops(false);
        squareB6->setAutoFillBackground(false);
        squareB6->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareB6->setFrameShape(QFrame::Shape::StyledPanel);
        squareB6->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareB6, 2, 1, 1, 2);

        squareG5 = new QFrame(centralwidget);
        squareG5->setObjectName("squareG5");
        squareG5->setEnabled(true);
        squareG5->setMinimumSize(QSize(100, 100));
        squareG5->setSizeIncrement(QSize(1, 1));
        squareG5->setBaseSize(QSize(100, 100));
        QPalette palette35;
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareG5->setPalette(palette35);
        squareG5->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareG5->setMouseTracking(false);
        squareG5->setAcceptDrops(false);
        squareG5->setAutoFillBackground(false);
        squareG5->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareG5->setFrameShape(QFrame::Shape::StyledPanel);
        squareG5->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareG5, 3, 8, 1, 1);

        squareD8 = new QFrame(centralwidget);
        squareD8->setObjectName("squareD8");
        squareD8->setEnabled(true);
        squareD8->setMinimumSize(QSize(100, 100));
        squareD8->setSizeIncrement(QSize(1, 1));
        squareD8->setBaseSize(QSize(100, 100));
        QPalette palette36;
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareD8->setPalette(palette36);
        squareD8->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareD8->setMouseTracking(false);
        squareD8->setAcceptDrops(false);
        squareD8->setAutoFillBackground(false);
        squareD8->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareD8->setFrameShape(QFrame::Shape::StyledPanel);
        squareD8->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_19 = new QLabel(squareD8);
        rookWhite_19->setObjectName("rookWhite_19");
        rookWhite_19->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_19->setPixmap(QPixmap(QString::fromUtf8("images/Chess_qdt60.png")));
        rookWhite_19->setScaledContents(true);

        gridLayout_2->addWidget(squareD8, 0, 5, 1, 1);

        squareE2 = new QFrame(centralwidget);
        squareE2->setObjectName("squareE2");
        squareE2->setEnabled(true);
        squareE2->setMinimumSize(QSize(100, 100));
        squareE2->setSizeIncrement(QSize(1, 1));
        squareE2->setBaseSize(QSize(100, 100));
        QPalette palette37;
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareE2->setPalette(palette37);
        squareE2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareE2->setMouseTracking(false);
        squareE2->setAutoFillBackground(false);
        squareE2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareE2->setFrameShape(QFrame::Shape::StyledPanel);
        squareE2->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_13 = new QLabel(squareE2);
        rookWhite_13->setObjectName("rookWhite_13");
        rookWhite_13->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_13->setPixmap(QPixmap(QString::fromUtf8("images/Chess_plt60.png")));
        rookWhite_13->setScaledContents(true);

        gridLayout_2->addWidget(squareE2, 6, 6, 1, 1);

        squareG7 = new QFrame(centralwidget);
        squareG7->setObjectName("squareG7");
        squareG7->setEnabled(true);
        squareG7->setMinimumSize(QSize(100, 100));
        squareG7->setSizeIncrement(QSize(1, 1));
        squareG7->setBaseSize(QSize(100, 100));
        QPalette palette38;
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareG7->setPalette(palette38);
        squareG7->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareG7->setMouseTracking(false);
        squareG7->setAcceptDrops(false);
        squareG7->setAutoFillBackground(false);
        squareG7->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareG7->setFrameShape(QFrame::Shape::StyledPanel);
        squareG7->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_25 = new QLabel(squareG7);
        rookWhite_25->setObjectName("rookWhite_25");
        rookWhite_25->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_25->setPixmap(QPixmap(QString::fromUtf8("images/Chess_pdt60.png")));
        rookWhite_25->setScaledContents(true);

        gridLayout_2->addWidget(squareG7, 1, 8, 1, 1);

        squareD5 = new QFrame(centralwidget);
        squareD5->setObjectName("squareD5");
        squareD5->setEnabled(true);
        squareD5->setMinimumSize(QSize(100, 100));
        squareD5->setSizeIncrement(QSize(1, 1));
        squareD5->setBaseSize(QSize(100, 100));
        QPalette palette39;
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareD5->setPalette(palette39);
        squareD5->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareD5->setMouseTracking(false);
        squareD5->setAutoFillBackground(false);
        squareD5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareD5->setFrameShape(QFrame::Shape::StyledPanel);
        squareD5->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareD5, 3, 5, 1, 1);

        squareA1 = new QFrame(centralwidget);
        squareA1->setObjectName("squareA1");
        squareA1->setEnabled(true);
        squareA1->setMinimumSize(QSize(100, 100));
        squareA1->setSizeIncrement(QSize(1, 1));
        squareA1->setBaseSize(QSize(100, 100));
        QPalette palette40;
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareA1->setPalette(palette40);
        squareA1->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareA1->setMouseTracking(false);
        squareA1->setAcceptDrops(false);
        squareA1->setAutoFillBackground(false);
        squareA1->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareA1->setFrameShape(QFrame::Shape::StyledPanel);
        squareA1->setFrameShadow(QFrame::Shadow::Plain);
        rookWhiteA = new QLabel(squareA1);
        rookWhiteA->setObjectName("rookWhiteA");
        rookWhiteA->setGeometry(QRect(0, 0, 101, 101));
        rookWhiteA->setPixmap(QPixmap(QString::fromUtf8("images/Chess_rlt60.png")));
        rookWhiteA->setScaledContents(true);

        gridLayout_2->addWidget(squareA1, 7, 0, 1, 1);

        squareF5 = new QFrame(centralwidget);
        squareF5->setObjectName("squareF5");
        squareF5->setEnabled(true);
        squareF5->setMinimumSize(QSize(100, 100));
        squareF5->setSizeIncrement(QSize(1, 1));
        squareF5->setBaseSize(QSize(100, 100));
        QPalette palette41;
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareF5->setPalette(palette41);
        squareF5->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareF5->setMouseTracking(false);
        squareF5->setAutoFillBackground(false);
        squareF5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareF5->setFrameShape(QFrame::Shape::StyledPanel);
        squareF5->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareF5, 3, 7, 1, 1);

        squareC7 = new QFrame(centralwidget);
        squareC7->setObjectName("squareC7");
        squareC7->setEnabled(true);
        squareC7->setMinimumSize(QSize(100, 100));
        squareC7->setSizeIncrement(QSize(1, 1));
        squareC7->setBaseSize(QSize(100, 100));
        QPalette palette42;
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareC7->setPalette(palette42);
        squareC7->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareC7->setMouseTracking(false);
        squareC7->setAcceptDrops(false);
        squareC7->setAutoFillBackground(false);
        squareC7->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareC7->setFrameShape(QFrame::Shape::StyledPanel);
        squareC7->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_29 = new QLabel(squareC7);
        rookWhite_29->setObjectName("rookWhite_29");
        rookWhite_29->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_29->setPixmap(QPixmap(QString::fromUtf8("images/Chess_pdt60.png")));
        rookWhite_29->setScaledContents(true);

        gridLayout_2->addWidget(squareC7, 1, 3, 1, 2);

        squareG6 = new QFrame(centralwidget);
        squareG6->setObjectName("squareG6");
        squareG6->setEnabled(true);
        squareG6->setMinimumSize(QSize(100, 100));
        squareG6->setSizeIncrement(QSize(1, 1));
        squareG6->setBaseSize(QSize(100, 100));
        QPalette palette43;
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette43.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette43.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette43.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareG6->setPalette(palette43);
        squareG6->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareG6->setMouseTracking(false);
        squareG6->setAutoFillBackground(false);
        squareG6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareG6->setFrameShape(QFrame::Shape::StyledPanel);
        squareG6->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareG6, 2, 8, 1, 1);

        squareB7 = new QFrame(centralwidget);
        squareB7->setObjectName("squareB7");
        squareB7->setEnabled(true);
        squareB7->setMinimumSize(QSize(100, 100));
        squareB7->setSizeIncrement(QSize(1, 1));
        squareB7->setBaseSize(QSize(100, 100));
        QPalette palette44;
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette44.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette44.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette44.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareB7->setPalette(palette44);
        squareB7->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareB7->setMouseTracking(false);
        squareB7->setAutoFillBackground(false);
        squareB7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareB7->setFrameShape(QFrame::Shape::StyledPanel);
        squareB7->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_30 = new QLabel(squareB7);
        rookWhite_30->setObjectName("rookWhite_30");
        rookWhite_30->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_30->setPixmap(QPixmap(QString::fromUtf8("images/Chess_pdt60.png")));
        rookWhite_30->setScaledContents(true);

        gridLayout_2->addWidget(squareB7, 1, 1, 1, 2);

        squareE7 = new QFrame(centralwidget);
        squareE7->setObjectName("squareE7");
        squareE7->setEnabled(true);
        squareE7->setMinimumSize(QSize(100, 100));
        squareE7->setSizeIncrement(QSize(1, 1));
        squareE7->setBaseSize(QSize(100, 100));
        QPalette palette45;
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette45.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette45.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette45.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareE7->setPalette(palette45);
        squareE7->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareE7->setMouseTracking(false);
        squareE7->setAcceptDrops(false);
        squareE7->setAutoFillBackground(false);
        squareE7->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareE7->setFrameShape(QFrame::Shape::StyledPanel);
        squareE7->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_27 = new QLabel(squareE7);
        rookWhite_27->setObjectName("rookWhite_27");
        rookWhite_27->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_27->setPixmap(QPixmap(QString::fromUtf8("images/Chess_pdt60.png")));
        rookWhite_27->setScaledContents(true);

        gridLayout_2->addWidget(squareE7, 1, 6, 1, 1);

        squareD3 = new QFrame(centralwidget);
        squareD3->setObjectName("squareD3");
        squareD3->setEnabled(true);
        squareD3->setMinimumSize(QSize(100, 100));
        squareD3->setSizeIncrement(QSize(1, 1));
        squareD3->setBaseSize(QSize(100, 100));
        QPalette palette46;
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette46.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette46.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette46.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareD3->setPalette(palette46);
        squareD3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareD3->setMouseTracking(false);
        squareD3->setAutoFillBackground(false);
        squareD3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareD3->setFrameShape(QFrame::Shape::StyledPanel);
        squareD3->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareD3, 5, 5, 1, 1);

        squareH1 = new QFrame(centralwidget);
        squareH1->setObjectName("squareH1");
        squareH1->setEnabled(true);
        squareH1->setMinimumSize(QSize(100, 100));
        squareH1->setSizeIncrement(QSize(1, 1));
        squareH1->setBaseSize(QSize(100, 100));
        QPalette palette47;
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette47.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette47.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette47.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareH1->setPalette(palette47);
        squareH1->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareH1->setMouseTracking(false);
        squareH1->setAutoFillBackground(false);
        squareH1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareH1->setFrameShape(QFrame::Shape::StyledPanel);
        squareH1->setFrameShadow(QFrame::Shadow::Plain);
        rookWhiteH = new QLabel(squareH1);
        rookWhiteH->setObjectName("rookWhiteH");
        rookWhiteH->setGeometry(QRect(0, 0, 101, 101));
        rookWhiteH->setPixmap(QPixmap(QString::fromUtf8("images/Chess_rlt60.png")));
        rookWhiteH->setScaledContents(true);

        gridLayout_2->addWidget(squareH1, 7, 9, 1, 1);

        squareA8 = new QFrame(centralwidget);
        squareA8->setObjectName("squareA8");
        squareA8->setEnabled(true);
        squareA8->setMinimumSize(QSize(100, 100));
        squareA8->setSizeIncrement(QSize(1, 1));
        squareA8->setBaseSize(QSize(100, 100));
        QPalette palette48;
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette48.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette48.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette48.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareA8->setPalette(palette48);
        squareA8->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareA8->setMouseTracking(false);
        squareA8->setAutoFillBackground(false);
        squareA8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareA8->setFrameShape(QFrame::Shape::StyledPanel);
        squareA8->setFrameShadow(QFrame::Shadow::Plain);
        rookBlackA = new QLabel(squareA8);
        rookBlackA->setObjectName("rookBlackA");
        rookBlackA->setGeometry(QRect(0, 0, 101, 101));
        rookBlackA->setPixmap(QPixmap(QString::fromUtf8("images/Chess_rdt60.png")));
        rookBlackA->setScaledContents(true);

        gridLayout_2->addWidget(squareA8, 0, 0, 1, 1);

        squareD4 = new QFrame(centralwidget);
        squareD4->setObjectName("squareD4");
        squareD4->setEnabled(true);
        squareD4->setMinimumSize(QSize(100, 100));
        squareD4->setSizeIncrement(QSize(1, 1));
        squareD4->setBaseSize(QSize(100, 100));
        QPalette palette49;
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette49.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette49.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette49.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareD4->setPalette(palette49);
        squareD4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareD4->setMouseTracking(false);
        squareD4->setAcceptDrops(false);
        squareD4->setAutoFillBackground(false);
        squareD4->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareD4->setFrameShape(QFrame::Shape::StyledPanel);
        squareD4->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareD4, 4, 5, 1, 1);

        squareE6 = new QFrame(centralwidget);
        squareE6->setObjectName("squareE6");
        squareE6->setEnabled(true);
        squareE6->setMinimumSize(QSize(100, 100));
        squareE6->setSizeIncrement(QSize(1, 1));
        squareE6->setBaseSize(QSize(100, 100));
        QPalette palette50;
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette50.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette50.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette50.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareE6->setPalette(palette50);
        squareE6->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareE6->setMouseTracking(false);
        squareE6->setAutoFillBackground(false);
        squareE6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareE6->setFrameShape(QFrame::Shape::StyledPanel);
        squareE6->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareE6, 2, 6, 1, 1);

        squareC3 = new QFrame(centralwidget);
        squareC3->setObjectName("squareC3");
        squareC3->setEnabled(true);
        squareC3->setMinimumSize(QSize(100, 100));
        squareC3->setSizeIncrement(QSize(1, 1));
        squareC3->setBaseSize(QSize(100, 100));
        QPalette palette51;
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette51.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette51.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette51.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareC3->setPalette(palette51);
        squareC3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareC3->setMouseTracking(false);
        squareC3->setAcceptDrops(false);
        squareC3->setAutoFillBackground(false);
        squareC3->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareC3->setFrameShape(QFrame::Shape::StyledPanel);
        squareC3->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareC3, 5, 3, 1, 2);

        squareA2 = new QFrame(centralwidget);
        squareA2->setObjectName("squareA2");
        squareA2->setEnabled(true);
        squareA2->setMinimumSize(QSize(100, 100));
        squareA2->setSizeIncrement(QSize(1, 1));
        squareA2->setBaseSize(QSize(100, 100));
        QPalette palette52;
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette52.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette52.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette52.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareA2->setPalette(palette52);
        squareA2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareA2->setMouseTracking(false);
        squareA2->setAutoFillBackground(false);
        squareA2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareA2->setFrameShape(QFrame::Shape::StyledPanel);
        squareA2->setFrameShadow(QFrame::Shadow::Plain);
        pawnWhiteA = new QLabel(squareA2);
        pawnWhiteA->setObjectName("pawnWhiteA");
        pawnWhiteA->setGeometry(QRect(0, 0, 101, 101));
        pawnWhiteA->setPixmap(QPixmap(QString::fromUtf8("images/Chess_plt60.png")));
        pawnWhiteA->setScaledContents(true);

        gridLayout_2->addWidget(squareA2, 6, 0, 1, 1);

        squareF3 = new QFrame(centralwidget);
        squareF3->setObjectName("squareF3");
        squareF3->setEnabled(true);
        squareF3->setMinimumSize(QSize(100, 100));
        squareF3->setSizeIncrement(QSize(1, 1));
        squareF3->setBaseSize(QSize(100, 100));
        QPalette palette53;
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette53.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette53.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette53.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareF3->setPalette(palette53);
        squareF3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareF3->setMouseTracking(false);
        squareF3->setAutoFillBackground(false);
        squareF3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareF3->setFrameShape(QFrame::Shape::StyledPanel);
        squareF3->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareF3, 5, 7, 1, 1);

        squareA6 = new QFrame(centralwidget);
        squareA6->setObjectName("squareA6");
        squareA6->setEnabled(true);
        squareA6->setMinimumSize(QSize(100, 100));
        squareA6->setSizeIncrement(QSize(1, 1));
        squareA6->setBaseSize(QSize(100, 100));
        QPalette palette54;
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette54.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette54.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette54.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareA6->setPalette(palette54);
        squareA6->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareA6->setMouseTracking(false);
        squareA6->setAutoFillBackground(false);
        squareA6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareA6->setFrameShape(QFrame::Shape::StyledPanel);
        squareA6->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareA6, 2, 0, 1, 1);

        squareF6 = new QFrame(centralwidget);
        squareF6->setObjectName("squareF6");
        squareF6->setEnabled(true);
        squareF6->setMinimumSize(QSize(100, 100));
        squareF6->setSizeIncrement(QSize(1, 1));
        squareF6->setBaseSize(QSize(100, 100));
        QPalette palette55;
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette55.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette55.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette55.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareF6->setPalette(palette55);
        squareF6->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareF6->setMouseTracking(false);
        squareF6->setAcceptDrops(false);
        squareF6->setAutoFillBackground(false);
        squareF6->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareF6->setFrameShape(QFrame::Shape::StyledPanel);
        squareF6->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareF6, 2, 7, 1, 1);

        squareB4 = new QFrame(centralwidget);
        squareB4->setObjectName("squareB4");
        squareB4->setEnabled(true);
        squareB4->setMinimumSize(QSize(100, 100));
        squareB4->setSizeIncrement(QSize(1, 1));
        squareB4->setBaseSize(QSize(100, 100));
        QPalette palette56;
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette56.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette56.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette56.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareB4->setPalette(palette56);
        squareB4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareB4->setMouseTracking(false);
        squareB4->setAcceptDrops(false);
        squareB4->setAutoFillBackground(false);
        squareB4->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareB4->setFrameShape(QFrame::Shape::StyledPanel);
        squareB4->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareB4, 4, 1, 1, 2);

        squareC1 = new QFrame(centralwidget);
        squareC1->setObjectName("squareC1");
        squareC1->setEnabled(true);
        squareC1->setMinimumSize(QSize(100, 100));
        squareC1->setSizeIncrement(QSize(1, 1));
        squareC1->setBaseSize(QSize(100, 100));
        QPalette palette57;
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette57.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette57.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette57.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareC1->setPalette(palette57);
        squareC1->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareC1->setMouseTracking(false);
        squareC1->setAcceptDrops(false);
        squareC1->setAutoFillBackground(false);
        squareC1->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareC1->setFrameShape(QFrame::Shape::StyledPanel);
        squareC1->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_3 = new QLabel(squareC1);
        rookWhite_3->setObjectName("rookWhite_3");
        rookWhite_3->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_3->setPixmap(QPixmap(QString::fromUtf8("images/Chess_blt60.png")));
        rookWhite_3->setScaledContents(true);

        gridLayout_2->addWidget(squareC1, 7, 3, 1, 1);

        squareD7 = new QFrame(centralwidget);
        squareD7->setObjectName("squareD7");
        squareD7->setEnabled(true);
        squareD7->setMinimumSize(QSize(100, 100));
        squareD7->setSizeIncrement(QSize(1, 1));
        squareD7->setBaseSize(QSize(100, 100));
        QPalette palette58;
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette58.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette58.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette58.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareD7->setPalette(palette58);
        squareD7->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareD7->setMouseTracking(false);
        squareD7->setAutoFillBackground(false);
        squareD7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareD7->setFrameShape(QFrame::Shape::StyledPanel);
        squareD7->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_28 = new QLabel(squareD7);
        rookWhite_28->setObjectName("rookWhite_28");
        rookWhite_28->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_28->setPixmap(QPixmap(QString::fromUtf8("images/Chess_pdt60.png")));
        rookWhite_28->setScaledContents(true);

        gridLayout_2->addWidget(squareD7, 1, 5, 1, 1);

        squareH6 = new QFrame(centralwidget);
        squareH6->setObjectName("squareH6");
        squareH6->setEnabled(true);
        squareH6->setMinimumSize(QSize(100, 100));
        squareH6->setSizeIncrement(QSize(1, 1));
        squareH6->setBaseSize(QSize(100, 100));
        QPalette palette59;
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette59.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette59.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette59.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareH6->setPalette(palette59);
        squareH6->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareH6->setMouseTracking(false);
        squareH6->setAcceptDrops(false);
        squareH6->setAutoFillBackground(false);
        squareH6->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareH6->setFrameShape(QFrame::Shape::StyledPanel);
        squareH6->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_2->addWidget(squareH6, 2, 9, 1, 1);

        squareE8 = new QFrame(centralwidget);
        squareE8->setObjectName("squareE8");
        squareE8->setEnabled(true);
        squareE8->setMinimumSize(QSize(100, 100));
        squareE8->setSizeIncrement(QSize(1, 1));
        squareE8->setBaseSize(QSize(100, 100));
        QPalette palette60;
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette60.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette60.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette60.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareE8->setPalette(palette60);
        squareE8->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareE8->setMouseTracking(false);
        squareE8->setAutoFillBackground(false);
        squareE8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareE8->setFrameShape(QFrame::Shape::StyledPanel);
        squareE8->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_20 = new QLabel(squareE8);
        rookWhite_20->setObjectName("rookWhite_20");
        rookWhite_20->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_20->setPixmap(QPixmap(QString::fromUtf8("images/Chess_kdt60.png")));
        rookWhite_20->setScaledContents(true);

        gridLayout_2->addWidget(squareE8, 0, 6, 1, 1);

        squareD1 = new QFrame(centralwidget);
        squareD1->setObjectName("squareD1");
        squareD1->setEnabled(true);
        squareD1->setMinimumSize(QSize(100, 100));
        squareD1->setSizeIncrement(QSize(1, 1));
        squareD1->setBaseSize(QSize(100, 100));
        QPalette palette61;
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush8);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush8);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush8);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush11);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush1);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush12);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette61.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush8);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush8);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush11);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush1);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush12);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette61.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush8);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush8);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush1);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette61.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareD1->setPalette(palette61);
        squareD1->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareD1->setMouseTracking(false);
        squareD1->setAutoFillBackground(false);
        squareD1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 178);"));
        squareD1->setFrameShape(QFrame::Shape::StyledPanel);
        squareD1->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_4 = new QLabel(squareD1);
        rookWhite_4->setObjectName("rookWhite_4");
        rookWhite_4->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_4->setPixmap(QPixmap(QString::fromUtf8("images/Chess_qlt60.png")));
        rookWhite_4->setScaledContents(true);

        gridLayout_2->addWidget(squareD1, 7, 5, 1, 1);

        squareB2 = new QFrame(centralwidget);
        squareB2->setObjectName("squareB2");
        squareB2->setEnabled(true);
        squareB2->setMinimumSize(QSize(100, 100));
        squareB2->setSizeIncrement(QSize(1, 1));
        squareB2->setBaseSize(QSize(100, 100));
        QPalette palette62;
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette62.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette62.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette62.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareB2->setPalette(palette62);
        squareB2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareB2->setMouseTracking(false);
        squareB2->setAcceptDrops(false);
        squareB2->setAutoFillBackground(false);
        squareB2->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareB2->setFrameShape(QFrame::Shape::StyledPanel);
        squareB2->setFrameShadow(QFrame::Shadow::Plain);
        rookWhite_10 = new QLabel(squareB2);
        rookWhite_10->setObjectName("rookWhite_10");
        rookWhite_10->setGeometry(QRect(0, 0, 101, 101));
        rookWhite_10->setPixmap(QPixmap(QString::fromUtf8("images/Chess_plt60.png")));
        rookWhite_10->setScaledContents(true);

        gridLayout_2->addWidget(squareB2, 6, 1, 1, 1);

        squareB8 = new QFrame(centralwidget);
        squareB8->setObjectName("squareB8");
        squareB8->setEnabled(true);
        squareB8->setMinimumSize(QSize(100, 100));
        squareB8->setSizeIncrement(QSize(1, 1));
        squareB8->setBaseSize(QSize(100, 100));
        QPalette palette63;
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette63.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette63.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush8);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette63.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        squareB8->setPalette(palette63);
        squareB8->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        squareB8->setMouseTracking(false);
        squareB8->setAcceptDrops(false);
        squareB8->setAutoFillBackground(false);
        squareB8->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 92, 56);"));
        squareB8->setFrameShape(QFrame::Shape::StyledPanel);
        squareB8->setFrameShadow(QFrame::Shadow::Plain);
        knightBlackB = new QLabel(squareB8);
        knightBlackB->setObjectName("knightBlackB");
        knightBlackB->setGeometry(QRect(0, 0, 101, 101));
        knightBlackB->setPixmap(QPixmap(QString::fromUtf8("images/Chess_ndt60.png")));
        knightBlackB->setScaledContents(true);

        gridLayout_2->addWidget(squareB8, 0, 1, 1, 2);

        EchequierWindow->setCentralWidget(centralwidget);

        retranslateUi(EchequierWindow);

        QMetaObject::connectSlotsByName(EchequierWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EchequierWindow)
    {
        EchequierWindow->setWindowTitle(QCoreApplication::translate("EchequierWindow", "EchequierWindow", nullptr));
        rookWhite_12->setText(QString());
        rookWhite_11->setText(QString());
        rookWhite_5->setText(QString());
        rookWhite_15->setText(QString());
        rookWhite_31->setText(QString());
        knightBlackG->setText(QString());
        rookBlackH->setText(QString());
        knightWhiteG->setText(QString());
        rookWhite_14->setText(QString());
        rookWhite_21->setText(QString());
        rookWhite_24->setText(QString());
        knightWhiteB->setText(QString());
        rookWhite_16->setText(QString());
        rookWhite_26->setText(QString());
        rookWhite_6->setText(QString());
        rookWhite_18->setText(QString());
        rookWhite_19->setText(QString());
        rookWhite_13->setText(QString());
        rookWhite_25->setText(QString());
        rookWhiteA->setText(QString());
        rookWhite_29->setText(QString());
        rookWhite_30->setText(QString());
        rookWhite_27->setText(QString());
        rookWhiteH->setText(QString());
        rookBlackA->setText(QString());
        pawnWhiteA->setText(QString());
        rookWhite_3->setText(QString());
        rookWhite_28->setText(QString());
        rookWhite_20->setText(QString());
        rookWhite_4->setText(QString());
        rookWhite_10->setText(QString());
        knightBlackB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EchequierWindow: public Ui_EchequierWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECHEQUIERWINDOW_H
