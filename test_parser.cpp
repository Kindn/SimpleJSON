#include <iostream>
#include <string>
#include <fstream>
#include <json.hpp>

using namespace std;
using namespace sjson;

int main()
{
    ifstream ifs("/home/lpy/SimpleJSON/out1.json");
    try
    {
        Json json(ifs);
        string json_ptr;
        json.toString(json_ptr, true);
        cout << json_ptr << endl;

        JsonNode root = json.getRoot();
        int id = root["id"].as_int();
        cout << "id = " << id << endl;
        root["id"] = 567;
        id = root["id"].as_int();
        cout << "id = " << id << endl;
        string layer = root["friend"]["layers"][1].as_string();
        cout << layer << endl;

        root["friend"]["layers"][1] = "relu";
        json.toString(json_ptr, true);
        cout << json_ptr << endl;

        root["friend"]["layers"].clear();
        json.toString(json_ptr, true);
        cout << json_ptr << endl;

        root["author"] = "lpy";
        json.toString(json_ptr, true);
        cout << json_ptr << endl;
        //int id = root["id"]->as_int();
        //cout << "id = " << id << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

	return 0;
}

