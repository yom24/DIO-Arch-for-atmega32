/*
 * BitMath.h
 *
 * Created: 11/7/2020 11:44:00 PM
 *  Author: youss
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_

#define setbit(reg,BitNo) (reg |= (1<<BitNo) )
#define clearbit(reg,BitNo) (reg &= ~(1<<BitNo) )
#define togglebit(reg,BitNo) (reg ^= (1<<BitNo) )
#define getbit(reg,BitNo) ((reg>>BitNo) & 1 )


#endif /* BITMATH_H_ */