#include <iostream>
#include <string>
#include <fstream>
#include <json.hpp>

using namespace std;
using namespace sjson;

int main()
{
	/*
	JsonNode root(JSON_VALUE_TYPE_OBJECT);

	JsonNode* item_int = new JsonNode(JSON_VALUE_TYPE_INT, "id");
	item_int->set_value(123);
	root.obj_set_item(item_int);

	JsonNode* item_int1 = new JsonNode(JSON_VALUE_TYPE_INT, "id");
	item_int1->set_value(234);
	root.obj_set_item(item_int1);

	JsonNode* item_double = new JsonNode(JSON_VALUE_TYPE_DOUBLE, "weight");
	item_double->set_value(63.25);
	root.obj_set_item(item_double);

	JsonNode* item_string = new JsonNode(JSON_VALUE_TYPE_STRING, "name");
	item_string->set_value("SimpleJSON");
	root.obj_set_item(item_string);

	JsonNode* item_num_array = new JsonNode(JSON_VALUE_TYPE_ARRAY, "num_array");
	JsonNode* num1 = new JsonNode(JSON_VALUE_TYPE_DOUBLE);
	num1->set_value(12.1);
	JsonNode* num2 = new JsonNode(JSON_VALUE_TYPE_DOUBLE);
	num2->set_value(5.6);
	JsonNode* num3 = new JsonNode(JSON_VALUE_TYPE_DOUBLE);
	num3->set_value(8.8);
	item_num_array->push_back(num1);
	item_num_array->push_back(num2);
	item_num_array->push_back(num3);
	root.obj_set_item(item_num_array);

	JsonNode* item_object = new JsonNode(JSON_VALUE_TYPE_OBJECT, "friend");
	JsonNode* sub_item_int = new JsonNode(JSON_VALUE_TYPE_INT, "id");
	sub_item_int->set_value(123);
	item_object->obj_set_item(sub_item_int);
	JsonNode* sub_item_double = new JsonNode(JSON_VALUE_TYPE_DOUBLE, "weight");
	sub_item_double->set_value(63.25);
	item_object->obj_set_item(sub_item_double);
	JsonNode* sub_item_string = new JsonNode(JSON_VALUE_TYPE_STRING, "name");
	sub_item_string->set_value("SimpleNN");
	item_object->obj_set_item(sub_item_string);
	//root.obj_set_item(item_object);

	JsonNode* sub_item_string_array = new JsonNode(JSON_VALUE_TYPE_ARRAY, "layers");
	JsonNode* string1 = new JsonNode(JSON_VALUE_TYPE_STRING);
	string1->set_value("convolution");
	JsonNode* string2 = new JsonNode(JSON_VALUE_TYPE_STRING);
	string2->set_value("pooling");
	JsonNode* string3 = new JsonNode(JSON_VALUE_TYPE_STRING);
	string3->set_value("affine");
	sub_item_string_array->push_back(string1);
	sub_item_string_array->push_back(string2);
	sub_item_string_array->push_back(string3);
	item_object->obj_set_item(sub_item_string_array);
	root.obj_set_item(item_object);
	
	string str1;
	root.toJsonStr(str1, true, 0, true);
	cout << str1 << endl;

	sub_item_string_array->array_erase(0);
	string str2;
	root.toJsonStr(str2, true, 0, true);
	cout << str2 << endl;
	sub_item_string_array->array_erase(0);
	string str3;
	root.toJsonStr(str3, true, 0, true);
	cout << str3 << endl;
	sub_item_string_array->array_erase(0);
	string str4;
	root.toJsonStr(str4, true, 0, true);
	cout << str4 << endl;

	JsonNode* string4 = new JsonNode(JSON_VALUE_TYPE_STRING);
	string4->set_value("convolution");
	JsonNode* string5 = new JsonNode(JSON_VALUE_TYPE_STRING);
	string5->set_value("pooling");
	JsonNode* string6 = new JsonNode(JSON_VALUE_TYPE_STRING);
	string6->set_value("affine");
	sub_item_string_array->array_insert(string4, 0);
	string str5;
	root.toJsonStr(str5, true, 0, true);
	cout << str5 << endl;
	sub_item_string_array->array_insert(string5, 0);
	string str6;
	root.toJsonStr(str6, true, 0, true);
	cout << str6 << endl;
	sub_item_string_array->array_insert(string6, 1);
	string str7;
	root.toJsonStr(str7, true, 0, true);
	cout << str7 << endl;
	

	//ofstream ofs("/home/lpy/SimpleJSON/out1.json");
	//ofs << str;

	//ofs.close();

	//cout << to_string(42.4) << endl;*/
	

	return 0;
}

