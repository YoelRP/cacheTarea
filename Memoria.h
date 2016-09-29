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
            //CacheMemory(const dir_t &v_assoc, const dir_t &v_mem_size, const dir_t &v_block_size);           
            ~Memoria();
            Memoria ( int &valueAssoc, int &valueMemorySize,  int &valeuBlockSize);
            void Generador();
           
		void set_block_size(int &valor);
		void set_assoc(int &valor);
		void set_mem_size(int &valor);
		const void print();
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


