#include "agregar.h"
#include "ui_agregar.h"

Agregar::Agregar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Agregar)
{
    ui->setupUi(this);
}

Agregar::~Agregar()
{
    delete ui;
}

Preguntas *Agregar::preguntas() const
{
    return m_pregunta;
}

void Agregar::on_buttonBox_2_accepted()
{
    QString Pregunta= ui->inPregunta->text();
    QString Respuesta = ui->inRespuesta->text();

    this->m_pregunta = new Preguntas(Pregunta, Respuesta) ;
    accept();
}


void Agregar::on_buttonBox_2_rejected()
{

}

