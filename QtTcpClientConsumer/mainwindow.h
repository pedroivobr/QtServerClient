#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
private:
    /**
     * @brief id identificador do temporizador
     */
    int id;
public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
    /**
     * @brief tcpConnect Conectar ao servidor
     * @param str Enderenço do servidor
     *
     * Função que conecta a maquina ao servidor indicado
     */
    void tcpConnect(QString str);
public slots:
    /**
   * @brief putData Envia dados
   *
   * Função que envia os dados ao servidor
   */
  void putData();
  /**
   * @brief xablau recebe o tempo
   * @param tempo tempo
   *
   * Indica o tempo para o temporizador
   */
  void xablau(int tempo);
  /**
   * @brief mataTempo Finaliza temporizador
   *
   * Encerra o temporizador
   */
  void mataTempo();
  /**
   * @brief timerEvent Temporizador
   * @param e objeto timerevent
   *
   * Função de temporizador, repete o putData() de acordo com o tempo indicado.
   */
  void timerEvent(QTimerEvent *e);
private slots:
  /**
   * @brief on_buttonConnect_clicked Botão conectar
   *
   * Se conecta ao servidor
   */
  void on_buttonConnect_clicked();
  /**
   * @brief on_buttonDisconnect_clicked Botão disconectar
   *
   * Disconecta-se do servidor.
   */
  void on_buttonDisconnect_clicked();
  /**
   * @brief on_buttonStart_clicked Botão start
   *
   * Inicia o envio de dados
   */
  void on_buttonStart_clicked();
  /**
   * @brief on_buttonStop_clicked Botão stop
   *
   * Para o envio de dados
   */
  void on_buttonStop_clicked();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H
