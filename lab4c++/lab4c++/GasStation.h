
#include <iostream>
#include <string>

using namespace std;

class CGasStation {
private:
    double dieselVolume;
    double gasolineVolume;
    double lpgVolume;
    double electricVolume;
    double dieselReserve;
    double gasolineReserve;
    double lpgReserve;
    double electricReserve;
    double nozzleCapacity;

public:
   
    CGasStation(double dieselVolume = 1000, double gasolineVolume = 1000, double lpgVolume = 1000, double electricVolume = 1000,
        double dieselReserve = 500, double gasolineReserve = 500, double lpgReserve = 500, double electricReserve = 500,
        double nozzleCapacity = 50);

   
    void get_info() const;

   
    void setDieselVolume(double volume);
    double getDieselVolume() const;

    void setGasolineVolume(double volume);
    double getGasolineVolume() const;

    void setLpgVolume(double volume);
    double getLpgVolume() const;

    void setElectricVolume(double volume);
    double getElectricVolume() const;

    void setDieselReserve(double reserve);
    double getDieselReserve() const;

    void setGasolineReserve(double reserve);
    double getGasolineReserve() const;

    void setLpgReserve(double reserve);
    double getLpgReserve() const;

    void setElectricReserve(double reserve);
    double getElectricReserve() const;

    void setNozzleCapacity(double capacity);
    double getNozzleCapacity() const;

    
    void increaseDieselReserve(double amount);
    void increaseGasolineReserve(double amount);
    void increaseLpgReserve(double amount);
    void increaseElectricReserve(double amount);

    double refuelDiesel(double amount);
    double refuelGasoline(double amount);
    double refuelLpg(double amount);
    double refuelElectric(double amount);
};
