/****************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Mobility Components.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef S60AUDIOENDPOINTSELECTOR_H
#define S60AUDIOENDPOINTSELECTOR_H

#include <QStringList>

#include <qaudioendpointselector.h>

QT_USE_NAMESPACE

class S60AudioCaptureSession;

class S60AudioEndpointSelector : public QAudioEndpointSelector
{

Q_OBJECT

public:
    S60AudioEndpointSelector(QObject *session, QObject *parent = 0);
    ~S60AudioEndpointSelector();

    QList<QString> availableEndpoints() const;
    QString endpointDescription(const QString& name) const;
    QString defaultEndpoint() const;
    QString activeEndpoint() const;

    
public Q_SLOTS:
    void setActiveEndpoint(const QString& name);

private:

    S60AudioCaptureSession* m_session;
};

#endif // S60AUDIOENDPOINTSELECTOR_H
