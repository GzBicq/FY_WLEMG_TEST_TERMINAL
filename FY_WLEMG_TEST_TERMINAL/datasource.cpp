/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Charts module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 or (at your option) any later version
** approved by the KDE Free Qt Foundation. The licenses are as published by
** the Free Software Foundation and appearing in the file LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "datasource.h"
#include <QtCore/QtMath>
#include <QtCore/QRandomGenerator>

QT_CHARTS_USE_NAMESPACE

DataSource::DataSource(QObject *parent) :
    QObject(parent),
    m_index(-1)
{
    generateData(0, 0, 0);
}

void DataSource::update(QAbstractSeries *series, int seriesIndex)
{
    if (series)
    {
        QXYSeries *xySeries = static_cast<QXYSeries *>(series);
        const QVector<QVector<QPointF> > &seriesData = m_data.at(seriesIndex);
        if (seriesIndex == 0)
            m_index++;
        if (m_index > seriesData.count() - 1)
            m_index = 0;

        QVector<QPointF> points = seriesData.at(m_index);
        // Use replace instead of clear + append, it's optimized for performance
        xySeries->replace(points);
    }
}

void DataSource::handleSceneChanged()
{
    m_dataUpdater.start();
}

void DataSource::updateAllSeries()
{
    static int frameCount = 0;

    static QString labelText = QStringLiteral("FPS: %1");
    for (int i = 0; i < m_seriesList.size(); i++)
        update(m_seriesList[i], i);

    //frameCount++;
    int elapsed = m_fpsTimer.elapsed();
    if (elapsed >= 1000) {

        elapsed = m_fpsTimer.restart();
        //qreal fps = qreal(0.1 * int(10000.0 * (qreal(frameCount) / qreal(elapsed))));
        qreal fps = qreal(0.1 * int(point_sum * (qreal(data_count*50) / qreal(elapsed))));

        m_fpsLabel->setText(labelText.arg(QString::number(fps, 'f', 1)));
        m_fpsLabel->adjustSize();
        //frameCount = 0;
        data_count = 0;

        ++sec;
        if(sec == 60)
        {
            minite++;

            char sprintf_buf[50] = "";
            int len = 0;
            len = sprintf(sprintf_buf,"minite:%d %d,count:%d\n", minite, sec, (test_count*50)/60);

//            FILE *fp;
//            if( (fp = fopen("./data_per_min.txt", "at+")) == NULL )
//            {
//               printf("Cannot open file, press any key to exit!\n");
//            }
//            if(fp != NULL)
//            {
//               fwrite (sprintf_buf, len, 1, fp);

//               fclose(fp);
//            }

            test_count = 0;
            sec = 0;
        }
    }
}

void DataSource::startUpdates(const QList<QXYSeries *> &seriesList, QLabel *fpsLabel)
{
    m_seriesList = seriesList;
    m_fpsLabel = fpsLabel;

    m_dataUpdater.setInterval(interval);
    m_dataUpdater.setSingleShot(true);
    QObject::connect(&m_dataUpdater, &QTimer::timeout,
                     this, &DataSource::updateAllSeries);

    m_fpsTimer.start();
    updateAllSeries();
}

//10 10 10000
void DataSource::generateData(int seriesCount, int rowCount, int colCount)
{
    m_data.clear();

    // Append the new data depending on the type
    //k:0-10
    for (int k(0); k < seriesCount; k++) {
        QVector<QVector<QPointF> > seriesData;
        //i:0-10
        for (int i(0); i < rowCount; i++) {
            QVector<QPointF> points;
            points.reserve(colCount);
            //j:0-10000
            for (int j(0); j < point_sum; j++) {
                qreal x(0);
                qreal y(0);
                // data with sin + random component
                y = 0;

                // 0.000001 added to make values logaxis compatible
                x = 0.000001 + 20.0 * (qreal(j) / qreal(colCount));//+ (xAdjustment * qreal(i));
                points.append(QPointF(x, y));
            }
            seriesData.append(points);
        }
        m_data.append(seriesData);
    }
}

void DataSource::update_mdata(unsigned short *mdata, int conn_handle)
{
    data_count++;
    test_count++;
    //50个为单位向前移动

    for(int i = point_sum - 1; i >= 50; i--)
    {
        m_data[conn_handle][0][i].setY(m_data[conn_handle][0][i - 50].y());
        m_data[conn_handle][0][i].setX(20.0 * (qreal(i) / qreal(point_sum)));
    }


    for(int i = 0; i < 50; i++)
    {
        qreal x(0);
        qreal y = mdata[i] * 1.0;
        // 0.000001 added to make values logaxis compatible
        x = 0.000001 + 20.0 * (qreal(i) / qreal(point_sum));
        m_data[conn_handle][0][i].setX(x);
        m_data[conn_handle][0][i].setY(y);
    }
}
