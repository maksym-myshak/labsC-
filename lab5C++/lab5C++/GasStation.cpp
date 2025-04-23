#include "GasStation.h"

CGasStation::CGasStation(double dieselVolume, double gasolineVolume, double lpgVolume, double electricVolume,
    double dieselReserve, double gasolineReserve, double lpgReserve, double electricReserve,
    double nozzleCapacity)
    : dieselVolume(dieselVolume), gasolineVolume(gasolineVolume), lpgVolume(lpgVolume), electricVolume(electricVolume),
    dieselReserve(dieselReserve), gasolineReserve(gasolineReserve), lpgReserve(lpgReserve), electricReserve(electricReserve),
    nozzleCapacity(nozzleCapacity) {
}

void CGasStation::get_info() const {
    cout << *this; 
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

CGasStation CGasStation::operator+(const CGasStation& other) const {
    return CGasStation(dieselVolume + other.dieselVolume, gasolineVolume + other.gasolineVolume,
        lpgVolume + other.lpgVolume, electricVolume + other.electricVolume,
        dieselReserve + other.dieselReserve, gasolineReserve + other.gasolineReserve,
        lpgReserve + other.lpgReserve, electricReserve + other.electricReserve,
        nozzleCapacity);
}

CGasStation& CGasStation::operator--() {
    dieselReserve -= 100;
    gasolineReserve -= 100;
    lpgReserve -= 100;
    electricReserve -= 100;
    return *this;
}

bool CGasStation::operator!=(const CGasStation& other) const {
    return dieselVolume != other.dieselVolume || gasolineVolume != other.gasolineVolume ||
        lpgVolume != other.lpgVolume || electricVolume != other.electricVolume ||
        dieselReserve != other.dieselReserve || gasolineReserve != other.gasolineReserve ||
        lpgReserve != other.lpgReserve || electricReserve != other.electricReserve;
}
CGasStation& CGasStation::operator=(const CGasStation& other) {
    if (this != &other) { 
        dieselVolume = other.dieselVolume;
        gasolineVolume = other.gasolineVolume;
        lpgVolume = other.lpgVolume;
        electricVolume = other.electricVolume;
        dieselReserve = other.dieselReserve;
        gasolineReserve = other.gasolineReserve;
        lpgReserve = other.lpgReserve;
        electricReserve = other.electricReserve;
        nozzleCapacity = other.nozzleCapacity;
    }
    return *this;
}


double CGasStation::operator[](int index) const {
    switch (index) {
    case 0:
        return dieselReserve;
    case 1:
        return gasolineReserve;
    case 2:
        return lpgReserve;
    case 3:
        return electricReserve;
    default:
        throw out_of_range("���i����� i�����");
    }
}

ostream& operator<<(ostream& out, const CGasStation& station) {
    out << "��'�� ���������� ������: " << station.dieselVolume << " �\n"
        << "��'�� �������: " << station.gasolineVolume << " �\n"
        << "��'�� LPG: " << station.lpgVolume << " �\n"
        << "��'�� ������������i�: " << station.electricVolume << " ���-���\n"
        << "����� ���������� ������: " << station.dieselReserve << " �\n"
        << "����� �������: " << station.gasolineReserve << " �\n"
        << "����� LPG: " << station.lpgReserve << " �\n"
        << "����� ������������i�: " << station.electricReserve << " ���-���\n"
        << "��������� �����i��� ������������ �i�������: " << station.nozzleCapacity << " �/���\n";
    return out;
}

istream& operator>>(istream& in, CGasStation& station) {
    cout << "����i�� ��'�� ���������� ������: ";
    in >> station.dieselVolume;
    cout << "����i�� ��'�� �������: ";
    in >> station.gasolineVolume;
    cout << "����i�� ��'�� LPG: ";
    in >> station.lpgVolume;
    cout << "����i�� ��'�� ������������i�: ";
    in >> station.electricVolume;
    cout << "����i�� ����� ���������� ������: ";
    in >> station.dieselReserve;
    cout << "����i�� ����� �������: ";
    in >> station.gasolineReserve;
    cout << "����i�� ����� LPG: ";
    in >> station.lpgReserve;
    cout << "����i�� ����� ������������i�: ";
    in >> station.electricReserve;
    cout << "����i�� ��������� �����i��� ������������ �i�������: ";
    in >> station.nozzleCapacity;
    return in;
}