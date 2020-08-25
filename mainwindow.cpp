#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->convertFromLineEdit->setValidator( new QDoubleValidator(0, 100, 2, this) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_converterList_itemClicked(QListWidgetItem *item)
{
    if (item->text() == "Volume") {
        this->fillVolume();
        this->clearLineEdit();
    }
    else if (item->text() == "Length") {
        this->fillLength();
        this->clearLineEdit();
    }
    else if (item->text() == "Area") {
        this->fillArea();
        this->clearLineEdit();
    }
    else if (item->text() == "Weight and Mass") {
        this->fillWeightAndMass();
        this->clearLineEdit();
    }
    else if (item->text() == "Time") {
        this->fillTime();
        this->clearLineEdit();
    }
    else if (item->text() == "Energy") {
        this->fillEnergy();
        this->clearLineEdit();
    }
    else if (item->text() == "Temperature") {
        this->fillTemperature();
        this->clearLineEdit();
    }
    else if (item->text() == "Speed") {
        this->fillSpeed();
        this->clearLineEdit();
    }
    else if (item->text() == "Angle") {
        this->fillAngle();
        this->clearLineEdit();
    }
    else if (item->text() == "Density") {
        this->fillDensity();
        this->clearLineEdit();
    }
    else if (item->text() == "Data Storage") {
        this->fillDataStorage();
        this->clearLineEdit();
    }
    else if (item->text() == "Force") {
        this->fillForce();
        this->clearLineEdit();
    }
    else if (item->text() == "Power") {
        this->fillPower();
        this->clearLineEdit();
    }
    else if (item->text() == "Fuel Consumption") {
        this->fillFuelConsumption();
        this->clearLineEdit();
    }
    else if (item->text() == "Pressure") {
        this->fillPressure();
        this->clearLineEdit();
    }
    else if (item->text() == "Volume - Dry") {
        this->fillVolumeDry();
        this->clearLineEdit();
    }
    else if (item->text() == "Acceleration") {
        this->fillAcceleration();
        this->clearLineEdit();
    }
    else if (item->text() == "Moment of Inertia") {
        this->fillMomentOfInertia();
        this->clearLineEdit();
    }
    else if (item->text() == "Torque") {
        this->fillTorque();
        this->clearLineEdit();
    }
    else if (item->text() == "Velocity - Angular") {
        this->fillVelocityAngular();
        this->clearLineEdit();
    }
    else if (item->text() == "Acceleration - Angular") {
        this->fillAccelerationAngular();
        this->clearLineEdit();
    }
    else if (item->text() == "Specific Volume") {
        this->fillSpecificVolume();
        this->clearLineEdit();
    }
    else if (item->text() == "Moment of Force") {
        this->fillMomentOfForce();
        this->clearLineEdit();
    }
}

