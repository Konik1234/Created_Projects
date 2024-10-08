#pragma once

#include <iostream>
#include <queue>
#include <sstream>
#include <map>
#include "mysql.h"
#include "mosquitto.h"
#include <chrono>
#include <thread>


// Funkcja obsługująca połączenie z brokerem MQTT
void onConnect(struct mosquitto* mosq, void* userdata, int result);



// Funkcja do wysyłania danych z kolejki do tabeli w bazie danych MySQL
void sendToMySQL(MYSQL* connection, std::queue<std::string>& messageQueue, const std::string& tableName, const std::vector<std::string>& columns);