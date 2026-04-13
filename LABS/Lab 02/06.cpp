#include<iostream>
using namespace std;
//The multi-Zone smart  climate control system
/*An industrial HVAC system manages building temperatures based on occupancy sensors, time of day, and external weather alerts.
When the "Occupancy Sensor" is triggered, the system first checks if there is an "Extreme Weather Alert" active from the city.
If an alert is active, the system checks the "Building Zone":
For "Lab Zones," it sets the temperature to a strict 22°C regardless of the time.
For "Office Zones," it sets the temperature to 24°C.
However, if there is no weather alert and the building is occupied, the system looks at the "Time of Day."
During "Peak Hours" (08:00 to 18:00), the system checks the "Energy Saver Mode" status:
If Energy Saver is ON, it sets the cooling to 25°C.
If it is OFF, it sets it to 21°C.
If the building is occupied but it is "Off-Peak Hours," the system simply maintains a steady 26°C
In the event that the "Occupancy Sensor" is NOT triggered, the system checks if it is "Winter":
If so, it keeps the heat at 15°C to prevent pipes from freezing.
Otherwise, it turns the entire system OFF.*/
int main(){
    bool occupancy_sensor,extreme_weather_alert,energy_saver_mode,winter;
    string building_zone;
    int hour;
    cout<<"Is the occupancy sensor triggered? (1 for true, 0 for false): ";
    cin>>occupancy_sensor;
    if(occupancy_sensor){
        cout<<"Is there an extreme weather alert? (1 for true, 0 for false): ";
        cin>>extreme_weather_alert;
        if(extreme_weather_alert){
            cout<<"Enter the building zone (Lab/Office): ";
            cin>>building_zone;
            if(building_zone=="Lab"){
                cout<<"Temperature set to 22°C";
            }
            else if(building_zone=="Office"){
                cout<<"Temperature set to 24°C";
            }
            else{
                cout<<"Invalid building zone";
            }
        }
        else{
            cout<<"Enter the hour of the day (0-23): ";
            cin>>hour;
            if(hour>=8 && hour<=18){
                cout<<"Is Energy Saver Mode ON? (1 for true, 0 for false): ";
                cin>>energy_saver_mode;
                if(energy_saver_mode){
                    cout<<"Cooling set to 25°C";
                }
                else{
                    cout<<"Cooling set to 21°C";
                }
            }
            else{
                cout<<"Temperature maintained at 26°C";
            }
        }
    }
    else{
        cout<<"Is it winter? (1 for true, 0 for false): ";
        cin>>winter;
        if(winter){
            cout<<"Heat set to 15°C";
        }
        else{
            cout<<"System is OFF";
        }
    }
    return 0;
}
