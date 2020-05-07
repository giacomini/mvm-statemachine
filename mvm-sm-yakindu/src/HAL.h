/*
 * HAL.h
 *
 *  Created on: 7 mag 2020
 *      Author: AngeloGargantini
 */

#ifndef HAL_H_
#define HAL_H_

class HAL {
public:
	HAL();
	virtual ~HAL();
	void startExpiration();
	void startInspiration();
};

#endif /* HAL_H_ */
