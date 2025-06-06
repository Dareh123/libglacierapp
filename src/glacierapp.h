/*
 * Copyright (C) 2017-2024 Chupligin Sergey <neochapay@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef GLACIERAPP_H
#define GLACIERAPP_H

#include <QLocale>
#include <QLoggingCategory>
#include <QObject>

Q_DECLARE_LOGGING_CATEGORY(lcGlacierAppCoreLog)

class QGuiApplication;
class QQmlApplicationEngine;
class QQuickWindow;
class GlacierApp : public QObject {
    Q_OBJECT
public:
    static QGuiApplication* app(int& argc, char** argv);
    static QQmlApplicationEngine* engine(QObject* parent = nullptr);
    static QQuickWindow* showWindow(QString rootQMLPath);
    static QQuickWindow* showWindow();
    static void setLanguage(QLocale::Language lang);
    static void wipe();

private:
    static void saveWindowSize();
};

#endif // GLACIERAPP_H
