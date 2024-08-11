/********************************************************************************
** Form generated from reading UI file 'transposition.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSPOSITION_H
#define UI_TRANSPOSITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fourthDialog
{
public:
    QLabel *transpositionLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *selectDepthLabel;
    QSpinBox *depthSpinBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButton;
    QPushButton *nextButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *fourthDialog)
    {
        if (fourthDialog->objectName().isEmpty())
            fourthDialog->setObjectName("fourthDialog");
        fourthDialog->resize(600, 350);
        transpositionLabel = new QLabel(fourthDialog);
        transpositionLabel->setObjectName("transpositionLabel");
        transpositionLabel->setGeometry(QRect(20, 0, 311, 101));
        layoutWidget = new QWidget(fourthDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 140, 261, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        selectDepthLabel = new QLabel(layoutWidget);
        selectDepthLabel->setObjectName("selectDepthLabel");

        horizontalLayout->addWidget(selectDepthLabel);

        depthSpinBox = new QSpinBox(layoutWidget);
        depthSpinBox->setObjectName("depthSpinBox");
        depthSpinBox->setMinimum(1);
        depthSpinBox->setMaximum(100);
        depthSpinBox->setSingleStep(1);

        horizontalLayout->addWidget(depthSpinBox);

        layoutWidget1 = new QWidget(fourthDialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(300, 290, 291, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(layoutWidget1);
        backButton->setObjectName("backButton");
        backButton->setStyleSheet(QString::fromUtf8("Qchange rgb(100, 69, 255)"));

        horizontalLayout_2->addWidget(backButton);

        nextButton = new QPushButton(layoutWidget1);
        nextButton->setObjectName("nextButton");

        horizontalLayout_2->addWidget(nextButton);

        cancelButton = new QPushButton(layoutWidget1);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_2->addWidget(cancelButton);


        retranslateUi(fourthDialog);

        QMetaObject::connectSlotsByName(fourthDialog);
    } // setupUi

    void retranslateUi(QDialog *fourthDialog)
    {
        fourthDialog->setWindowTitle(QCoreApplication::translate("fourthDialog", "Dialog", nullptr));
        transpositionLabel->setText(QCoreApplication::translate("fourthDialog", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">Transposition</span></p></body></html>", nullptr));
        selectDepthLabel->setText(QCoreApplication::translate("fourthDialog", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">Select depth:</span></p></body></html>", nullptr));
        backButton->setText(QCoreApplication::translate("fourthDialog", "Back", nullptr));
        nextButton->setText(QCoreApplication::translate("fourthDialog", "Next", nullptr));
        cancelButton->setText(QCoreApplication::translate("fourthDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fourthDialog: public Ui_fourthDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSPOSITION_H
