#include "temperature.h"

Temperature::Temperature()
{

}

std::vector<std::pair<QString, double>> Temperature::fillTemperature()
{
    std::vector<std::pair<QString, double>> temperatureVector;

    temperatureVector.push_back(std::make_pair("kelvin [K]", 0));
    temperatureVector.push_back(std::make_pair("Celsius [°C]", 0));
    temperatureVector.push_back(std::make_pair("Fahrenheit [°F]", 0));
    temperatureVector.push_back(std::make_pair("Rankine [°R]", 0));
    temperatureVector.push_back(std::make_pair("Reaumur [°r]", 0));
    temperatureVector.push_back(std::make_pair("Triple point of water", 0));

    return temperatureVector;
}

QStringList Temperature::getKey()
{
    QStringList temperatureList;

    for (auto iter : this->fillTemperature()) {

        temperatureList.append(iter.first);
    }

    return temperatureList;
}

double Temperature::getValue(const int &convertFromPos, const int &convertToPos, const int &value)
{
    return convertTemp(this->fillTemperature()[convertFromPos].first, this->fillTemperature()[convertToPos].first, value);
}

double Temperature::convertTemp(const QString &convertFrom, const QString &convertTo, const int &value)
{
    if (convertFrom.toStdString().find("kelvin") != std::string::npos) {
        if (convertTo.toStdString().find("kelvin") != std::string::npos) {
            return value * 1;
        }
        else if (convertTo.toStdString().find("Celsius") != std::string::npos) {
            return value - 273.15;
        }
        else if (convertTo.toStdString().find("Fahrenheit") != std::string::npos) {
            return (value * 1.8) - 459.67;
        }
        else if (convertTo.toStdString().find("Rankine") != std::string::npos) {
            return value * 1.8;
        }
        else if (convertTo.toStdString().find("Reaumur") != std::string::npos) {
            return (value - 273.15) * 0.8;
        }
        else if (convertTo.toStdString().find("Triple") != std::string::npos) {
            return value * 0.0036608581;
        }
    }
    else if (convertFrom.toStdString().find("Celsius") != std::string::npos) {
        if (convertTo.toStdString().find("kelvin") != std::string::npos) {
            return value + 273.15;
        }
        else if (convertTo.toStdString().find("Celsius") != std::string::npos) {
            return value * 1;
        }
        else if (convertTo.toStdString().find("Fahrenheit") != std::string::npos) {
            return (value * 1.8) + 32;
        }
        else if (convertTo.toStdString().find("Rankine") != std::string::npos) {
            return (value + 273.15) * 1.8;
        }
        else if (convertTo.toStdString().find("Reaumur") != std::string::npos) {
            return value * 0.8;
        }
        else if (convertTo.toStdString().find("Triple") != std::string::npos) {
            return value * 1.0036242495;
        }
    }
    else if (convertFrom.toStdString().find("Fahrenheit") != std::string::npos) {
        if (convertTo.toStdString().find("kelvin") != std::string::npos) {
            return (value + 459.67) * (5/9);
        }
        else if (convertTo.toStdString().find("Celsius") != std::string::npos) {
            return (value - 32) * (5/9);
        }
        else if (convertTo.toStdString().find("Fahrenheit") != std::string::npos) {
            return value * 1;
        }
        else if (convertTo.toStdString().find("Rankine") != std::string::npos) {
            return value + 459.67;
        }
        else if (convertTo.toStdString().find("Reaumur") != std::string::npos) {
            return (value - 32) * (4/9);
        }
        else if (convertTo.toStdString().find("Triple") != std::string::npos) {
            return value * 0.9369152796;
        }
    }
    else if (convertFrom.toStdString().find("Rankine") != std::string::npos) {
        if (convertTo.toStdString().find("kelvin") != std::string::npos) {
            return value / 1.8;
        }
        else if (convertTo.toStdString().find("Celsius") != std::string::npos) {
            return (value - 491.67) / 1.8;
        }
        else if (convertTo.toStdString().find("Fahrenheit") != std::string::npos) {
            return value - 459.67;
        }
        else if (convertTo.toStdString().find("Rankine") != std::string::npos) {
            return value * 1;
        }
        else if (convertTo.toStdString().find("Reaumur") != std::string::npos) {
            return (value - 491.67) * 5/9;
        }
        else if (convertTo.toStdString().find("Triple") != std::string::npos) {
            return value * 0.0020338101;
        }
    }
    else if (convertFrom.toStdString().find("Reaumur") != std::string::npos) {
        if (convertTo.toStdString().find("kelvin") != std::string::npos) {
            return (value * 1.25) + 273.15;
        }
        else if (convertTo.toStdString().find("Celsius") != std::string::npos) {
            return value * 1.25;
        }
        else if (convertTo.toStdString().find("Fahrenheit") != std::string::npos) {
            return (value * 2.25) + 32;
        }
        else if (convertTo.toStdString().find("Rankine") != std::string::npos) {
            return (value * 2.25) + 32 + 459.67;
        }
        else if (convertTo.toStdString().find("Reaumur") != std::string::npos) {
            return value * 1;
        }
        else if (convertTo.toStdString().find("Triple") != std::string::npos) {
            return value * 0.0036608581;
        }
    }
    else if (convertFrom.toStdString().find("Triple") != std::string::npos) {
        if (convertTo.toStdString().find("kelvin") != std::string::npos) {
            return value * 273.16;
        }
        else if (convertTo.toStdString().find("Celsius") != std::string::npos) {
            return convertTemp("kelvin", "Celsius", convertTemp("Triple", "kelvin", value));
        }
        else if (convertTo.toStdString().find("Fahrenheit") != std::string::npos) {
            return convertTemp("kelvin", "Fahrenheit", convertTemp("Triple", "kelvin", value));
        }
        else if (convertTo.toStdString().find("Rankine") != std::string::npos) {
            return convertTemp("kelvin", "Rankine", convertTemp("Triple", "kelvin", value));
        }
        else if (convertTo.toStdString().find("Reaumur") != std::string::npos) {
            return convertTemp("kelvin", "Reaumur", convertTemp("Triple", "kelvin", value));
        }
        else if (convertTo.toStdString().find("Triple") != std::string::npos) {
            return value * 1;
        }
    }

    return 0;
}
