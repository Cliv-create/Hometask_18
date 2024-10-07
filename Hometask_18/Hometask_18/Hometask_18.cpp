#include <iostream>
using namespace std;

struct Tablet {
    string product_name = "Apple iPad Air 11";
    string product_article = "MUWQ3NF/A";
    string company_name = "Apple";
    double display_diagonal = 11;
    short pixel_density_ppi = 261;
    string display_type = "IPS";
    short desiplay_refresh_rate = 60;
    string hdr_support = "HDR10";
    string screen_protection = "NOT_DEFINED";
    short display_brightness = 500;
    string operating_system = "ipadOS";
    double operating_system_version = 18;
    string processor_model = "Apple M2";
    short processor_core_count = 8;
    string graphical_processor = "Apple GPU";
    short ram_amount = 8;
    string ram_type = "NOT_DEFINED";
    int built_in_memory_gb = 1024;
    string memory_specification = "UFS 4.0";
    bool memory_card_slot = 0;
    string mobile_communications_methods = "NOT_SUPPORTED";
    string sim_card_type = "NOT_SUPPORTED";
    char sim_card_amount = '0';
    string communications_methods = "Wi-Fi 6E (802.11ax) / Bluetooth v 5.3 / NFC - NOT_DEFINED";
    string connection_ports = "USB C";
    int battery_capacity_mah = 0; // 0 - Not defined
    string fast_charging = "NOT_DEFINED";
    short charging_power_watts = 0; // 0 - Not defined
};

struct Phone {
    string product_name = "Samsung Galaxy S24 Ultra";
    string product_article = "SM-S928BLBGEUB";
    string company_name = "Samsung";
    double display_diagonal = 6.8;
    short pixel_density_ppi = 501;
    string display_type = "AMOLED (LTPO)";
    short desiplay_refresh_rate = 120;
    string hdr_support = "HDR10+";
    string screen_protection = "Gorilla Glass Armor";
    short display_brightness = 2600;
    string operating_system = "Android";
    double operating_system_version = 14;
    string processor_model = "Snapdragon 8 Gen 3";
    short processor_core_count = 8;
    string graphical_processor = "Adreno 750";
    short ram_amount = 12;
    string ram_type = "LPDDR5X";
    int built_in_memory_gb = 256;
    string memory_specification = "UFS 4.0";
    bool memory_card_slot = 0;
    string mobile_communications_methods = "5G / 4G (LTE) / 3G / GSM / CDMA";
    string sim_card_type = "nano+e-SIM";
    char sim_card_amount = '2';
    string communications_methods = "Wi-Fi 7 (802.11be) / Bluetooth v 5.3 / NFC - чип";
    string connection_ports = "USB C 3.2 gen1";
    int battery_capacity_mah = 5000;
    string fast_charging = "Power Delivery 3.0";
    short charging_power_watts = 45;
};


struct Monitor {
    string product_name = "Монітор 27\" MSI MAG 274QRF - QD E2";
    long long product_article = 422528760;
    string company_name = "MSI";
    string model_name = "274QRF-QD E2";
    double diagonal = 27;
    int width_cm = 614;
    int height_cm = 402;
    double weight_kg = 6.05;
    string matrix_type = "QLED";
    double response_time_ms = 1;
    int refresh_rate = 144;
    short brightness = 400;
    string special_functions = "KVM-перемикач. PBP (Picture by Picture). Flicker-Free. Adaptive-Sync";
    string hdr_support = "DisplayHDR 400";
    string connection_ports = " USB-хаб 2.0 2x USB-A. вихід mini-Jack (3.5 мм)";
    string video_connections = "DisplayPort v 1.4. 2xHDMI v 2.0. USB type C (DisplayPort Alt Mode).";
    short charging_power_watt = 65;
    string official_website = "uk.msi.com";
    bool rgb_lightning = 1;
    bool external_power_supply = 1;
    string description = "Швидкодіючий геймерський QLED-монітор з 27-дюймовим тонкорамковим екраном QuadHD/2К-роздільна здатність, чудовою передачею кольору, підвищеною яскравістю, високою частотою оновлення і ефектною зовнішньою RGB LED-підсвічуванням, керованої за технологією MSI Mystic Light Sync.";
    int reviews_amount = 286;
    double score_out_of_five = 4.8;
};

int main()
{
    cout << "Hello World!\n";
}