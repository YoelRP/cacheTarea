/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Block.h"
#include "Memoria.h"
#include <sstream>
#include <cmath>
#include <iostream>

Memoria::Memoria() {
	 block_size = 0;
         assoc = 0;
         mem_size = 0;
         tag_size = 0;
         index_size = 0;
         offset_size = 0;
         block_num = 0;
         set_num = 0;
}
Memoria::~Memoria(){
}
void Memoria::set_block_size(int &valor){
block_size=valor;
}
void Memoria::set_mem_size(int &valor){
mem_size=valor;
}
void Memoria::set_assoc(int &valor){
    assoc =valor;
}

Memoria::Memoria( int &valueAssoc, int &valueMemorySize,  int &valeuBlockSize){
        set_assoc(valueAssoc);
	set_mem_size(valueMemorySize);
	set_block_size(valeuBlockSize);
	Generador();

}




void Memoria::Generador(){
block_num = mem_size/block_size;
	set_num = block_num/assoc;

	offset_size = (int) log2(block_size);
	index_size = (int) log2(set_num);
	tag_size = DIRECCIONES - (offset_size + index_size);
	vec_bloques.resize(set_num, Block(assoc));

}