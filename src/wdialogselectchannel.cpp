/*
Copyright (C) 2014  Gilles Degottex <gilles.degottex@gmail.com>

This file is part of DFasma.

DFasma is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

DFasma is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

A copy of the GNU General Public License is available in the LICENSE.txt
file provided in the source code of DFasma. Another copy can be found at
<http://www.gnu.org/licenses/>.
*/

#include "wdialogselectchannel.h"
#include "ui_wdialogselectchannel.h"

WDialogSelectChannel::WDialogSelectChannel(const QString& fileName, int nchan, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WDialogSelectChannel)
{
    ui->setupUi(this);

    ui->lblFileName->setText(fileName);
    ui->sbChannelID->setMaximum(nchan);
}

WDialogSelectChannel::~WDialogSelectChannel()
{
    delete ui;
}
