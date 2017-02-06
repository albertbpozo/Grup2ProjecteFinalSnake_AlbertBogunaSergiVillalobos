#pragma once
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#define Bin Binario::Instance()
using  std::ios;
struct Tops {
	std::string name;
	int score;
};

class Binario {
	private:
		Binario() {
		}
public:
	static Binario& Instance(){
		static Binario bin;
		return bin;
	}
	

	Tops player[10];



	void setNewRanking(Tops &create) {
		for (int n = 0; n < 10; n++) {
			if (player[n].score < create.score) {
				for (int i = 9; i > n; i--) {
					player[i] = player[i - 1];
				}
				player[n] = create;
				break;
			}
		}
	}

	void write(std::string &alias, int score) {
		std::ifstream readFile("../../res/Ranking.bin", ios::binary);
		for (int n = 0; n < 10; n++) {
			std::getline(readFile, player[n].name, '\0');
			readFile.read(reinterpret_cast<char*>(&player[n].score), sizeof(player[n].score));
		}
		readFile.close();
		Tops toIns;
		toIns.name = alias;
		toIns.score = score;
		//sort();
		setNewRanking(toIns);
		std::ofstream writeFile("../../res/Ranking.bin", ios::binary);
		for (int n = 0; n < 10; n++) {
			writeFile.write(player[n].name.c_str(), player[n].name.size());
			writeFile.write("\0", sizeof(char));
			writeFile.write(reinterpret_cast<char*>(&player[n].score), sizeof(player[n].score));
		}
		writeFile.close();
	}
	std::vector<Tops> readBin() {
		std::ifstream readFile("../../res/Ranking.bin", ios::binary);
		std::vector<Tops> returned(10);
		for (int n = 0; n < 10; n++) {
			std::getline(readFile, returned[n].name, '\0');
			readFile.read(reinterpret_cast<char*>(&returned[n].score), sizeof(returned[n].score));
		}
		readFile.close();
		return returned;
	}
};