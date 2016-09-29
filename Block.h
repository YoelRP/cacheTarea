/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   block.h
 * Author: yoe
 *
 * Created on 27 de septiembre de 2016, 01:35 AM
 */

#ifndef BLOCK_H
#define BLOCK_H
struct elBlock{
	elBlock():bitValid(false),tagBlock(0){};
	~elBlock(){};
	
	bool bitValid;
	int tagBlock;

};

class Block {
public:
    Block();
    Block(int &assoc);
    Block(const Block& orig);
    virtual ~Block();
    Block& operator=(const Block& nuevoBloque);
    elBlock* buscar(int tag);
    bool write(int tag);
    
    
private:

		elBlock *blocks;
		int block_num;

};

#endif /* BLOCK_H */

