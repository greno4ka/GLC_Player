/****************************************************************************

 This file is part of GLC-Player.
 Copyright (C) 2007-2008 Laurent Ribon (laumaya@users.sourceforge.net)
 Version 2.2.0, packaged on July 2010.

 http://www.glc-player.net

 GLC-Player is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 GLC-Player is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with GLC-Player; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

*****************************************************************************/

#ifndef ERRORLOGDIALOG_H_
#define ERRORLOGDIALOG_H_

#include <QDialog>
#include <QTextStream>
#include "ui_ErrorLogDialog.h"

class QFile;

class ErrorLogDialog : public QDialog, private Ui::ErrorLogDialog
{
public:
	//! Default constructor
	ErrorLogDialog(QFile* pLogFile, QWidget *pParent = 0);

	//! Destructor
	virtual ~ErrorLogDialog();

private:
	//! The error text stream
	QTextStream m_TextStream;
};

#endif /* ERRORLOGDIALOG_H_ */
