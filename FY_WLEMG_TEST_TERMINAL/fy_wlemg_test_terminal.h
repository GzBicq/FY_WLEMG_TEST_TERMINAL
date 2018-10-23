#ifndef FY_WLEMG_TEST_TERMINAL_H
#define FY_WLEMG_TEST_TERMINAL_H

#include <QMainWindow>
#include <stdint.h>
#include <QSerialPort>


namespace Ui {
class FY_WLEMG_TEST_TERMINAL;
}

class FY_WLEMG_TEST_TERMINAL : public QMainWindow
{
    Q_OBJECT

public:
    explicit FY_WLEMG_TEST_TERMINAL(QWidget *parent = 0);
    ~FY_WLEMG_TEST_TERMINAL();
    void fillPortsInfo();
    uint16_t  crc_check(uint8_t* data, uint32_t length);
    QByteArray data;
    QByteArray data_save;
    int pkt_num = 0;
    int pkt_byte_num = 0;
    int data_byte_num = 0;
    unsigned short emg_raw[50];

private slots:
    void openSerialPort();
    void closeSerialPort();
    void writeData(const QByteArray &data);
    void readData();

    void on_PB_OPEN_SERIAL_clicked();

    void on_PB_CLOSE_SERIAL_clicked();

    void on_PB_PRINT_clicked();


    void on_PB_CLEAR_clicked();

private:
    Ui::FY_WLEMG_TEST_TERMINAL *ui;

private:
      QSerialPort *m_serial = nullptr;
};

#endif // FY_WLEMG_TEST_TERMINAL_H
