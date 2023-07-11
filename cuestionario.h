#ifndef CUESTIONARIO_H
#define CUESTIONARIO_H

#include <QWidget>
#include <QWidget>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include "agregar.h"
#include "preguntas.h"
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class Cuestionario; }
QT_END_NAMESPACE

class Cuestionario : public QWidget
{
    Q_OBJECT

public:
    Cuestionario(QWidget *parent = nullptr);
    ~Cuestionario();

private slots:
    void on_btnGuardar_clicked();

    void on_btnAgregar_clicked();


    void on_btnAumentar_clicked();

private:
    Ui::Cuestionario *ui;
    const QString ARCHIVO = ":/TMatematicas.txt";
    enum Columna
    {
        PREGUNTAS, RESPUESTAS
    };

    void cargarPreguntas();

    void cargarPreguntas(const QString& filePath);


};
#endif // CUESTIONARIO_H
