/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   block.cpp
 * Author: yoe
 * 
 * Created on 27 de septiembre de 2016, 01:35 AM
 */

#include "Block.h"
#include<stdlib.h>
#include<time.h>        
Block::Block() {
}
Block::Block(int &assoc):block_num(assoc){
	blocks = new elBlock[assoc];
}

Block::Block(const Block& orig): block_num(orig.block_num),  blocks(0) { 
        if(block_num){
		blocks = new elBlock[block_num];
		for(int i=0; i<block_num; i++){
			blocks[i] = orig.blocks[i];
		}
	}

}
Block::~Block() {
}

Block& Block::operator=(const Block& nuevoBloque){
	delete[] blocks;
	blocks = 0;
	block_num = nuevoBloque.block_num;
	
	if(block_num){
		blocks = new elBlock[block_num];
		for(int i=0; i<block_num; i++){
			blocks[i] = nuevoBloque.blocks[i];
		}
	}
}
        
 elBlock* Block::buscar(int tag){
	for(int i=0; i < block_num; i++){
		if(blocks[i].bitValid && blocks[i].tagBlock == tag)
			return blocks + i;
	}
	return 0;
}
 
 bool Block::write(int tag){
        srand(time(NULL));
        int num ; 
       // num = rand();
	elBlock *p = buscar(tag);
	if(p){
		return true;
	}
	else{//aleatorio
             num=rand()%block_num;
            blocks[num].bitValid = true;
            blocks[num].tagBlock = tag;   
        }
 }