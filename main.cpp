/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yoe
 *
 * Created on 28 de septiembre de 2016, 10:46 PM
 */
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>  
using namespace std;

/*
 * 
 */
int main(int argc, char* argv[]) {
      int parametros [3];
        parametros[0]= atoi(argv[1]);
	parametros[1]= atoi(argv[2]);
	parametros[2]= atoi(argv[3]);
   cout << parametros[1] << endl;
   
   
        return 0;
}

