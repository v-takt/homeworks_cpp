#include <iostream>

using namespace std;

int main() {
    double roof_tax, area_tax, garden_tax;
    float roof_area, area, garden_area, floor_percent;
    bool 
        roof_high_qulility_tree, roof_straw, roof_low_quality_materials, roof_sewage_system,
        area_high_qulility_tree, area_straw, area_low_quality_materials, area_sewage_system,
        garden_high_qulility_tree, garden_straw, garden_low_quality_materials, garden_sewage_system;
    int roof_floor;

    roof_tax, area_tax, garden_tax = 0, 0, 0;
    
        

    cout << "How many meters with a roof?" << endl;
    cin >> roof_area;

    cout << "How many meters without a roof" << endl;
    cin >> area;

    cout << "How many square meters of garden?" << endl;
    cin >> garden_area;


    if (roof_area) {
        cout << "Meters with a roof" << endl;

        cout << "High qulility tree" << endl;
        cin >> roof_high_qulility_tree;

        if (not roof_high_qulility_tree) {
            cout << "Straw" << endl;
            cin >> roof_straw; 
            if (not roof_straw) {   
                cout << "Low quality materials" << endl;
                cin >> roof_low_quality_materials;
            }
        }       
        cout << "Sewage system" << endl;
        cin >> roof_sewage_system;

        cout << "Floor" << endl;
        cin >> roof_floor;
        if (roof_floor == 2) {
            floor_percent = 1.1;
        }
        else if (3 <= roof_floor <= 4) {
            floor_percent = 1.15;
        }
        else if (roof_floor = 0) {
            floor_percent = 1;
        }
        else {
            floor_percent = 1.2;
        }


        roof_tax = 5000 * (1.15 * roof_high_qulility_tree) * (1.10 * roof_straw) * (1.05 * roof_low_quality_materials) + (2500 * roof_sewage_system);

        roof_tax *= floor_percent;
        roof_tax *= roof_floor;
        
    }
    if (area) {
        cout << "Meters without a roof" << endl;

        cout << "High qulility tree" << endl;
        cin >> area_high_qulility_tree;

        if (not area_high_qulility_tree) {
            cout << "Straw" << endl;
            cin >> area_straw;
            if (not area_straw) {
                cout << "Low quality materials" << endl;
                cin >> area_low_quality_materials;
            }
        }
        cout << "Sewage system" << endl;
        cin >> area_sewage_system;

        area_tax = 3000 * (1.15 * area_high_qulility_tree) * (1.10 * area_straw) * (1.05 * area_low_quality_materials) + (2500 * area_sewage_system);
        area_tax *= garden_area;
        
    }
    if (garden_area) {
        cout << "Square meters of garden" << endl;

        cout << "High qulility tree" << endl;
        cin >> garden_high_qulility_tree;

        if (not garden_high_qulility_tree) {
            cout << "Straw" << endl;
            cin >> garden_straw;
            if (not garden_straw) {
                cout << "Low quality materials" << endl;
                cin >> garden_low_quality_materials;
            }
        }
        cout << "Sewage system" << endl;
        cin >> garden_sewage_system;
        

        garden_tax = 1000 * (1.15 * garden_high_qulility_tree) * (1.10 * garden_straw) * (1.05 * garden_low_quality_materials) + (2500 * garden_sewage_system);
        garden_tax *= garden_area;
    }
    
    cout << "Roof tax: " << roof_tax << endl;
    cout << "Area tax: " << area_tax << endl;
    cout << "Garden tax: " << garden_tax << endl;

    cout << "Total tax: " << roof_tax + area_tax + garden_tax << endl;
    



    return 0; 
}