void MainWindow::fillVolume()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(volume.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(volume.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillLength()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(length.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(length.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillArea()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(area.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(area.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillWeightAndMass()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(weightAndMass.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(weightAndMass.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillTime()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(timeConvert.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(timeConvert.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillEnergy()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(energy.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(energy.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillTemperature()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(temperature.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(temperature.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillSpeed()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(speed.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(speed.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillAngle()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(angle.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(angle.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillDensity()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(density.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(density.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillDataStorage()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(dataStorage.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(dataStorage.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillForce()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(force.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(force.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillPower()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(power.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(power.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillFuelConsumption()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(fuelConsumption.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(fuelConsumption.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillPressure()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(pressure.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(pressure.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillVolumeDry()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(volumeDry.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(volumeDry.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillAcceleration()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(acceleration.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(acceleration.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillMomentOfInertia()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(momentOfInertia.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(momentOfInertia.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillTorque()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(torque.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(torque.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillVelocityAngular()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(velocityAngular.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(velocityAngular.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillAccelerationAngular()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(accelerationAngular.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(accelerationAngular.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillSpecificVolume()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(specificVolume.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(specificVolume.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::fillMomentOfForce()
{
    ui->convertFromList->clear();
    ui->convertFromList->addItems(momentOfForce.getKey());
    ui->convertFromList->setCurrentRow(0);

    ui->convertToList->clear();
    ui->convertToList->addItems(momentOfForce.getKey());
    ui->convertToList->setCurrentRow(1);
}

void MainWindow::clearLineEdit()
{
    ui->convertFromLineEdit->clear();
    ui->convertToLineEdit->clear();
}

void MainWindow::on_convertFromLineEdit_textChanged(const QString &arg1)
{
    if (ui->converterList->item(0)->isSelected()) {
        double result = volume.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(1)->isSelected()) {
        double result = length.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(2)->isSelected()) {
        double result = area.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(3)->isSelected()) {
        double result = weightAndMass.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(4)->isSelected()) {
        double result = timeConvert.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(5)->isSelected()) {
        double result = energy.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(6)->isSelected()) {
        double result = temperature.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow(), ui->convertFromLineEdit->text().toDouble());
        ui->convertToLineEdit->setText(QString::number(result));
    }
    if (ui->converterList->item(7)->isSelected()) {
        double result = speed.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(8)->isSelected()) {
        double result = angle.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(9)->isSelected()) {
        double result = density.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(10)->isSelected()) {
        double result = dataStorage.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(11)->isSelected()) {
        double result = force.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(12)->isSelected()) {
        double result = power.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(13)->isSelected()) {
        double result = fuelConsumption.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(14)->isSelected()) {
        double result = pressure.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(15)->isSelected()) {
        double result = volumeDry.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(16)->isSelected()) {
        double result = acceleration.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(17)->isSelected()) {
        double result = momentOfInertia.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(18)->isSelected()) {
        double result = torque.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(19)->isSelected()) {
        double result = velocityAngular.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(20)->isSelected()) {
        double result = accelerationAngular.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(21)->isSelected()) {
        double result = specificVolume.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
    if (ui->converterList->item(22)->isSelected()) {
        double result = momentOfForce.getValue(ui->convertFromList->currentRow(), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(arg1.toDouble() * result));
    }
}

void MainWindow::on_convertFromList_itemClicked(QListWidgetItem *item)
{
    if (ui->converterList->item(0)->isSelected()) {
        double result = volume.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(1)->isSelected()) {
        double result = length.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(2)->isSelected()) {
        double result = area.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(3)->isSelected()) {
        double result = weightAndMass.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(4)->isSelected()) {
        double result = timeConvert.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(5)->isSelected()) {
        double result = energy.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(6)->isSelected()) {
        double result = temperature.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow(), ui->convertFromLineEdit->text().toDouble());
        ui->convertToLineEdit->setText(QString::number(result));
    }
    if (ui->converterList->item(7)->isSelected()) {
        double result = speed.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(8)->isSelected()) {
        double result = angle.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(9)->isSelected()) {
        double result = density.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(10)->isSelected()) {
        double result = dataStorage.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(11)->isSelected()) {
        double result = force.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(12)->isSelected()) {
        double result = power.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(13)->isSelected()) {
        double result = fuelConsumption.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(14)->isSelected()) {
        double result = pressure.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(15)->isSelected()) {
        double result = volumeDry.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(16)->isSelected()) {
        double result = acceleration.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(17)->isSelected()) {
        double result = momentOfInertia.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(18)->isSelected()) {
        double result = torque.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(19)->isSelected()) {
        double result = velocityAngular.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(20)->isSelected()) {
        double result = accelerationAngular.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(21)->isSelected()) {
        double result = specificVolume.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(22)->isSelected()) {
        double result = momentOfForce.getValue(ui->convertFromList->row(item), ui->convertToList->currentRow());
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
}

void MainWindow::on_convertToList_itemClicked(QListWidgetItem *item)
{
    if (ui->converterList->item(0)->isSelected()) {
        double result = volume.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(1)->isSelected()) {
        double result = length.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(2)->isSelected()) {
        double result = area.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(3)->isSelected()) {
        double result = weightAndMass.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(4)->isSelected()) {
        double result = timeConvert.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(5)->isSelected()) {
        double result = energy.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(6)->isSelected()) {
        double result = temperature.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item), ui->convertFromLineEdit->text().toDouble());
        ui->convertToLineEdit->setText(QString::number(result));
    }
    if (ui->converterList->item(7)->isSelected()) {
        double result = speed.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(8)->isSelected()) {
        double result = angle.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(9)->isSelected()) {
        double result = density.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(10)->isSelected()) {
        double result = dataStorage.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(11)->isSelected()) {
        double result = force.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(12)->isSelected()) {
        double result = power.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(13)->isSelected()) {
        double result = fuelConsumption.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(14)->isSelected()) {
        double result = pressure.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(15)->isSelected()) {
        double result = volumeDry.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(16)->isSelected()) {
        double result = acceleration.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(17)->isSelected()) {
        double result = momentOfInertia.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(18)->isSelected()) {
        double result = torque.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(19)->isSelected()) {
        double result = velocityAngular.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(20)->isSelected()) {
        double result = accelerationAngular.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(21)->isSelected()) {
        double result = specificVolume.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
    if (ui->converterList->item(22)->isSelected()) {
        double result = momentOfForce.getValue(ui->convertFromList->currentRow(), ui->convertToList->row(item));
        ui->convertToLineEdit->setText(QString::number(ui->convertFromLineEdit->text().toDouble() * result));
    }
}
