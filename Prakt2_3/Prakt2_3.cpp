

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    struct WeatherInfo {
        double temperature;
        double humidity;
        double windSpeed;
    };

    WeatherInfo weather{ 23, 56, 10.4 };
    cout << "Температура воздуха: " << weather.temperature << endl;
    cout << "Влажность: " << weather.humidity << "%" << endl;
    cout << "Скорость ветра: " << weather.windSpeed << "м/с" << endl;
    return 0;
}


