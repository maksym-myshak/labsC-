
#include "GasStation.h"


CGasStation::CGasStation(double dieselVolume, double gasolineVolume, double lpgVolume, double electricVolume,
    double dieselReserve, double gasolineReserve, double lpgReserve, double electricReserve,
    double nozzleCapacity)
    : dieselVolume(dieselVolume), gasolineVolume(gasolineVolume), lpgVolume(lpgVolume), electricVolume(electricVolume),
    dieselReserve(dieselReserve), gasolineReserve(gasolineReserve), lpgReserve(lpgReserve), electricReserve(electricReserve),
    nozzleCapacity(nozzleCapacity) {
}


void CGasStation::get_info() const {
    cout << "Об'єм дизельного палива: " << dieselVolume << " л" << endl
        << "Об'єм бензину: " << gasolineVolume << " л" << endl
        << "Об'єм LPG: " << lpgVolume << " л" << endl
        << "Об'єм електроенергії: " << electricVolume << " кВт-год" << endl
        << "Запас дизельного палива: " << dieselReserve << " л" << endl
        << "Запас бензину: " << gasolineReserve << " л" << endl
        << "Запас LPG: " << lpgReserve << " л" << endl
        << "Запас електроенергії: " << electricReserve << " кВт-год" << endl
        << "Пропускна здатність заправочного пістолета: " << nozzleCapacity << " л/сек" << endl;
}


void CGasStation::setDieselVolume(double volume) { dieselVolume = volume; }
double CGasStation::getDieselVolume() const { return dieselVolume; }

void CGasStation::setGasolineVolume(double volume) { gasolineVolume = volume; }
double CGasStation::getGasolineVolume() const { return gasolineVolume; }

void CGasStation::setLpgVolume(double volume) { lpgVolume = volume; }
double CGasStation::getLpgVolume() const { return lpgVolume; }

void CGasStation::setElectricVolume(double volume) { electricVolume = volume; }
double CGasStation::getElectricVolume() const { return electricVolume; }

void CGasStation::setDieselReserve(double reserve) { dieselReserve = reserve; }
double CGasStation::getDieselReserve() const { return dieselReserve; }

void CGasStation::setGasolineReserve(double reserve) { gasolineReserve = reserve; }
double CGasStation::getGasolineReserve() const { return gasolineReserve; }

void CGasStation::setLpgReserve(double reserve) { lpgReserve = reserve; }
double CGasStation::getLpgReserve() const { return lpgReserve; }

void CGasStation::setElectricReserve(double reserve) { electricReserve = reserve; }
double CGasStation::getElectricReserve() const { return electricReserve; }

void CGasStation::setNozzleCapacity(double capacity) { nozzleCapacity = capacity; }
double CGasStation::getNozzleCapacity() const { return nozzleCapacity; }


void CGasStation::increaseDieselReserve(double amount) {
    if (dieselReserve + amount <= dieselVolume) {
        dieselReserve += amount;
    }
}

void CGasStation::increaseGasolineReserve(double amount) {
    if (gasolineReserve + amount <= gasolineVolume) {
        gasolineReserve += amount;
    }
}

void CGasStation::increaseLpgReserve(double amount) {
    if (lpgReserve + amount <= lpgVolume) {
        lpgReserve += amount;
    }
}

void CGasStation::increaseElectricReserve(double amount) {
    if (electricReserve + amount <= electricVolume) {
        electricReserve += amount;
    }
}


double CGasStation::refuelDiesel(double amount) {
    if (amount <= dieselReserve) {
        dieselReserve -= amount;
        return amount / nozzleCapacity;
    }
    return -1; 
}

double CGasStation::refuelGasoline(double amount) {
    if (amount <= gasolineReserve) {
        gasolineReserve -= amount;
        return amount / nozzleCapacity;
    }
    return -1; 
}

double CGasStation::refuelLpg(double amount) {
    if (amount <= lpgReserve) {
        lpgReserve -= amount;
        return amount / nozzleCapacity;
    }
    return -1;
}

double CGasStation::refuelElectric(double amount) {
    if (amount <= electricReserve) {
        electricReserve -= amount;
        return amount / nozzleCapacity;
    }
    return -1; 
}