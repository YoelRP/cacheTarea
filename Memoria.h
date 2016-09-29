/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   memoria.h
 * Author: yoe
 *
 * Created on 27 de septiembre de 2016, 12:23 AM
 */

#include "Block.h"
#include <vector>


class Memoria{
	public:
            Memoria();
            
            ~Memoria();
            Memoria ( int &valueAssoc, int &valueMemorySize,  int &valeuBlockSize);
            void generador();
           //metodo imprime como se realizo el cache con todos los caltculos
            void imprimir();
            
            // Los metodos set son para dar valor a los atributos 
		void set_block_size(int &valor);
		void set_assoc(int &valor);
		void set_mem_size(int &valor);
           //Se trato de implementar el cache mediante un vector 
                std::vector< Block > vec_bloques;
private: 
		int tag_size;
		int index_size;
		int offset_size;
		int block_num;
		int set_num;

		int tag;
		int index;
                
                int block_size ;
                int assoc ;
                int mem_size;

                const static int DIRECCIONES = 32;
};


