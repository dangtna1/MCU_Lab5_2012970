/*
 * command.h
 *
 *  Created on: Dec 19, 2022
 *      Author: tamqu
 */

#ifndef INC_COMMAND_H_
#define INC_COMMAND_H_

#include "global.h"
extern int command_status;

#define RST 0
#define OK 1


void command_parser_fsm(void);

#endif /* INC_COMMAND_H_ */
