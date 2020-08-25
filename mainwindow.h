#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "volume.h"
#include "length.h"
#include "area.h"
#include "weightandmass.h"
#include "timeconvert.h"
#include "energy.h"
#include "temperature.h"
#include "speed.h"
#include "angle.h"
#include "density.h"
#include "datastorage.h"
#include "force.h"
#include "power.h"
#include "fuelconsumption.h"
#include "pressure.h"
#include "volumedry.h"
#include "acceleration.h"
#include "momentofinertia.h"
#include "torque.h"
#include "velocityangular.h"
#include "accelerationangular.h"
#include "specificvolume.h"
#include "momentofforce.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_converterList_itemClicked(QListWidgetItem *item);

    void on_convertFromLineEdit_textChanged(const QString &arg1);

    void on_convertFromList_itemClicked(QListWidgetItem *item);

    void on_convertToList_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;

    Volume volume;
    Length length;
    Area area;
    WeightAndMass weightAndMass;
    TimeConvert timeConvert;
    Energy energy;
    Temperature temperature;
    Speed speed;
    Angle angle;
    Density density;
    DataStorage dataStorage;
    Force force;
    Power power;
    FuelConsumption fuelConsumption;
    Pressure pressure;
    VolumeDry volumeDry;
    Acceleration acceleration;
    MomentOfInertia momentOfInertia;
    Torque torque;
    VelocityAngular velocityAngular;
    AccelerationAngular accelerationAngular;
    SpecificVolume specificVolume;
    MomentOfForce momentOfForce;

    void fillVolume();
    void fillArea();
    void fillLength();
    void fillWeightAndMass();
    void fillTime();
    void fillEnergy();
    void fillTemperature();
    void fillSpeed();
    void fillAngle();
    void fillDensity();
    void fillDataStorage();
    void fillForce();
    void fillPower();
    void fillFuelConsumption();
    void fillPressure();
    void fillVolumeDry();
    void fillAcceleration();
    void fillMomentOfInertia();
    void fillTorque();
    void fillVelocityAngular();
    void fillAccelerationAngular();
    void fillSpecificVolume();
    void fillMomentOfForce();

    void clearLineEdit();
};
#endif // MAINWINDOW_H
