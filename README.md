# SimpleJSON
A simple C++11 json parser.   用C++11实现的json解析器。

## About

SimpleJSON is a lightweight json library written in C++.It surpports basic operations including reading and writting json documents.

SimpleJSON是一个轻量的由C++实现的json解析库。支持读写json文件等基本操作。

SimpleJSON mainly used for learning and communicating C++ programming and algorithm.It cannot ensure reliability in formal application yet.

SimpleJSON主要用来学习交流C++编程和算法。暂不能保证正式用途下的可靠性。

## Dependencies

A C++11 compiler.

## Usage

Add the C++ files in ```./simple_json```to your project like your other source files.

直接将 ```./simple_json```目录下的文件加入你的工程目录，按照自己的需求去编译即可。

## Example

```cpp
#include <iostream>
#include <string>
#include <fstream>
#include <json.hpp>

using namespace std;
using namespace sjson;

int main()
{
    ifstream ifs("/home/lpy/SimpleJSON/out1.json");    
    Json json(ifs);   		// construct json parser using input file stream
    if (json.succeed())         
    {
        string json_ptr;
        json.toString(json_ptr, true);   // get json string
        cout << json_ptr << endl;

        JsonNode root = json.getRoot();  // get the root object
        int id = root["id"].as_int();  // get the integer value of item named "id" in root object
        cout << "id = " << id << endl;
        root["id"] = 567;  // set the value
        id = root["id"].as_int();
        cout << "id = " << id << endl;
        string layer = root["friend"]["layers"][1].as_string();  // get the  string value from array
        cout << layer << endl;

        root["friend"]["layers"][1] = "relu"; // set the value
        json.toString(json_ptr, true);
        cout << json_ptr << endl;

        root["friend"]["layers"].clear(); // clear array
        json.toString(json_ptr, true);
        cout << json_ptr << endl;

        root["author"] = "lpy"; // add an item named "author" and set the value
        json.toString(json_ptr, true);
        cout << json_ptr << endl;

        if (root["optimizers"].set_array(3)) // add an array named "optimizers" and size is 3
        {
            json.toString(json_ptr, true);
            cout << json_ptr << endl;
        }
        root["optimizers"][0] = "GradDescent";
        root["optimizers"][1] = "Momentumn";
        root["optimizers"][2] = "AdaGrad";
        json.toString(json_ptr, true);
        cout << json_ptr << endl;

        json.save("/home/lpy/SimpleJSON/out2.json", true); // save as json file
    }            
    

	return 0;
}
```

The code above just shows part of operations.See the source code to learn more!
